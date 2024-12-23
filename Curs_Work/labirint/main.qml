/* This file is generated and only relevant for integrating the project into a Qt 6 and cmake based
C++ project. */
import QtQuick
import content
import QtQuick.Layouts
//import QtQuick.Window
//import "./res_qml"

Window {
    visibility: "FullScreen"
    color: "grey"
    visible: true
    title : qsTr("Лабиринт")

    Rectangle {
        id: main_Gaym_Screen

        width: parent.width
        height: parent.height / 3*4

        Rectangle{
            id: my_Game_Screen

            radius: 1
            width: parent.width/2
            height: parent.width/2
            anchors {
                left: parent.left
                //leftMargin: 10
                top: parent.top
                //topMargin: 20
            }
            color: "steelblue"

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
            anchors {
                left: my_Game_Screen.right // левая граница по правому краю greenRect
                //leftMargin: 10
                top: parent.top
                //topMargin: 20
            }
            color: "blue"

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
    RowLayout { // Use RowLayout to place buttons side by side

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
                    // Assuming you have a C++ backend with a mazeGenerator object
                    // and a generateMaze method. Adjust as needed.
                //mazeGenerator.generateMaze(20, 20) // Example call
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
    }

        // Rectangle {
        //     id: exitButton
        //     color: "red"
        //     width: 100
        //     height: 50
        //     radius: 5

        //     anchors {
        //         horizontalCenter: parent.horizontalCenter
        //         bottom: parent.bottom
        //         bottomMargin: 20
        //     }

        //     Text {
        //         text: "Exit"
        //         anchors.centerIn: parent
        //         color: "white"
        //     }

        //     MouseArea {
        //         anchors.fill: parent
        //         onClicked: {
        //             // Assuming you want to close the application or go back
        //             Qt.quit() // This will close the application. Adjust as necessary.
        //         }
        //     }
        // }


}
