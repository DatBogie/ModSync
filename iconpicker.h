#ifndef ICONPICKER_H
#define ICONPICKER_H

#include <QPushButton>
#include <QIcon>
#include <QSize>
#include <QResizeEvent>
#include <QString>

class IconPicker : public QPushButton
{
    Q_OBJECT
public:
    explicit IconPicker();
    QString iconPath;
protected:
    void resizeEvent(QResizeEvent *event) override {
        int side = qMin(event->size().width(), event->size().height());
        resize(side, side);
    }

    QSize sizeHint() const override {
        QSize base = QPushButton::sizeHint();
        int side = qMax(base.width(), base.height());
        return QSize(side, side);
    }
private slots:
    void onClick(bool checked);
};

#endif // ICONPICKER_H
