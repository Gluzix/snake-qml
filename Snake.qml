import QtQuick

Item {
    width:10
    height:10
    x: parent.width/2 - width
    y: parent.height/2 - height

    Rectangle {
       anchors.fill: parent
       color: "red"
    }
}
