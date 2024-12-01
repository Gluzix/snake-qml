#pragma once

#include "GameplayManager.h"
#include "KeyInputEventFilter.h"

#include <QTimer>
#include <QObject>
#include <QQmlApplicationEngine>

class GameManager : public QObject
{
    Q_OBJECT
public:
    explicit GameManager(QObject *parent = nullptr);

    void start();
    void pause();

private slots:
    void updateGameplay();

private:
    void loadQml();
    void registerQmlTypes();

    GameplayManager mGameplayManager;
    KeyInputEventFilter mInputEventFilter;
    QQmlApplicationEngine mEngine;

    QTimer mTimer;

    const int timerTimeout{100};
};
