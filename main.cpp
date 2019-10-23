#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QStandardPaths>
#include <QtMultimedia>
#include <QtMultimediaWidgets>
#include <QQmlContext>
#include <QDebug>

#include "player.h"
#include "playlistmodel.h"

int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

    qRegisterMetaType<QMediaPlaylist*>("QMediaPlaylist*");

    QGuiApplication  app(argc, argv);

    QQmlApplicationEngine engine;
    Player player;

    player.open();

    engine.rootContext()->setContextProperty("m_playListModel",player.m_playlistModel);
    engine.rootContext()->setContextProperty("m_Player",player.m_player);
    engine.rootContext()->setContextProperty("player",&player);
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));
    if (engine.rootObjects().isEmpty())
        return -1;

    return app.exec();
}
