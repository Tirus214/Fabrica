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
    QPixmap pix("C:/Imagenes/almacenMateria.png");
    QIcon ButtonIcon(pix);
    ui->btnAlmacen->setIcon(ButtonIcon);
    ui->btnAlmacen->setIconSize(QSize(150,150));
    QPixmap pixMezcladoraMasa("C:/Imagenes/mezcladoraMasa.png");
    QIcon ButtonIconMezcladora(pixMezcladoraMasa);
    ui->btnMezcladora1->setIcon(ButtonIconMezcladora);
    ui->btnMezcladora1->setIconSize(QSize(70,70));
    ui->btnMezcladora2->setIcon(ButtonIconMezcladora);
    ui->btnMezcladora2->setIconSize(QSize(70,70));
    ui->btnMezcladora3->setIcon(ButtonIconMezcladora);
    ui->btnMezcladora3->setIconSize(QSize(70,70));
    QPixmap pixBandaTransporte("C:/Imagenes/bandaTransportadora.png");
    QIcon ButtonIconBandaTransportadora(pixBandaTransporte);
    ui->btnBarraTransporte1->setIcon(ButtonIconBandaTransportadora);
    ui->btnBarraTransporte1->setIconSize(QSize(150,150));
    ui->btnBarraTransporte2->setIcon(ButtonIconBandaTransportadora);
    ui->btnBarraTransporte2->setIconSize(QSize(150,150));
}

MainWindow::~MainWindow()
{ 
    delete ui;
}

void MainWindow::on_btnAlmacen_clicked()
{
    // Abrir el dialogo para la informacion del Almacen
//    DialogAlmacen dialogoAlmacen;
//    dialogoAlmacen.setModal(true);
//    dialogoAlmacen.exec();
    // Abrir el dialogo pero sin inteponerse a la ventanan principal
    //hide(); // Esconde la ventana principal

}

void MainWindow::on_btnMezcladora1_pressed()
{
    QMessageBox::about(this,"Situacion de Mezcladora #1","La cantidad de masa siendo procesada: ");
}

void MainWindow::on_btnMezcladora2_pressed()
{
    QMessageBox::about(this,"Situacion de Mezcladora #2","La cantidad de masa siendo procesada: ");
}

void MainWindow::on_btnMezcladora3_pressed()
{
    QMessageBox::about(this,"Situacion de Mezcladora #3","La cantidad de masa siendo procesada: ");
}

void MainWindow::on_btnBarraTransporte1_pressed()
{
    QMessageBox::about(this,"Situacion de Barra de transporte #1","La cantidad de producto siendo transportado: ");
}

void MainWindow::on_btnBarraTransporte2_pressed()
{
    QMessageBox::about(this,"Situacion de Barra de transporte #2","La cantidad de producto siendo transportado: ");
}
