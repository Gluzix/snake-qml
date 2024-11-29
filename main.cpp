#include <QGuiApplication>
#include <QQmlApplicationEngine>

#include <GameManager.h>

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);
    GameManager manager;

    return app.exec();
}
