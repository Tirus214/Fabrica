/********************************************************************************
** Form generated from reading UI file 'dialogalmacen.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGALMACEN_H
#define UI_DIALOGALMACEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_DialogAlmacen
{
public:
    QLabel *lblCantidad;

    void setupUi(QDialog *DialogAlmacen)
    {
        if (DialogAlmacen->objectName().isEmpty())
            DialogAlmacen->setObjectName(QString::fromUtf8("DialogAlmacen"));
        DialogAlmacen->resize(400, 300);
        lblCantidad = new QLabel(DialogAlmacen);
        lblCantidad->setObjectName(QString::fromUtf8("lblCantidad"));
        lblCantidad->setGeometry(QRect(20, 10, 331, 61));

        retranslateUi(DialogAlmacen);

        QMetaObject::connectSlotsByName(DialogAlmacen);
    } // setupUi

    void retranslateUi(QDialog *DialogAlmacen)
    {
        DialogAlmacen->setWindowTitle(QCoreApplication::translate("DialogAlmacen", "Dialog", nullptr));
        lblCantidad->setText(QCoreApplication::translate("DialogAlmacen", "CANTIDAD: ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogAlmacen: public Ui_DialogAlmacen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGALMACEN_H
