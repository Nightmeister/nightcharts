#ifndef NIGHTCHARTSWIDGET_H
#define NIGHTCHARTSWIDGET_H

#include <QWidget>
#include <QPaintEvent>

class NightchartsWidget : public QWidget
{
    Q_OBJECT
public:
    explicit NightchartsWidget(QWidget *parent = 0);

protected:
    virtual void paintEvent(QPaintEvent * e);

};

#endif // NIGHTCHARTSWIDGET_H
