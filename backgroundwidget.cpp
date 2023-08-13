#include "backgroundwidget.h"
#include "ui_backgroundwidget.h"



backgroundWidget::backgroundWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::backgroundWidget)
{
    ui->setupUi(this);
    //setAttribute(Qt::WA_TranslucentBackground);
    m_gooseMovie = new QMovie(":/image/background/goose.gif", QByteArray(), this);
    m_gooseMovie->start();
}

backgroundWidget::~backgroundWidget()
{
    delete ui;
}

void backgroundWidget::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    //QPixmap goosePixmap(":/image/background/goose.png");  // 加载大鹅图片
    //painter.drawPixmap(0, 0, width(), height(), goosePixmap);  // 绘制大鹅图片
    painter.drawPixmap(0, 0, width(), height(), m_gooseMovie->currentPixmap());
}

void backgroundWidget::updateGoose()
{
    update();
}
