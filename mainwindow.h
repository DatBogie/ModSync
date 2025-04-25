#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QWizard>

#include "modpackwizard.h"

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
private:
    ModpackWizard* packWizard;
};
#endif // MAINWINDOW_H
