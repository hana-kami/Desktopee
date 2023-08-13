#include "widget.h"
#include "ui_widget.h"
#include <QDebug>


Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    m_Menu = new QMenu(this);
    m_Action = new QAction(this);
    m_Action->setText("退出");
    m_Menu->addAction(m_Action);
    //gif
    m_backgroundWidget = new backgroundWidget(this);
    ui->backDoose->addWidget(m_backgroundWidget);
    m_musicWidget = new musicWidget(this);
    ui->musicGround->addWidget(m_musicWidget);
    setWindowFlags(Qt::FramelessWindowHint | Qt::WindowStaysOnTopHint);
    setAttribute(Qt::WA_TranslucentBackground);
    setMouseTracking(true);
    m_gooseThread = new GooseThread(this);
    // 创建定时器
    m_buttonTimer = new QTimer(this);
    w = ui->musicGround->itemAt(0)->widget();
    //qDebug() << w->isVisible();
    //w->hide();
    // 连接定时器的超时信号到槽函数
    connect(m_buttonTimer, &QTimer::timeout, this, &Widget::hideButtons);
    connect(m_gooseThread, &GooseThread::moveGoose, this, &Widget::moveGoose);
    connect(m_Action,&QAction::triggered,this,[=](){
        qApp->exit(0);
    });
    connect(m_gooseThread, &GooseThread::updateGoose, m_backgroundWidget, &backgroundWidget::updateGoose);
    //connect(m_gooseThread, &GooseThread::enableMouseTracking,this,&Widget::setMouseTrackingEnabled);
    m_gooseThread->start();
}

Widget::~Widget()
{
    delete ui;
}

void Widget::moveGoose(int dx, int dy)
{
    this->move(dx,dy);           // 移动大鹅图像
}

void Widget::hideButtons()
{
    w->setVisible(false);
}

void Widget::mouseMoveEvent(QMouseEvent *event)
{
//    if (event->buttons() & Qt::LeftButton) {
//           int dx = event->pos().x() - currentPosition.x();
//           int dy = event->pos().y() - currentPosition.y();
//           move(x() + dx, y() + dy);
//           currentPosition = event->pos();
//           event->accept();
//    }
    if (m_gooseThread->isMoving()) { // 如果大鹅正在移动，则禁止拖拽事件
        event->ignore();
        return;
    }
    currentPosition = event->globalPos() - mOffese;
    qDebug() << currentPosition;
    this->move(currentPosition);

}

void Widget::mousePressEvent(QMouseEvent *event)
{
    mOffese = event->globalPos() - this->pos();
    if (event->button() == Qt::LeftButton) {
        w->show();
        // 启动计时器
        m_buttonTimer->start(5000);
    }

}

void Widget::contextMenuEvent(QContextMenuEvent *event)
{
    m_Menu->exec(QCursor::pos());

    event->accept();
}

//void Widget::setMouseTrackingEnabled(bool enabled)
//{
//    QWidget::setMouseTracking(enabled);
//        if (enabled) {
//            this->setCursor(Qt::OpenHandCursor);
//        } else {
//            this->setCursor(Qt::ArrowCursor);
//        }
//}





