#ifndef MUSICWIDGET_H
#define MUSICWIDGET_H

#include <QWidget>

#include <QtMultimedia/QMediaPlayer>
#include <QMediaPlaylist>

namespace Ui {
class musicWidget;
}

class musicWidget : public QWidget
{
    Q_OBJECT

public:
    explicit musicWidget(QWidget *parent = nullptr);
    ~musicWidget();


private slots:
    void on_m_buttonPrevious_clicked();
    void on_m_buttonNext_clicked();
    void on_horizontalSlider_music_valueChanged(int value);
    void on_m_buttonPlayPause_clicked(bool checked);

private:
    Ui::musicWidget *ui;
    QMediaPlayer *player;//播放器
    QMediaPlaylist *playList;//播放列表
    QString playBackTime;//当前播放时间
    QString totalLengthTime;//总长度
    void setMusic();
};

#endif // MUSICWIDGET_H
