#pragma once

#include "SnakeData.h"

#include <QObject>

class GameplayManager : public QObject
{
    Q_OBJECT
public:
    explicit GameplayManager(QObject *parent = nullptr);
    Q_INVOKABLE SnakeData &snakeData();

public slots:
    void onDirectionChanged(Direction direction);

private:
    bool checkCollision() const;
    std::vector<CollisionObject> mObjects;
    SnakeData mSnake;
};
