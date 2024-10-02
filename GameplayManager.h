#pragma once

#include "SnakeData.h"

#include <QObject>

class GameplayManager : public QObject
{
    Q_OBJECT
public:
    explicit GameplayManager(QObject *parent = nullptr);

public slots:
    void onDirectionChanged(Direction direction);

private:
    bool checkCollision() const;
    SnakeData mSnake;
};
