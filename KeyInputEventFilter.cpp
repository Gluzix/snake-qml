#include "KeyInputEventFilter.h"

#include <QKeyEvent>
#include <QDebug>

KeyInputEventFilter::KeyInputEventFilter(QObject *parent)
    : QObject{parent}
{}

bool KeyInputEventFilter::eventFilter(QObject *watched, QEvent *event)
{
    if (event->type() == QKeyEvent::KeyPress) {
        QKeyEvent *keyEvent = static_cast<QKeyEvent *>(event);
        Qt::Key key = static_cast<Qt::Key>(keyEvent->key());
        if (key == Qt::Key_Up || key == Qt::Key_Down ||
            key == Qt::Key_Left || key == Qt::Key_Right) {
            emit keyClicked(key);
        }
        return true;
    } else {
        return QObject::eventFilter(watched, event);
    }
}

void KeyInputEventFilter::listenTo(QObject *obj)
{
    if (!obj) {
        return;
    }
    obj->installEventFilter(this);
}
