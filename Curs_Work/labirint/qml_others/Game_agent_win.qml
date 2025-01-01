import QtQuick

Window {
    visible: true
    id: me_win
    height: 400
    width: 400

    Text {
        anchors.centerIn: parent
        text: "ВЫ ПРОИГРАВШИЙ"
        font.pixelSize: 30
        color: "red"
    }
}

