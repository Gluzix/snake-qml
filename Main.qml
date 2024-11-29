import QtQuick

Window {
    width: 1280
    height: 760
    visible: true
    title: qsTr("Snake")

    GameArea {
        anchors.fill: parent
        focus:true
    }
}
