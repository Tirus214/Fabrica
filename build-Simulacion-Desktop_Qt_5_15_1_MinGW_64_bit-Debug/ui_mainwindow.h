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
#include <QtWidgets/QLabel>
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
    QPushButton *btnDetener;
    QPushButton *btnAlmacen;
    QPushButton *btnMezcladora1;
    QPushButton *btnMezcladora2;
    QPushButton *btnMezcladora3;
    QPushButton *btnBarraTransporte1;
    QPushButton *btnBarraTransporte2;
    QPushButton *btnCarrito;
    QLabel *lblEstado;
    QPushButton *btnModificar;
    QPushButton *btnEnsambladora;
    QPushButton *btnBandaHE;
    QPushButton *btnSupervisor1;
    QPushButton *btnEmpacadora;
    QPushButton *btnTransporte;
    QPushButton *btnBandaEH;
    QPushButton *btnHorno;
    QPushButton *btnAlmacenFinal;
    QPushButton *btnResumen;
    QPushButton *btnSupervisor2;
    QPushButton *btnConfigurar;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1913, 1080);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        btnStart = new QPushButton(centralwidget);
        btnStart->setObjectName(QString::fromUtf8("btnStart"));
        btnStart->setGeometry(QRect(100, 480, 81, 25));
        btnPause = new QPushButton(centralwidget);
        btnPause->setObjectName(QString::fromUtf8("btnPause"));
        btnPause->setGeometry(QRect(190, 480, 80, 25));
        btnDetener = new QPushButton(centralwidget);
        btnDetener->setObjectName(QString::fromUtf8("btnDetener"));
        btnDetener->setGeometry(QRect(280, 480, 80, 25));
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
        btnBarraTransporte1->setGeometry(QRect(480, 100, 261, 51));
        btnBarraTransporte2 = new QPushButton(centralwidget);
        btnBarraTransporte2->setObjectName(QString::fromUtf8("btnBarraTransporte2"));
        btnBarraTransporte2->setGeometry(QRect(480, 190, 261, 51));
        btnCarrito = new QPushButton(centralwidget);
        btnCarrito->setObjectName(QString::fromUtf8("btnCarrito"));
        btnCarrito->setGeometry(QRect(210, 140, 121, 81));
        lblEstado = new QLabel(centralwidget);
        lblEstado->setObjectName(QString::fromUtf8("lblEstado"));
        lblEstado->setGeometry(QRect(470, 400, 541, 241));
        lblEstado->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        btnModificar = new QPushButton(centralwidget);
        btnModificar->setObjectName(QString::fromUtf8("btnModificar"));
        btnModificar->setGeometry(QRect(370, 480, 75, 23));
        btnEnsambladora = new QPushButton(centralwidget);
        btnEnsambladora->setObjectName(QString::fromUtf8("btnEnsambladora"));
        btnEnsambladora->setGeometry(QRect(750, 100, 141, 141));
        btnBandaHE = new QPushButton(centralwidget);
        btnBandaHE->setObjectName(QString::fromUtf8("btnBandaHE"));
        btnBandaHE->setGeometry(QRect(1250, 190, 251, 51));
        btnSupervisor1 = new QPushButton(centralwidget);
        btnSupervisor1->setObjectName(QString::fromUtf8("btnSupervisor1"));
        btnSupervisor1->setGeometry(QRect(1250, 100, 121, 81));
        btnEmpacadora = new QPushButton(centralwidget);
        btnEmpacadora->setObjectName(QString::fromUtf8("btnEmpacadora"));
        btnEmpacadora->setGeometry(QRect(1510, 100, 171, 211));
        btnTransporte = new QPushButton(centralwidget);
        btnTransporte->setObjectName(QString::fromUtf8("btnTransporte"));
        btnTransporte->setGeometry(QRect(1510, 320, 131, 131));
        btnBandaEH = new QPushButton(centralwidget);
        btnBandaEH->setObjectName(QString::fromUtf8("btnBandaEH"));
        btnBandaEH->setGeometry(QRect(900, 140, 171, 61));
        btnHorno = new QPushButton(centralwidget);
        btnHorno->setObjectName(QString::fromUtf8("btnHorno"));
        btnHorno->setGeometry(QRect(1080, 100, 161, 141));
        btnAlmacenFinal = new QPushButton(centralwidget);
        btnAlmacenFinal->setObjectName(QString::fromUtf8("btnAlmacenFinal"));
        btnAlmacenFinal->setGeometry(QRect(1290, 350, 191, 191));
        btnResumen = new QPushButton(centralwidget);
        btnResumen->setObjectName(QString::fromUtf8("btnResumen"));
        btnResumen->setGeometry(QRect(1100, 350, 151, 191));
        btnSupervisor2 = new QPushButton(centralwidget);
        btnSupervisor2->setObjectName(QString::fromUtf8("btnSupervisor2"));
        btnSupervisor2->setGeometry(QRect(1380, 100, 121, 81));
        btnConfigurar = new QPushButton(centralwidget);
        btnConfigurar->setObjectName(QString::fromUtf8("btnConfigurar"));
        btnConfigurar->setGeometry(QRect(10, 480, 81, 23));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1913, 21));
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
        btnStart->setText(QCoreApplication::translate("MainWindow", "Iniciar", nullptr));
        btnPause->setText(QCoreApplication::translate("MainWindow", "Pausar", nullptr));
        btnDetener->setText(QCoreApplication::translate("MainWindow", "Detener", nullptr));
        btnAlmacen->setText(QString());
        btnMezcladora1->setText(QString());
        btnMezcladora2->setText(QString());
        btnMezcladora3->setText(QString());
        btnBarraTransporte1->setText(QString());
        btnBarraTransporte2->setText(QString());
        btnCarrito->setText(QString());
        lblEstado->setText(QString());
        btnModificar->setText(QCoreApplication::translate("MainWindow", "Modificar", nullptr));
        btnEnsambladora->setText(QString());
        btnBandaHE->setText(QString());
        btnSupervisor1->setText(QString());
        btnEmpacadora->setText(QString());
        btnTransporte->setText(QString());
        btnBandaEH->setText(QString());
        btnHorno->setText(QString());
        btnAlmacenFinal->setText(QString());
        btnResumen->setText(QString());
        btnSupervisor2->setText(QString());
        btnConfigurar->setText(QCoreApplication::translate("MainWindow", "Configurar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
