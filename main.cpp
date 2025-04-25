#include "mainwindow.h"
#include "modsyncutils.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    ModSyncUtils::setup();
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
