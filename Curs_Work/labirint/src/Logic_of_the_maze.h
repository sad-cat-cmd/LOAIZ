#ifndef LOGIC_OF_THE_MAZE_H
#define LOGIC_OF_THE_MAZE_H

#include <QTimer>
#include <QObject>
#include <QString>
#include <QVector>

#include <ctime>
#include <vector>
#include <cstdlib>

using namespace std;

class Logic_of_the_maze : public QObject
{

    Q_OBJECT
    Q_PROPERTY(QVector<QStringList> myGameScreenImages READ getMyGameScreenImages NOTIFY myGameScreenImagesChanged)
    Q_PROPERTY(QVector<QStringList> agentScreenImages READ getAgentScreenImages NOTIFY agentScreenImagesChanged)


public:
    explicit Logic_of_the_maze (QObject * parent = nullptr);
    const int width = 21, height = 21;

    using Maze = vector<vector<int>>;
    Maze myMaze;
    Maze Game_agent_Maze;

    // Пути к изображениям
    vector<vector<QString>> myGameScreenImageData;
    vector<vector<QString>> agentScreenImageData;

    QVector<QStringList> getMyGameScreenImages() const {
        QVector<QStringList> result;
        for (const auto& row : myGameScreenImageData) {
            QStringList list;
            for (const auto& item : row) {
                list << item;
            }
            result.append(list);
        }
        return result;
    }
    QVector<QStringList> getAgentScreenImages() const {
        QVector<QStringList> result;
        for (const auto& row : agentScreenImageData) {
            QStringList list;
            for (const auto& item : row) {
                list << item;
            }
            result.append(list);
        }
        return result;
    }

private:
    bool agentStarted = false;
    QTimer* agentTimer;

    std::vector<std::vector<bool>> visitedCells;
    std::vector<std::pair<int, int>> previousMoves; // Хранение последних ходов
public slots:

    // алгоритм "Growing Tree"
    void logic_generate_maze() {
        // Устанавливаем новое "зерно" для генератора случайных чисел
        static bool seeded = false;
        if (!seeded) {
            srand(static_cast<unsigned int>(time(nullptr)));
            seeded = true;
        }

        const int width = 21, height = 21;
        myMaze.resize(height, vector<int>(width, 1));

        // Выбираем случайную начальную точку
        int startX = rand() % width;
        int startY = rand() % height;
        myMaze[startY][startX] = 0; // Начальная точка - путь

        std::vector<std::pair<int, int>> stack;
        stack.push_back({startX, startY});

        while (!stack.empty()) {
            int x = stack.back().first;
            int y = stack.back().second;

            // Соседних непосещенные клетки
            std::vector<std::pair<int, int>> neighbors;
            if (x > 1 && myMaze[y][x - 2] == 1) neighbors.push_back({x - 2, y});
            if (x < width - 2 && myMaze[y][x + 2] == 1) neighbors.push_back({x + 2, y});
            if (y > 1 && myMaze[y - 2][x] == 1) neighbors.push_back({x, y - 2});
            if (y < height - 2 && myMaze[y + 2][x] == 1) neighbors.push_back({x, y + 2});

            if (!neighbors.empty()) {
                // Выбираем случайного соседа и удаляем стену между ним и текущей клеткой
                std::pair<int, int> next = neighbors[rand() % neighbors.size()];
                myMaze[next.second][next.first] = 0;
                myMaze[(next.second + y) / 2][(next.first + x) / 2] = 0;
                stack.push_back(next);
            } else {
                // Если нет непосещенных соседей, возвращаемся назад
                stack.pop_back();
            }
        }

        // Устанавливаем агента и цель в лабиринте
        myMaze[1][1] = 2; // Агент
        myMaze[height - 2][width - 2] = 3; // Цель

        Game_agent_Maze.resize(height , vector<int>(width, 1));
        for (int i = 0; i < 21; i++){
            for (int j = 0; j < 21; j++){
                Game_agent_Maze[i][j] = myMaze[i][j];
            }
        }

        fillScreenImages();
    }
    // инициализация векторов со строками для отображения
    void fillScreenImages() {
        int rows = myMaze.size();
        if (rows == 0) return;
        int cols = myMaze[0].size();

        myGameScreenImageData.resize(rows, vector<QString>(cols));
        agentScreenImageData.resize(rows, vector<QString>(cols));
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                switch (myMaze[i][j]) {
                case 0:
                    myGameScreenImageData[i][j] = "images/void_img.jpg";
                    break;
                case 1:
                    myGameScreenImageData[i][j] = "images/well_element.jpg";
                    break;
                case 2:
                    myGameScreenImageData[i][j] = "images/my_game_element.jpg";
                    break;
                case 3:
                    myGameScreenImageData[i][j] = "images/end_element.jpg";
                    break;
                default:
                    myGameScreenImageData[i][j] = "images/void_img.jpg";
                    break;
                }

                switch (Game_agent_Maze[i][j]) {
                case 0:
                    agentScreenImageData[i][j] = "images/void_img.jpg";
                    break;
                case 1:
                    agentScreenImageData[i][j] = "images/well_element.jpg";
                    break;
                case 2:
                    agentScreenImageData[i][j] = "images/game_agent_element.jpg";
                    break;
                case 3:
                    agentScreenImageData[i][j] = "images/end_element.jpg";
                    break;
                default:
                    agentScreenImageData[i][j] = "images/void_img.jpg";
                    break;
                }
            }
        }
        emit myGameScreenImagesChanged();
        emit agentScreenImagesChanged();
    }
    //
    std::pair<int, int> findPlayerPosition(const std::vector<std::vector<int>>& maze) {
        for (int y = 0; y < maze.size(); y++) {
            for (int x = 0; x < maze[y].size(); x++) {
                if (maze[y][x] == 2) {
                    return {x, y}; // Возвращаем координаты игрока
                }
            }
        }
        return {-1, -1}; // Если игрок не найден
    }

    Q_INVOKABLE void movePlayer(int dx, int dy) {
        // Старт агента если первое движение
        if (!agentStarted) {
            startAgent();
        }
        // Находим текущую позицию игрока
        auto [x, y] = findPlayerPosition(myMaze);

        if (x == -1 || y == -1) {
            return;
        }

        // Вычисляем новую позицию
        int newX = x + dx;
        int newY = y + dy;

        // Проверяем границы лабиринта
        if (newX < 0 || newX >= myMaze[0].size() || newY < 0 || newY >= myMaze.size()) {
            return;
        }

        // Проверяем, не является ли новая позиция стеной
        if (myMaze[newY][newX] == 1) {
            return;
        }

        // Сохраняем значение целевой клетки
        bool reachedGoal = (myMaze[newY][newX] == 3);

        // Обновляем позицию игрока
        myMaze[y][x] = 0; // Убираем игрока с текущей позиции
        myMaze[newY][newX] = 2; // Устанавливаем игрока на новую позицию

        fillScreenImages();

        // Проверяем достижение цели
        if (reachedGoal) {
            // Здесь можно добавить сигнал для оповещения о победе
            emit gameWon(); // Добавьте этот сигнал в секцию signals
        }
    }



    void moveAgent() {
        if (!agentStarted) return;

        auto [x, y] = findPlayerPosition(Game_agent_Maze);
        if (x == -1 || y == -1) return;

        // Инициализация массива посещенных клеток при первом вызове
        if (visitedCells.empty()) {
            visitedCells.resize(height, std::vector<bool>(width, false));
        }

        // Отмечаем текущую клетку как посещенную
        visitedCells[y][x] = true;

        // Структура для хранения возможных ходов
        struct Move {
            int dx, dy;
            double weight;
            bool operator<(const Move& other) const {
                return weight < other.weight;
            }
        };
        std::vector<Move> possibleMoves;

        // Функция проверки возможности хода
        auto isValidMove = [&](int newX, int newY) -> bool {
            return newX >= 0 && newX < width &&
                   newY >= 0 && newY < height &&
                   Game_agent_Maze[newY][newX] != 1;
        };

        // Проверяем все возможные направления
        const std::vector<std::pair<int, int>> directions = {{1,0}, {-1,0}, {0,1}, {0,-1}};

        for (const auto& [dx, dy] : directions) {
            int newX = x + dx;
            int newY = y + dy;

            if (isValidMove(newX, newY)) {
                double weight = 1.0;

                // Базовые веса для разных типов клеток
                if (!visitedCells[newY][newX]) {
                    weight += 2.0;
                }
                if (Game_agent_Maze[newY][newX] == 3) { // Цель
                    weight += 10.0;
                }

                // Проверка на возврат
                if (!previousMoves.empty()) {
                    auto& lastMove = previousMoves.back();
                    if (dx == -lastMove.first && dy == -lastMove.second) {
                        // Если все клетки вокруг посещены или являются стенами,
                        // увеличиваем вес возврата
                        bool needBacktrack = true;
                        for (const auto& [checkDx, checkDy] : directions) {
                            int checkX = x + checkDx;
                            int checkY = y + checkDy;
                            if (isValidMove(checkX, checkY) && !visitedCells[checkY][checkX]) {
                                needBacktrack = false;
                                break;
                            }
                        }
                        weight = needBacktrack ? 5.0 : 0.5;
                    }
                }

                possibleMoves.push_back({dx, dy, weight});
            }
        }

        if (!possibleMoves.empty()) {
            // Сортируем ходы по весу
            std::sort(possibleMoves.begin(), possibleMoves.end());

            // Выбираем ход с наибольшим весом с некоторой вероятностью случайного выбора
            double randomValue = static_cast<double>(rand()) / RAND_MAX;
            Move selectedMove;

            if (randomValue < 0.7) { // 70% времени выбираем лучший ход
                selectedMove = possibleMoves.back();
            } else { // 30% времени выбираем случайный ход
                selectedMove = possibleMoves[rand() % possibleMoves.size()];
            }

            // Сохраняем текущий ход
            previousMoves.push_back({selectedMove.dx, selectedMove.dy});
            if (previousMoves.size() > 10) { // Увеличили историю ходов
                previousMoves.erase(previousMoves.begin());
            }

            // Выполняем ход
            int newX = x + selectedMove.dx;
            int newY = y + selectedMove.dy;

            // Проверяем достижение цели перед ходом
            bool reachedGoal = (Game_agent_Maze[newY][newX] == 3);

            // Выполняем перемещение
            Game_agent_Maze[y][x] = 0;
            Game_agent_Maze[newY][newX] = 2;

            if (reachedGoal) {
                agentStarted = false;
                agentTimer->stop();
                visitedCells.clear();
                previousMoves.clear();
                emit agentWon();
            }

            fillScreenImages();
        } else {
            // Если нет возможных ходов, очищаем историю посещений
            visitedCells.clear();
            visitedCells.resize(height, std::vector<bool>(width, false));
            previousMoves.clear();
        }
    }
    void startAgent() {
        if (!agentStarted) {
            agentStarted = true;
            // Запуск таймера
            if (!agentTimer->isActive()) {
                agentTimer->start(100); // Движение каждые 500 мс
            }
        }
    }

    void cleanup() {
        // Останавливаем таймер
        if (agentTimer) {
            agentTimer->stop();
            // delete agentTimer;
            // agentTimer = nullptr;
        }

        // Очищаем все векторы
        myMaze.clear();
        Game_agent_Maze.clear();
        myGameScreenImageData.clear();
        agentScreenImageData.clear();
        visitedCells.clear();
        previousMoves.clear();

        // Сбрасываем флаги
        agentStarted = false;
    }

signals:

    void myGameScreenImagesChanged();
    void agentScreenImagesChanged();
    void gameWon();
    void agentWon();
};


#endif // LOGIC_OF_THE_MAZE_H
