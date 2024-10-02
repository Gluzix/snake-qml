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
    for (const auto &bodyPart: mSnake.body()) {
        if (mSnake.position() == bodyPart.position()) {
            return true;
        }
    }

    return false;
}
