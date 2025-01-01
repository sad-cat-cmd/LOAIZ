import QtQuick
Window {
    id: myWindow
    width: 1000
    height: 300
    title: "Information"
    visible: true

    Column {
        Text {
            text: "На экране вы видите две области: <font font color='steelblue'>левая</font> для вашего прохождения, <font font color='blue'>правая</font> для прохождения Игровым агентом.<br>"
            textFormat: Text.RichText
        }

        Text {
            text: "Предназначение игрового интерфейса: кнопка <font font color='green'>Generate </font> предназначена для генерации лабиринта. Кнопка <font font color='red'>Exit</font>- для завершения программы.<br>"
            textFormat: Text.RichText
        }

        Text {
            text: "После того, как вы создали лабиринт, конечная точка будет помечена <font font color='green'>зеленым</font>. <br> Используйте клавиши-стрелки для начала прохождения, в этот момент и игровой агент параллельно с вами начнет проходить лабиринт.<br>"
            textFormat: Text.RichText
        }
        Text {
            text: "Как только первый из вас достигнет <font font color='green'> точки конца</font>, высветится окошко с победителем"
            textFormat: Text.RichText
        }
    }
}
