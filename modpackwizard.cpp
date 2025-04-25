#include "modpackwizard.h"
#include "modsyncutils.h"
#include "iconpicker.h"

#include <QWizard>
#include <QWizardPage>
#include <QVector>
#include <QVBoxLayout>
#include <QPushButton>

/*
 * Plan {
 *   Page1 {
 *      Icon,
 *      Name,
 *      src
 *   }
 * }
*/

ModpackWizard::ModpackWizard(QWidget *parent)
    : QWizard{parent}
{
    setWindowTitle("ModSync — Wizard");

    // Import Page
    QWizardPage* importPage = new QWizardPage();
    importPage->setTitle("Setup Modpack");
    importPage->setSubTitle("Import from Raw JSON");
    QVBoxLayout* importPageLay = new QVBoxLayout();
    importPage->setLayout(importPageLay);

    IconPicker* importPageIcon = new IconPicker();
    importPageLay->addWidget(importPageIcon);

    addPage(importPage);
}

void ModpackWizard::Execute() {
    show();
}
