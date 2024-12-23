// Copyright (C) 2021 The Qt Company Ltd.
// SPDX-License-Identifier: LicenseRef-Qt-Commercial OR GPL-3.0-only

#include <QGuiApplication>
#include <QQmlApplicationEngine>

#include "app_environment.h"
#include "import_qml_components_plugins.h"
#include "import_qml_plugins.h"

#include <QIcon>
#include <QSize>
//#include "mainwindow.h"

#include "Logic_of_the_maze.h"
#include <QQmlContext>
int main(int argc, char *argv[])
{

    set_qt_environment();

    //Qt::WA_SetWindowIcon(QIcon(":/home/clear/Загрузки/icon_main.png"));


    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    const QUrl url(u"qrc:/qt/qml/Main/main.qml"_qs);
    QObject::connect(
        &engine,
        &QQmlApplicationEngine::objectCreated,
        &app,
        [url](QObject *obj, const QUrl &objUrl) {
            if (!obj && url == objUrl)
                QCoreApplication::exit(-1);
        },
        Qt::QueuedConnection);


    ///
    Logic_of_the_maze logic_of_the_maze_1;

    // Заполните изображения при старте (или когда вам нужно)
    logic_of_the_maze_1.fillScreenImages();

    // Получите контекст QML
    QQmlContext* context = engine.rootContext();

    // Зарегистрируйте экземпляр вашего класса в контексте QML
    context->setContextProperty("mazeData", &logic_of_the_maze_1);
    ///
    engine.addImportPath(QCoreApplication::applicationDirPath() + "/qml");
    engine.addImportPath(":/");

    engine.load(url);

    if (engine.rootObjects().isEmpty()) {
        return -1;
    }

    return app.exec();
}
