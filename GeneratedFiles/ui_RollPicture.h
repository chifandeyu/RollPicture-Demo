/********************************************************************************
** Form generated from reading UI file 'RollPicture.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ROLLPICTURE_H
#define UI_ROLLPICTURE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RollPictureClass
{
public:

    void setupUi(QWidget *RollPictureClass)
    {
        if (RollPictureClass->objectName().isEmpty())
            RollPictureClass->setObjectName(QStringLiteral("RollPictureClass"));
        RollPictureClass->resize(868, 561);

        retranslateUi(RollPictureClass);

        QMetaObject::connectSlotsByName(RollPictureClass);
    } // setupUi

    void retranslateUi(QWidget *RollPictureClass)
    {
        RollPictureClass->setWindowTitle(QApplication::translate("RollPictureClass", "RollPicture", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class RollPictureClass: public Ui_RollPictureClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ROLLPICTURE_H
