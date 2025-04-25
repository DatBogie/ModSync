// Headers
#include "mainwindow.h"
#include "modpackwizard.h"
#include "modsyncutils.h"

// Widgets
#include <QWidget>
#include <QLabel>
#include <QPushButton>
#include <QStandardItem>
#include <QIcon>

// Layouts
#include <QVBoxLayout>
#include <QBoxLayout>
#include <QGridLayout>
#include <QListView>

// Models
#include <QStandardItemModel>

#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    setWindowTitle("ModSync");
    setMinimumSize(400,300);

    setCentralWidget(new QWidget(this));
    QVBoxLayout* mainLay = new QVBoxLayout();
    centralWidget()->setLayout(mainLay);

    packWizard = new ModpackWizard(this);

    QHBoxLayout* btnLay = new QHBoxLayout();
    QPushButton* newBtn = new QPushButton("New");
    QPushButton* delBtn = new QPushButton("Delete");
    QPushButton* updBtn = new QPushButton("Sync");

    connect(newBtn,&QPushButton::clicked,packWizard,[this]() {
        packWizard->Execute();
    });

    btnLay->addWidget(newBtn);
    btnLay->addWidget(delBtn);
    btnLay->addWidget(updBtn);

    QListView* view = new QListView();
    view->setViewMode(QListView::IconMode);
    view->setIconSize(QSize(64,64));
    view->setResizeMode(QListView::Adjust);
    view->setSpacing(10);
    view->setMovement(QListView::Movement::Snap);
    view->setGridSize(QSize(100,100));

    QStandardItemModel* model = new QStandardItemModel();
    view->setModel(model);

    // Test
    for (int i=0; i<10; ++i) {
        QStandardItem* item = new QStandardItem(ModSyncUtils::defaultIcon(), QString("Item %1").arg(i));
        item->setEditable(false);
        model->appendRow(item);
    }

    mainLay->addLayout(btnLay);
    mainLay->addWidget(view);
}
