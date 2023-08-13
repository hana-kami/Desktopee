#include "musicwidget.h"
#include "ui_musicwidget.h"
#include <QDebug>
musicWidget::musicWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::musicWidget)
{
    ui->setupUi(this);
    //初始化音乐
    setMusic();
    //player->play();
}

musicWidget::~musicWidget()
{
    delete ui;
}

void musicWidget::on_m_buttonPrevious_clicked()
{
    qDebug() << "1";
}




void musicWidget::on_m_buttonNext_clicked()
{
    qDebug() << "1";
}

void musicWidget::setMusic()
{
    player = new QMediaPlayer;
    playList = new QMediaPlaylist;
    playList->setPlaybackMode(QMediaPlaylist::Loop);//设置循环播放模式
    player->setPlaylist(playList);//将播放列表设置给音乐播放器。
    connect(player,&QMediaPlayer::positionChanged,[=](qint64 duration){//positionChanged信号在音乐播放位置发生改变时发出
        if(ui->horizontalSlider_music->isSliderDown())
        {
            return;
        }
        ui->horizontalSlider_music->blockSignals(true);
        ui->horizontalSlider_music->setSliderPosition(duration);
        ui->horizontalSlider_music->blockSignals(false);
        int secs = int(duration)/1000;//将毫秒数转换成秒数
        int min = secs/60;
        secs = secs%60;//计算音乐播放的剩余秒数
        playBackTime = QString::asprintf("%d:%d",min,secs);
        ui->musicTime->setText(playBackTime);
    });
    connect(player,&QMediaPlayer::durationChanged,[=](qint64 duration){//durationChanged信号在音乐的时长发生改变时发出
        ui->horizontalSlider_music->setMaximum(int(duration));
        int secs = int(duration)/1000;
        int min = secs/60; //取整
        secs = secs%60; //剩余秒
        totalLengthTime = QString::asprintf("%d:%d",min,secs);
        ui->musicTimeMax->setText(totalLengthTime);
    });
    ui->m_buttonPlayPause->setCheckable(true);
    //加载音乐
    playList->addMedia(QUrl::fromLocalFile("./music/music.mp3"));
    //playList->addMedia(QUrl::fromLocalFile("qrc:/images/music.mp3"));
    playList->setCurrentIndex(0);
}


void musicWidget::on_horizontalSlider_music_valueChanged(int value)
{
    player->blockSignals(true);
    player->setPosition(value);
    player->blockSignals(false);
}


void musicWidget::on_m_buttonPlayPause_clicked(bool checked)
{
    if(checked)
    {
        qDebug() << "2";
        player->pause();
    }
    else {
        qDebug() << "1";
        player->play();
    }
}

