#include "GameManager.h"

#include <QGuiApplication>

GameManager::GameManager(QObject *parent)
    : QObject{parent}
{
    registerQmlTypes();
    loadQml();
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

}
