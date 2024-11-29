#include "GameplayManager.h"

GameplayManager::GameplayManager(QObject *parent)
    : QObject{parent}
{}

void GameplayManager::onDirectionChanged(Direction direction)
{
    mSnake.setDirection(direction);
}

bool GameplayManager::checkCollision() const
{
    if (mSnake.collidedWithOwnBody()) {
        return true;
    }
    return false;
}
