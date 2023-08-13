#include "goosethread.h"
#include "QDebug"

QPoint currentPosition(0, 0); // 初始化大鹅位置为屏幕左上角
GooseThread::GooseThread(QObject *parent):QThread(parent), m_speed(500),m_isMoving(false)
{
    //QPoint currentPosition(0, 0);
//    m_timer = new QTimer(this);
//    connect(m_timer, &QTimer::timeout, this, &GooseThread::onTimer);
    //    m_timer->start(10000); // 每隔一秒钟触发一次
    // 加载 GIF 图片

}

void GooseThread::run()
{
//    while (true) {

//            QThread::msleep(m_speed);
//    }


    QRect screenRect = QGuiApplication::primaryScreen()->geometry();
    int screenWidth = screenRect.width();
    int screenHeight = screenRect.height();
    while (true) {
        //emit enableMouseTracking(false);
        // 生成随机位置
        int x = qrand() % screenWidth;
        int y = qrand() % screenHeight;
        QPoint newPosition(x, y);

        // 计算大鹅移动的速度和方向
        qreal dx = newPosition.x() - currentPosition.x();
        qreal dy = newPosition.y() - currentPosition.y();
        qreal distance = qSqrt(dx * dx + dy * dy);
        qreal speed = m_speed / 5000.0; // 毫秒转换为秒
        qreal duration = distance / speed;
        qreal vx = dx / duration;
        qreal vy = dy / duration;
        m_isMoving = true; // 开始移动，禁止鼠标拖拽事件
        // 更新大鹅的位置
        for (qreal t = 0; t < duration; t += m_moveInterval) {
            currentPosition.setX(currentPosition.x() + vx * m_moveInterval);
            currentPosition.setY(currentPosition.y() + vy * m_moveInterval);
            emit moveGoose(currentPosition.x(), currentPosition.y());
            emit updateGoose();
            qDebug() << "1" <<currentPosition;
            QThread::msleep(m_moveInterval);
        }
        m_isMoving = false; // 移动结束，允许鼠标拖拽事件
        //emit enableMouseTracking(true);
        currentPosition = newPosition;
        msleep(m_pauseInterval);

    }
}

bool GooseThread::isMoving() const
{
    return m_isMoving;
}

//void GooseThread::onTimer()
//{
//    QRect screenRect = QGuiApplication::primaryScreen()->geometry();
//    int screenWidth = screenRect.width();
//    int screenHeight = screenRect.height();
//    // 设置随机数种子
//    srand(time(NULL));
//    // 生成随机坐标
//    int newX = rand() % screenWidth;
//    int newY = rand() % screenHeight;

//        // 发送移动信号
//        emit moveGoose(newX, newY);
//}
