#pragma once

#include "GameplayManager.h"

#include <QObject>
#include <QQmlApplicationEngine>

class GameManager : public QObject
{
    Q_OBJECT
public:
    explicit GameManager(QObject *parent = nullptr);

private:
    void loadQml();
    void registerQmlTypes();

    GameplayManager mGameplayManager;
    QQmlApplicationEngine mEngine;
};
