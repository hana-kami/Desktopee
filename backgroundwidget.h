#ifndef BACKGROUNDWIDGET_H
#define BACKGROUNDWIDGET_H

#include <QWidget>
#include <QPixmap>
#include <QPaintEvent>
#include <QPainter>
#include <QMovie>

namespace Ui {
class backgroundWidget;
}

class backgroundWidget : public QWidget
{
    Q_OBJECT

public:
    explicit backgroundWidget(QWidget *parent = nullptr);
    ~backgroundWidget();
    void paintEvent(QPaintEvent *event);
    void updateGoose();
private:
    Ui::backgroundWidget *ui;
    QMovie* m_gooseMovie;
};

#endif // BACKGROUNDWIDGET_H
