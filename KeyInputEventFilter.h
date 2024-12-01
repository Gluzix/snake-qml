#pragma once

#include <QObject>

class KeyInputEventFilter : public QObject
{
    Q_OBJECT
public:
    explicit KeyInputEventFilter(QObject *parent = nullptr);
    bool eventFilter(QObject *watched, QEvent *event) override;
    Q_INVOKABLE void listenTo(QObject *obj);

signals:
    void keyClicked(Qt::Key);
};
