#ifndef LOADQSS_H
#define LOADQSS_H
#include <QApplication>
#include <QFile>

class LoadFileQss
{
public:
    static void setStyle(const QString& fileName)
    {
        QFile fileQss(fileName);
        fileQss.open(QFile::ReadOnly);
        qApp->setStyleSheet(fileQss.readAll());
        fileQss.close();
    }
};


#endif // LOADQSS_H
