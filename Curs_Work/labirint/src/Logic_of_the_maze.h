#ifndef LOGIC_OF_THE_MAZE_H
#define LOGIC_OF_THE_MAZE_H

#include <QTimer>
#include <QObject>
#include <QString>
#include <QVector>

#include <ctime>
#include <vector>
#include <cstdlib>
#include <queue>

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

    struct Point {
        int x = -1, y = -1;
    };
    vector<Point> path;
private:
    bool agentStarted = false;
    QTimer* agentTimer;
    int currentPathIndex = 0;  // Добавляем поле для отслеживания текущей позиции в пути
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


    vector <Point> findPath(const vector<vector<int>>& maze) {
        int rows = maze.size();
        int cols = maze[0].size();

        Point start, end;
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                if (maze[i][j] == 2) {
                    start = {i, j};
                } else if (maze[i][j] == 3) {
                    end = {i, j};
                }
            }
        }

        queue<pair<Point, vector<Point>>> q;
        q.push({start, {start}});

        vector<vector<bool>> visited(rows, vector<bool>(cols, false));
        visited[start.x][start.y] = true;

        while (!q.empty()) {
            Point current = q.front().first;
            vector<Point> path = q.front().second;
            q.pop();

            if (current.x == end.x && current.y == end.y) {
                return path;
            }

            int dx[] = {0, 1, 0, -1}; // Правое, нижнее, левое, верхнее
            int dy[] = {1, 0, -1, 0};

            for (int i = 0; i < 4; ++i) {
                int nextX = current.x + dx[i];
                int nextY = current.y + dy[i];

                if (nextX >= 0 && nextX < rows && nextY >= 0 && nextY < cols &&
                    maze[nextX][nextY] != 1 && !visited[nextX][nextY]) {
                    visited[nextX][nextY] = true;
                    vector<Point> nextPath = path;
                    nextPath.push_back({nextX, nextY});
                    q.push({{nextX, nextY}, nextPath});
                }
            }
        }

        return {}; // Путь не найден
    }

    void moveAgent() {
        if (!agentStarted) return;

        auto [currentX, currentY] = findPlayerPosition(Game_agent_Maze);
        if (currentX == -1 || currentY == -1) return;

        // Если путь пуст или нужно его пересчитать
        if (path.empty()) {
            path = findPath(Game_agent_Maze);
            if (path.empty()) return;
            currentPathIndex = 1;  // Пропускаем текущую позицию
        }

        // Проверяем, не достигли ли конца пути
        if (currentPathIndex >= path.size()) {
            agentStarted = false;
            agentTimer->stop();
            emit agentWon();
            return;
        }

        // Получаем следующую позицию из пути
        Point nextPos = path[currentPathIndex];

        // Проверяем, является ли следующая позиция допустимой
        if (Game_agent_Maze[nextPos.x][nextPos.y] != 1) {
            // Проверяем, достигнет ли агент цели
            bool reachedGoal = (Game_agent_Maze[nextPos.x][nextPos.y] == 3);

            // Перемещаем агента
            Game_agent_Maze[currentY][currentX] = 0;  // Очищаем текущую позицию
            Game_agent_Maze[nextPos.x][nextPos.y] = 2;  // Устанавливаем агента на новую позицию

            fillScreenImages();  // Обновляем отображение

            currentPathIndex++;  // Переходим к следующей точке пути

            if (reachedGoal) {
                agentStarted = false;
                agentTimer->stop();
                emit agentWon();
            }
        } else {
            // Если путь заблокирован, пересчитываем его
            path.clear();
        }
    }

    void startAgent() {
        if (!agentStarted) {
            agentStarted = true;
            currentPathIndex = 0;
            path = findPath(Game_agent_Maze);
            if (!agentTimer->isActive()) {
                agentTimer->start(300);  // Устанавливаем интервал движения
            }
        }
    }

    void cleanup() {
        if (agentTimer) {
            agentTimer->stop();
        }
        myMaze.clear();
        Game_agent_Maze.clear();
        myGameScreenImageData.clear();
        agentScreenImageData.clear();
        path.clear();
        currentPathIndex = 0;
        agentStarted = false;
    }

signals:

    void myGameScreenImagesChanged();
    void agentScreenImagesChanged();
    void gameWon();
    void agentWon();
};


#endif // LOGIC_OF_THE_MAZE_H
