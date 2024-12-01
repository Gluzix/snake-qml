import QtQuick
import QtQml

Item {
    anchors.fill: parent
    focus:true
    property int direction: 1 //right

    Rectangle {
        border.color: "blue"
        border.width: 10
        width:parent.width
        height:parent.height
    }

    Snake {
        id: snake
    }
}
