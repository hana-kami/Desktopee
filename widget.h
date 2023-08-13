#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include "goosethread.h"
#include "musicwidget.h"
#include <QTimer>
#include <backgroundwidget.h>
#include <QMenu>
#include <QCursor>
#include <qmovie.h>
QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT


public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
    GooseThread *m_gooseThread;
    backgroundWidget *m_backgroundWidget;
    musicWidget *m_musicWidget;
    void moveGoose(int dx,int dy);
    void hideButtons();
    void mouseMoveEvent(QMouseEvent *event);
    void mousePressEvent(QMouseEvent *event);
    void contextMenuEvent(QContextMenuEvent *event);
private:
    Ui::Widget *ui;
    //QPoint m_dragPosition;
    bool m_dragging;
    QPoint mOffese;
    QMenu *m_Menu;
    QAction *m_Action;
    QWidget* w;
    // 定时器用于控制按钮的自动隐藏
    QTimer *m_buttonTimer;

//    // 记录按钮是否处于显示状态
//    bool m_isButtonVisible;
//public slots:
//    void setMouseTrackingEnabled(bool enabled);

};
#endif // WIDGET_H
