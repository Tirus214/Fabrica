/********************************************************************************
** Form generated from reading UI file 'solicitar.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SOLICITAR_H
#define UI_SOLICITAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_solicitar
{
public:
    QDialogButtonBox *buttonBox;
    QTextEdit *txtNombre;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QTextEdit *txtCant;
    QLabel *label_4;
    QTextEdit *txtCantGallet;
    QPushButton *btnIncluir;

    void setupUi(QDialog *solicitar)
    {
        if (solicitar->objectName().isEmpty())
            solicitar->setObjectName(QString::fromUtf8("solicitar"));
        solicitar->resize(463, 290);
        buttonBox = new QDialogButtonBox(solicitar);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(140, 240, 171, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        txtNombre = new QTextEdit(solicitar);
        txtNombre->setObjectName(QString::fromUtf8("txtNombre"));
        txtNombre->setGeometry(QRect(180, 90, 104, 21));
        label = new QLabel(solicitar);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(110, 90, 55, 16));
        label_2 = new QLabel(solicitar);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(150, 20, 171, 21));
        QFont font;
        font.setPointSize(10);
        label_2->setFont(font);
        label_3 = new QLabel(solicitar);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(104, 130, 61, 20));
        txtCant = new QTextEdit(solicitar);
        txtCant->setObjectName(QString::fromUtf8("txtCant"));
        txtCant->setGeometry(QRect(180, 130, 104, 21));
        label_4 = new QLabel(solicitar);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(40, 170, 131, 20));
        txtCantGallet = new QTextEdit(solicitar);
        txtCantGallet->setObjectName(QString::fromUtf8("txtCantGallet"));
        txtCantGallet->setGeometry(QRect(180, 170, 104, 21));
        btnIncluir = new QPushButton(solicitar);
        btnIncluir->setObjectName(QString::fromUtf8("btnIncluir"));
        btnIncluir->setGeometry(QRect(330, 120, 101, 41));

        retranslateUi(solicitar);
        QObject::connect(buttonBox, SIGNAL(accepted()), solicitar, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), solicitar, SLOT(reject()));

        QMetaObject::connectSlotsByName(solicitar);
    } // setupUi

    void retranslateUi(QDialog *solicitar)
    {
        solicitar->setWindowTitle(QCoreApplication::translate("solicitar", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("solicitar", "Nombre:", nullptr));
        label_2->setText(QCoreApplication::translate("solicitar", "Creacion de Paquetes", nullptr));
        label_3->setText(QCoreApplication::translate("solicitar", "Cantidad:", nullptr));
        label_4->setText(QCoreApplication::translate("solicitar", "Cantidad de galletas:", nullptr));
        btnIncluir->setText(QCoreApplication::translate("solicitar", "Incluir", nullptr));
    } // retranslateUi

};

namespace Ui {
    class solicitar: public Ui_solicitar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SOLICITAR_H
