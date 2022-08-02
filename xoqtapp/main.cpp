#include "mainwindow.h"
#include "enrolementscreen.h"

#include <QApplication>
//first load screen
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //MainWindow w;
    EnrolementScreen w;
    w.show();
    return a.exec();
}
