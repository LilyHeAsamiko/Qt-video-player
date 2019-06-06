#include "mainwindow.h"
#include <QApplication>
#include <QtCore>
#include <QWidget>
#include <QtMultimedia>
#include <QMediaPlayer>
#include <QVideoWidget>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
