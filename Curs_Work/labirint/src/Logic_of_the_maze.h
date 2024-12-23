#ifndef LOGIC_OF_THE_MAZE_H
#define LOGIC_OF_THE_MAZE_H

#include <vector>
#include <QObject>
#include <QString>
#include <QVector>

//#include <iterator>
//#include <iostream>
//#include <vector>

class Logic_of_the_maze : public QObject
{

    Q_OBJECT

    Q_PROPERTY(QVector<QStringList> myGameScreenImages READ getMyGameScreenImages NOTIFY myGameScreenImagesChanged)
    Q_PROPERTY(QVector<QStringList> agentScreenImages READ getAgentScreenImages NOTIFY agentScreenImagesChanged)
public:
    explicit Logic_of_the_maze (QObject * parent = nullptr);
    //Logic_of_the_maze();
    using Maze = std::vector<std::vector<int>>;
    Maze myMaze = {
        {1, 1, 1, 1, 1},
        {1, 0, 0, 0, 1},
        {1, 0, 2, 0, 1},
        {1, 0, 0, 3, 1},
        {1, 1, 1, 1, 1}
    };
    // 0 - путь, 1 - стена, 2 - агент, 3 - цель

    // Пути к изображениям
    std::vector<std::vector<QString>> myGameScreenImageData;
    std::vector<std::vector<QString>> agentScreenImageData;

    // QVector<QStringList> getMyGameScreenImages() const {
    //     QVector<QStringList> result;
    //     for (const auto& row : myGameScreenImageData) {

    //         result.append(QStringList::fromVector(QVector<QString>::fromStdVector(row)));
    //     }
    //     return result;
    // }
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

    // QVector<QStringList> getAgentScreenImages() const {
    //     QVector<QStringList> result;
    //     for (const auto& row : agentScreenImageData) {
    //         result.append(QStringList::fromVector(QVector<QString>::fromStdVector(row)));
    //     }
    //     return result;
    // }

public slots:
    void fillScreenImages() {
        int rows = myMaze.size();
        if (rows == 0) return;
        int cols = myMaze[0].size();

        myGameScreenImageData.resize(rows, std::vector<QString>(cols));
        agentScreenImageData.resize(rows, std::vector<QString>(cols));
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                switch (myMaze[i][j]) {
                case 0:
                    myGameScreenImageData[i][j] = "images/void_img.jpg";
                    agentScreenImageData[i][j] = "images/void_img.jpg";
                    break;
                case 1:
                    myGameScreenImageData[i][j] = "images/well_element.jpg";
                    agentScreenImageData[i][j] = "images/well_element.jpg";
                    break;
                case 2:
                    myGameScreenImageData[i][j] = "images/my_game_element.jpg";
                    agentScreenImageData[i][j] = "images/game_agent_element.jpg";
                    break;
                case 3:
                    myGameScreenImageData[i][j] = "images/end_element";
                    agentScreenImageData[i][j] = "images/end_element";
                    break;
                default:
                    myGameScreenImageData[i][j] = "images/void_img.jpg";
                    agentScreenImageData[i][j] = "images/void_img.jpg";
                    break;
                }
            }
        }
        emit myGameScreenImagesChanged();
        emit agentScreenImagesChanged();
    }

signals:
    void myGameScreenImagesChanged();
    void agentScreenImagesChanged();
};


#endif // LOGIC_OF_THE_MAZE_H
