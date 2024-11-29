import QtQuick

Item {
    anchors.fill: parent
    focus:true

    Rectangle {
        border.color: "blue"
        border.width: 10
        width:parent.width
        height:parent.height
    }

    Keys.onPressed: (event) =>
    {
        switch(event.key){
            case Qt.Key_Down:
                console.log("arrow down");
            break;
            case Qt.Key_Up:
                console.log("arrow up");
            break;
            case Qt.Key_Left:
                console.log("arrow left");
            break;
            case Qt.Key_Right:
                console.log("arrow right");
            break;
            default: break;
        }
    }

    Snake {

    }
}
