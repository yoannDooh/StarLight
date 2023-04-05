#include <cstdio>
#include <QApplication>
#include <QLabel>
#include <string>
#include <iostream>
#include <QApplication>
#include "mainwindow.h"


int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    MainWindow w;
    w.show();


return a.exec();
}


