#include "GameManager.h"

#include <QGuiApplication>
#include <QQmlApplicationEngine>

GameManager::GameManager(QObject *parent)
    : QObject{parent}
{
    registerQmlTypes();
    loadQml();
}

void GameManager::loadQml()
{
    QQmlApplicationEngine engine;
    const QUrl url(u"qrc:/snake/Main.qml"_qs);
    QObject::connect(
        &engine,
        &QQmlApplicationEngine::objectCreationFailed,
        QGuiApplication::instance(),
        []() { QCoreApplication::exit(-1); },
        Qt::QueuedConnection);
    engine.load(url);
}

void GameManager::registerQmlTypes()
{

}
