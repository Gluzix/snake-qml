import QtQuick
import SnakeEngine 1.0

Window {
    id: mainWindow
    width: 1280
    height: 760
    visible: true
    title: qsTr("Snake")
    // Component.onCompleted: KeyInputEventFilter.listenTo(mainWindow)
    Component.onCompleted: console.log(GameplayManager.snakeData());

    GameArea {
        id: gameArea
        anchors.fill: parent
        focus:true
    }
}
