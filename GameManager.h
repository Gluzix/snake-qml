#pragma once

#include <QObject>

class GameManager : public QObject
{
    Q_OBJECT
public:
    explicit GameManager(QObject *parent = nullptr);

private:
    void loadQml();
    void registerQmlTypes();
};
