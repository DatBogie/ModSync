#include "modsyncutils.h"
#include <QIcon>
#include <QImageReader>
#include <QByteArray>
#include <QString>

const QString ModSyncUtils::defaultIconPath = ":/assets/ModSyncLogo.png";

const QIcon ModSyncUtils::defaultIcon() {
    return QIcon(ModSyncUtils::defaultIconPath);
}

QString ModSyncUtils::imageFilterString;

void ModSyncUtils::setup() {
    QString imageFormats;
    for (const QByteArray& format : QImageReader::supportedImageFormats()) {
        QString formatStr = QString::fromLatin1(format);
        imageFormats+=QString("*.%1 ").arg(formatStr);
    }
    imageFormats = imageFormats.mid(0, imageFormats.size()-1);

    imageFilterString = QString("Images (%1)").arg(imageFormats);
}
