#ifndef GOOSETHREAD_H
#define GOOSETHREAD_H
#include <QRect>
#include <QThread>
#include <QTimer>
#include <cstdlib>
#include <ctime>
#include <QGuiApplication>
#include <QScreen>
#include <QApplication>
#include <qmath.h>
#include <QMovie>
#include <qmovie.h>
extern QPoint currentPosition;
class GooseThread : public QThread
{
    Q_OBJECT

public:
    explicit GooseThread(QObject *parent = nullptr);
    void run() override;
    void onTimer();
    bool isMoving()const;
    QTimer *m_timer;
    QMovie* m_gooseMovie;

signals:
    void moveGoose(int x, int y);
    //void enableMouseTracking(bool enabled);
    void updateGoose();

private:
    int m_speed;
    int m_moveInterval = 50;
    int screenWidth;
    int screenHeight;
    bool m_isMoving; // 添加标志变量
    int m_pauseInterval = 10000;
    int counter = 0;
    QRect screenRect;

};
#endif // GOOSETHREAD_H
