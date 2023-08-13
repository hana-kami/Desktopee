/********************************************************************************
** Form generated from reading UI file 'musicwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MUSICWIDGET_H
#define UI_MUSICWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_musicWidget
{
public:
    QSlider *horizontalSlider_music;
    QLabel *musicTime;
    QLabel *musicTimeMax;
    QPushButton *m_buttonPrevious;
    QPushButton *m_buttonPlayPause;
    QPushButton *m_buttonNext;

    void setupUi(QWidget *musicWidget)
    {
        if (musicWidget->objectName().isEmpty())
            musicWidget->setObjectName(QStringLiteral("musicWidget"));
        musicWidget->resize(207, 64);
        horizontalSlider_music = new QSlider(musicWidget);
        horizontalSlider_music->setObjectName(QStringLiteral("horizontalSlider_music"));
        horizontalSlider_music->setGeometry(QRect(40, 40, 121, 20));
        horizontalSlider_music->setOrientation(Qt::Horizontal);
        musicTime = new QLabel(musicWidget);
        musicTime->setObjectName(QStringLiteral("musicTime"));
        musicTime->setGeometry(QRect(0, 40, 41, 20));
        musicTimeMax = new QLabel(musicWidget);
        musicTimeMax->setObjectName(QStringLiteral("musicTimeMax"));
        musicTimeMax->setGeometry(QRect(160, 40, 41, 20));
        m_buttonPrevious = new QPushButton(musicWidget);
        m_buttonPrevious->setObjectName(QStringLiteral("m_buttonPrevious"));
        m_buttonPrevious->setGeometry(QRect(20, 0, 31, 29));
        m_buttonPrevious->setMaximumSize(QSize(31, 31));
        m_buttonPlayPause = new QPushButton(musicWidget);
        m_buttonPlayPause->setObjectName(QStringLiteral("m_buttonPlayPause"));
        m_buttonPlayPause->setGeometry(QRect(90, 0, 31, 29));
        m_buttonPlayPause->setMaximumSize(QSize(31, 31));
        m_buttonNext = new QPushButton(musicWidget);
        m_buttonNext->setObjectName(QStringLiteral("m_buttonNext"));
        m_buttonNext->setGeometry(QRect(160, 0, 31, 29));
        m_buttonNext->setMaximumSize(QSize(31, 31));

        retranslateUi(musicWidget);

        QMetaObject::connectSlotsByName(musicWidget);
    } // setupUi

    void retranslateUi(QWidget *musicWidget)
    {
        musicWidget->setWindowTitle(QApplication::translate("musicWidget", "Form", Q_NULLPTR));
        musicTime->setText(QString());
        musicTimeMax->setText(QString());
        m_buttonPrevious->setText(QString());
        m_buttonPlayPause->setText(QString());
        m_buttonNext->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class musicWidget: public Ui_musicWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MUSICWIDGET_H
