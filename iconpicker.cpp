#include "iconpicker.h"
#include "modsyncutils.h"

#include <QPushButton>
#include <QIcon>
#include <QSize>

#include <QFileDialog>
#include <QImageReader>

IconPicker::IconPicker()
    : QPushButton{}
{
    iconPath = ModSyncUtils::defaultIconPath;
    setIcon(ModSyncUtils::defaultIcon());
    setIconSize(QSize(50,50));

    connect(this, &IconPicker::clicked, this, &IconPicker::onClick);
}

void IconPicker::onClick(bool checked) {
    QString path = QFileDialog::getOpenFileName(parentWidget(),"ModSync — Pick Icon","",ModSyncUtils::imageFilterString);
    if (path == "") return;
    iconPath = path;
    setIcon(QIcon(path));
}
