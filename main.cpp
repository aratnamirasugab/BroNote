#include "mainwindow.h"
#include <QApplication>
//QApp is used to handle cursor, widget, event handling and etc

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
