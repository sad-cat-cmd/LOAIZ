/* This file is generated and only relevant for integrating the project into a Qt 6 and cmake based
C++ project. */
import QtQuick
import content
import QtQuick.Layouts
import QtQuick.Controls 2.12

Window {
    Connections {
        target: mazeData
        function onGameWon() {
            my_Win_Loader.active = true
            mazeData.cleanup();
        }

        function onAgentWon() {
                console.log("Агент достиг цели!")
                game_Agent_win.active = true
                mazeData.cleanup();
            }
    }

    Loader {
        id: my_Win_Loader
        source: "qml_others/Me_win.qml"
        active: false
    }

    Loader {
        id: myWindowLoader
        source: "qml_others/Information.qml"
        active: false
    }

    Loader {
        id: game_Agent_win
        source: "qml_others/Game_agent_win.qml"
        active: false
    }

    visibility: "FullScreen"
    visible: true
    title : qsTr("Лабиринт")
    color : "#FFDD73"

    Rectangle {
        id: main_Gaym_Screen
        width: parent.width
        height: parent.height * 0.8

        focus: false
        Keys.onPressed: {
                switch (event.key) {
                case Qt.Key_Up:
                    //movePlayer(0, -1); // Движение вверх

                    movePlayer(-1, 0);
                    break;
                case Qt.Key_Down:
                    //movePlayer(0, 1); // Движение вниз
                    movePlayer(1, 0);
                    break;
                case Qt.Key_Left:
                    //movePlayer(-1, 0); // Движение влево

                    movePlayer(0, -1); // Движение вверх
                    break;
                case Qt.Key_Right:
                    //movePlayer(1, 0); // Движение вправо

                    movePlayer(0, 1); // Движение вниз
                    break;
                }
            }

        function movePlayer(dx, dy) {
                mazeData.movePlayer(dx, dy);
            }


        Rectangle {
                        id: verticalLine
                        width: 2 // Ширина линии
                        height: parent.height // Высота линии равна высоте родительского элемента
                        color: "#FFC000" // Цвет линии
                        anchors {
                            horizontalCenter: parent.horizontalCenter // Центрируем по горизонтали
                            top: parent.top // Привязываем к верхнему краю родителя
                            bottom: my_Game_Screen.bottom // Привязываем к нижнему краю родителя
                        }
                        z: 1 // Устанавливаем z-индекс, чтобы линия была поверх других элементов
                    }

        Rectangle{
            id: my_Game_Screen
            radius: 1
            width: parent.width/2
            height: parent.width/2
            anchors {
                left: parent.left
                top: parent.top
            }
            color: "steelblue"



        GridView {
            id: myGameScreenGridView
            visible: false // Скрываем GridView по умолчанию
            anchors.fill: parent
            cellWidth: width / mazeData.myGameScreenImages[0].length
            cellHeight: height / mazeData.myGameScreenImages.length
            model: mazeData.myGameScreenImages // Изменено на все элементы
            delegate: Column {
                Repeater {
                    model: modelData
                        delegate: Image {
                            source: modelData // Путь к изображению
                            width: my_Game_Screen.width / mazeData.myGameScreenImages[0].length
                            height: my_Game_Screen.height / mazeData.myGameScreenImages.length
                            fillMode: Image.Stretch
                        }
                }
            }
        }

        Text {
            anchors {
                top: parent.bottom
                horizontalCenter: parent.horisontlalCenter
            }
            text: "My Game Screen"
            color: "green"
            }
        }

        Rectangle{
            id: game_Agent_Screen
            width: parent.width/2
            height: parent.width/2
            color: "blue"
            anchors {
                left: my_Game_Screen.right // левая граница по правому краю greenRect
                //leftMargin: 10
                top: parent.top
                //topMargin: 20
            }

            GridView {
                        id: game_Agent_Screen_Grid_View
                        visible: false
                        anchors.fill: parent
                        cellWidth: width / mazeData.agentScreenImages[0].length
                        cellHeight: height / mazeData.agentScreenImages.length
                        model: mazeData.agentScreenImages
                        delegate: Column {
                            Repeater {
                                model:  modelData
                                delegate: Image {
                                    source: modelData
                                    width: game_Agent_Screen.width / mazeData.agentScreenImages[0].length
                                    height: game_Agent_Screen.height / mazeData.agentScreenImages.length
                                    fillMode: Image.Stretch
                                }
                            }
                        }
                    }

            Text {
                anchors {
                    top: parent.bottom
                    horizontalCenter: parent.horisontlalCenter
                }
                text: "Game Agent Screen"
                color: "red"
            }
        }

    }
    RowLayout {

        anchors {
        horizontalCenter: parent.horizontalCenter
        bottom: parent.bottom
        bottomMargin: 20
        }
        spacing: 10 // Optional spacing between buttons

        Rectangle {
            id: generateButton
            color: "lightgreen" // Example color
            width: 100
            height: 50
            radius: 5

        Text {
            text: "Generate"
            anchors.centerIn: parent
            color: "black"
        }

            MouseArea {
                anchors.fill: parent
                onClicked: {
                    mazeData.logic_generate_maze();
                    //mazeData.fillScreenImages();
                    myGameScreenGridView.visible = true
                    game_Agent_Screen_Grid_View.visible = true
                    main_Gaym_Screen.focus = true
                }
            }
        }

        Rectangle {
            id: exitButton
            color: "red"
            width: 100
            height: 50
            radius: 5

            Text {
                text: "Exit"
                anchors.centerIn: parent
                color: "white"
            }

            MouseArea {
                anchors.fill: parent
                onClicked: {
                Qt.quit() // This will close the application. Adjust as necessary.
                }
            }
        }


        Rectangle {
                id: infoButton
                color: "lightblue"
                width: 100
                height: 50
                radius: 5

                Text {
                    text: "Info"
                    anchors.centerIn: parent
                    color: "black"
                }

                MouseArea {
                    anchors.fill: parent
                    onClicked: {
                        myWindowLoader.active = true
                    }
                }
            }
    }

}
