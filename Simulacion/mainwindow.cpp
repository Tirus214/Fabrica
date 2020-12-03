#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>
#include "dialogalmacen.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->btnAlmacen->setIcon(QIcon("C:/Imagenes/almacenMateria.png"));
    ui->btnAlmacen->setIconSize(QSize(100,100));
    ui->btnCarrito->setIcon(QIcon("C:/Imagenes/carrito.png"));
    ui->btnCarrito->setIconSize(QSize(90,90));
    ui->btnMezcladora1->setIcon(QIcon("C:/Imagenes/mezcladoraMasa.png"));
    ui->btnMezcladora1->setIconSize(QSize(60,60));
    ui->btnMezcladora2->setIcon(QIcon("C:/Imagenes/mezcladoraMasa.png"));
    ui->btnMezcladora2->setIconSize(QSize(60,60));
    ui->btnMezcladora3->setIcon(QIcon("C:/Imagenes/mezcladoraMasa.png"));
    ui->btnMezcladora3->setIconSize(QSize(60,60));
    ui->btnBarraTransporte1->setIcon(QIcon("C:/Imagenes/bandaTransportadora.png"));
    ui->btnBarraTransporte1->setIconSize(QSize(100,100));
    ui->btnBarraTransporte2->setIcon(QIcon("C:/Imagenes/bandaTransportadora.png"));
    ui->btnBarraTransporte2->setIconSize(QSize(100,100));
}

MainWindow::~MainWindow()
{ 
    delete ui;
}

void MainWindow::on_btnAlmacen_clicked()
{
    ui->lblEstado->setText(QStringLiteral("Cantida de chocolate restante: %1\nCantidad de harina restante: %2").arg(fabrica.almacen->chocolate).arg(fabrica.almacen->harina));
}

void MainWindow::on_btnMezcladora1_pressed()
{
    QString estadoStr = "Indef";
    if (fabrica.mezcladora1->estado == true) {
        estadoStr = "ON";
    } else if (fabrica.mezcladora1->estado == false) {
        estadoStr = "OFF";
    }
    ui->lblEstado->setText(QStringLiteral("Estado: %1\nVelocidad: %2 gramos/s\nCantidad maxima: %3\nCantidad minima: %4\nCantidad siendo mezclada: %5\nCantidad procesada: %6").arg(estadoStr).arg(fabrica.mezcladora1->velocidad).arg(fabrica.mezcladora1->cantMax).arg(fabrica.mezcladora1->cantMin).arg(fabrica.mezcladora1->mezcla).arg(fabrica.mezcladora1->mezclaHecha));
}

void MainWindow::on_btnMezcladora2_pressed()
{
    QString estadoStr = "Indef";
    if (fabrica.mezcladora2->estado == true) {
        estadoStr = "ON";
    } else if (fabrica.mezcladora2->estado == false) {
        estadoStr = "OFF";
    }
    ui->lblEstado->setText(QStringLiteral("Estado: %1\nVelocidad: %2 gramos/s\nCantidad maxima: %3\nCantidad minima: %4\nCantidad siendo mezclada: %5\nCantidad procesada: %6").arg(estadoStr).arg(fabrica.mezcladora2->velocidad).arg(fabrica.mezcladora2->cantMax).arg(fabrica.mezcladora2->cantMin).arg(fabrica.mezcladora2->mezcla).arg(fabrica.mezcladora2->mezclaHecha));
}

void MainWindow::on_btnMezcladora3_pressed()
{
    QString estadoStr = "Indef";
    if (fabrica.mezcladora3->estado == true) {
        estadoStr = "ON";
    } else if (fabrica.mezcladora3->estado == false) {
        estadoStr = "OFF";
    }
    ui->lblEstado->setText(QStringLiteral("Estado: %1\nVelocidad: %2 gramos/s\nCantidad maxima: %3\nCantidad minima: %4\nCantidad siendo mezclada: %5\nCantidad procesada: %6").arg(estadoStr).arg(fabrica.mezcladora3->velocidad).arg(fabrica.mezcladora3->cantMax).arg(fabrica.mezcladora3->cantMin).arg(fabrica.mezcladora3->mezcla).arg(fabrica.mezcladora3->mezclaHecha));
}

void MainWindow::on_btnBarraTransporte1_pressed()
{
    QString estadoStr = "Indef";
    if (fabrica.banda1 ->estado == true) {
        estadoStr = "ON";
    } else if (fabrica.banda1->estado == false) {
        estadoStr = "OFF";
    }
    ui->lblEstado->setText(QStringLiteral("Estado: %1\nVelocidad: %2\nCantidad maxima: %3\nCantidad siendo procesada: %4").arg(estadoStr).arg(fabrica.banda1->velocidad).arg(fabrica.banda1->cantMax).arg(fabrica.banda1->index));
}

void MainWindow::on_btnBarraTransporte2_pressed()
{
    QString estadoStr = "Indef";
    if (fabrica.banda2 ->estado == true) {
        estadoStr = "ON";
    } else if (fabrica.banda2->estado == false) {
        estadoStr = "OFF";
    }
    ui->lblEstado->setText(QStringLiteral("Estado: %1\nVelocidad: %2\nCantidad maxima: %3\nCantidad siendo procesada: %4").arg(estadoStr).arg(fabrica.banda2->velocidad).arg(fabrica.banda2->cantMax).arg(fabrica.banda2->index));
}


void MainWindow::on_btnStart_clicked()
{
    fabrica.correr();
}

void MainWindow::on_btnPause_clicked()
{
    fabrica.pausar();
}


void MainWindow::on_btnDetener_clicked()
{
    fabrica.detener();
}
