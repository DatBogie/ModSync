#ifndef MODPACKWIZARD_H
#define MODPACKWIZARD_H

#include <QObject>
#include <QWidget>
#include <QWizard>
#include <QWizardPage>
#include <QVector>

class ModpackWizard : public QWizard
{
    Q_OBJECT
public:
    explicit ModpackWizard(QWidget *parent = nullptr);
    QVector<QWizardPage*> pages;
    void Execute();
};

#endif // MODPACKWIZARD_H
