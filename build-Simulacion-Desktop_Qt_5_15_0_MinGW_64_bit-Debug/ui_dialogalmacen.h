/********************************************************************************
** Form generated from reading UI file 'dialogalmacen.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGALMACEN_H
#define UI_DIALOGALMACEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_dialogalmacen
{
public:
    QLabel *lblCantidad;

    void setupUi(QWidget *dialogalmacen)
    {
        if (dialogalmacen->objectName().isEmpty())
            dialogalmacen->setObjectName(QString::fromUtf8("dialogalmacen"));
        dialogalmacen->resize(400, 300);
        lblCantidad = new QLabel(dialogalmacen);
        lblCantidad->setObjectName(QString::fromUtf8("lblCantidad"));
        lblCantidad->setGeometry(QRect(30, 20, 331, 61));

        retranslateUi(dialogalmacen);

        QMetaObject::connectSlotsByName(dialogalmacen);
    } // setupUi

    void retranslateUi(QWidget *dialogalmacen)
    {
        dialogalmacen->setWindowTitle(QCoreApplication::translate("dialogalmacen", "Form", nullptr));
        lblCantidad->setText(QCoreApplication::translate("dialogalmacen", "CANTIDAD: ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class dialogalmacen: public Ui_dialogalmacen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGALMACEN_H
