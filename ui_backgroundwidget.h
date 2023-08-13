/********************************************************************************
** Form generated from reading UI file 'backgroundwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BACKGROUNDWIDGET_H
#define UI_BACKGROUNDWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_backgroundWidget
{
public:

    void setupUi(QWidget *backgroundWidget)
    {
        if (backgroundWidget->objectName().isEmpty())
            backgroundWidget->setObjectName(QStringLiteral("backgroundWidget"));
        backgroundWidget->resize(168, 166);

        retranslateUi(backgroundWidget);

        QMetaObject::connectSlotsByName(backgroundWidget);
    } // setupUi

    void retranslateUi(QWidget *backgroundWidget)
    {
        backgroundWidget->setWindowTitle(QApplication::translate("backgroundWidget", "Form", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class backgroundWidget: public Ui_backgroundWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BACKGROUNDWIDGET_H
