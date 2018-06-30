#include <QGuiApplication>
#include <QQmlApplicationEngine>

#include "config_loader.h"

int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

    atb::settings::config_loader loader;
    atb::settings::config con;

    QString file("C:\\Users\\Milan\\Documents\\atb\\atb_system\\settings\\atb_monitor.json");
    bool success = loader.load(file, con);

    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));
    if (engine.rootObjects().isEmpty())
        return -1;

    return app.exec();
}
