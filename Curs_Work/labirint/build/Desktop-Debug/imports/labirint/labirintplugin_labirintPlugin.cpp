// This file is autogenerated by CMake. Do not edit.

#include <QtQml/qqmlextensionplugin.h>

extern void qml_register_types_labirint();
Q_GHS_KEEP_REFERENCE(qml_register_types_labirint)

class labirintPlugin : public QQmlEngineExtensionPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID QQmlEngineExtensionInterface_iid)

public:
    labirintPlugin(QObject *parent = nullptr) : QQmlEngineExtensionPlugin(parent)
    {
        volatile auto registration = &qml_register_types_labirint;
        Q_UNUSED(registration)
    }
};



#include "labirintplugin_labirintPlugin.moc"