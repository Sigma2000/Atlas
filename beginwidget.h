#ifndef BEGINWIDGET_H
#define BEGINWIDGET_H

#include <QStackedWidget>

class BeginWidget : public QStackedWidget
{
    Q_OBJECT
public:
    BeginWidget(QWidget* parent = nullptr);
    ~BeginWidget();
};

#endif // BEGINWIDGET_H
