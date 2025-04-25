#ifndef MODSYNCUTILS_H
#define MODSYNCUTILS_H

#include <QIcon>
#include <QString>

class ModSyncUtils
{
public:
    static const QString defaultIconPath;
    static const QIcon defaultIcon();
    static QString imageFilterString;
    static void setup();
};

#endif // MODSYNCUTILS_H
