#include "GameManager.h"

#include <QGuiApplication>

GameManager::GameManager(QObject *parent)
    : QObject{parent}
{
    registerQmlTypes();
    loadQml();

    connect(&mTimer, &QTimer::timeout, this, &GameManager::updateGameplay);
    mTimer.start(timerTimeout);
}

void GameManager::start()
{
    if (!mTimer.isActive()) {
        mTimer.start(timerTimeout);
    }
}

void GameManager::pause()
{
    if (mTimer.isActive()) {
        mTimer.stop();
    }
}

void GameManager::loadQml()
{
    const QUrl url(u"qrc:/snake/Main.qml"_qs);
    QObject::connect(
        &mEngine,
        &QQmlApplicationEngine::objectCreationFailed,
        QGuiApplication::instance(),
        []() { QCoreApplication::exit(-1); },
        Qt::QueuedConnection);
    mEngine.load(url);
}

void GameManager::registerQmlTypes()
{
    qmlRegisterSingletonInstance("SnakeEngine", 1, 0, "GameplayManager", &mGameplayManager);
    qmlRegisterSingletonInstance("SnakeEngine", 1, 0, "KeyInputEventFilter", &mInputEventFilter);
}

void GameManager::updateGameplay()
{

}
