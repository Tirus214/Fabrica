/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *btnStart;
    QPushButton *btnPause;
    QPushButton *btnReset;
    QPushButton *btnAlmacen;
    QPushButton *btnMezcladora1;
    QPushButton *btnMezcladora2;
    QPushButton *btnMezcladora3;
    QPushButton *btnBarraTransporte1;
    QPushButton *btnBarraTransporte2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1920, 1080);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        btnStart = new QPushButton(centralwidget);
        btnStart->setObjectName(QString::fromUtf8("btnStart"));
        btnStart->setGeometry(QRect(50, 550, 80, 25));
        btnPause = new QPushButton(centralwidget);
        btnPause->setObjectName(QString::fromUtf8("btnPause"));
        btnPause->setGeometry(QRect(150, 550, 80, 25));
        btnReset = new QPushButton(centralwidget);
        btnReset->setObjectName(QString::fromUtf8("btnReset"));
        btnReset->setGeometry(QRect(250, 550, 80, 25));
        btnAlmacen = new QPushButton(centralwidget);
        btnAlmacen->setObjectName(QString::fromUtf8("btnAlmacen"));
        btnAlmacen->setGeometry(QRect(30, 220, 171, 151));
        QIcon icon;
        QString iconThemeName = QString::fromUtf8("D:\\Estructuras\\alamcen.png");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon = QIcon::fromTheme(iconThemeName);
        } else {
            icon.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        btnAlmacen->setIcon(icon);
        btnMezcladora1 = new QPushButton(centralwidget);
        btnMezcladora1->setObjectName(QString::fromUtf8("btnMezcladora1"));
        btnMezcladora1->setGeometry(QRect(360, 30, 111, 81));
        btnMezcladora2 = new QPushButton(centralwidget);
        btnMezcladora2->setObjectName(QString::fromUtf8("btnMezcladora2"));
        btnMezcladora2->setGeometry(QRect(360, 130, 111, 81));
        btnMezcladora3 = new QPushButton(centralwidget);
        btnMezcladora3->setObjectName(QString::fromUtf8("btnMezcladora3"));
        btnMezcladora3->setGeometry(QRect(360, 240, 111, 81));
        btnBarraTransporte1 = new QPushButton(centralwidget);
        btnBarraTransporte1->setObjectName(QString::fromUtf8("btnBarraTransporte1"));
        btnBarraTransporte1->setGeometry(QRect(500, 90, 281, 51));
        btnBarraTransporte2 = new QPushButton(centralwidget);
        btnBarraTransporte2->setObjectName(QString::fromUtf8("btnBarraTransporte2"));
        btnBarraTransporte2->setGeometry(QRect(500, 200, 281, 51));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1920, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        btnStart->setText(QCoreApplication::translate("MainWindow", "Start", nullptr));
        btnPause->setText(QCoreApplication::translate("MainWindow", "Pause", nullptr));
        btnReset->setText(QCoreApplication::translate("MainWindow", "Reset", nullptr));
        btnAlmacen->setText(QString());
        btnMezcladora1->setText(QString());
        btnMezcladora2->setText(QString());
        btnMezcladora3->setText(QString());
        btnBarraTransporte1->setText(QString());
        btnBarraTransporte2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
