#include "Logic_of_the_maze.h"

Logic_of_the_maze::Logic_of_the_maze(QObject * parent)
    : QObject{parent}
    , agentStarted(false)  // Инициализируем переменную-член
{   agentTimer = new QTimer(this); // инициализация таймера
    connect(agentTimer, &QTimer::timeout, this, &Logic_of_the_maze::moveAgent);
}
