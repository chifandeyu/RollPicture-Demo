/********************************************************************************
** Form generated from reading UI file 'PhotoWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PHOTOWIDGET_H
#define UI_PHOTOWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PhotoWidget
{
public:

    void setupUi(QWidget *PhotoWidget)
    {
        if (PhotoWidget->objectName().isEmpty())
            PhotoWidget->setObjectName(QStringLiteral("PhotoWidget"));
        PhotoWidget->resize(400, 300);

        retranslateUi(PhotoWidget);

        QMetaObject::connectSlotsByName(PhotoWidget);
    } // setupUi

    void retranslateUi(QWidget *PhotoWidget)
    {
        PhotoWidget->setWindowTitle(QApplication::translate("PhotoWidget", "PhotoWidget", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class PhotoWidget: public Ui_PhotoWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PHOTOWIDGET_H
