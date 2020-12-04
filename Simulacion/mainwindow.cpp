#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>
#include "dialogalmacen.h"
#include <QMessageBox>
#include "parametros.h"
#include "solicitar.h"


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
    ui->btnEnsambladora->setIcon(QIcon("C:/Imagenes/ensambladora.png"));
    ui->btnEnsambladora->setIconSize(QSize(70,70));
    ui->btnBandaEH->setIcon(QIcon("C:/Imagenes/bandaTransportadora.png"));
    ui->btnBandaEH->setIconSize(QSize(90,90));
    ui->btnHorno->setIcon(QIcon("C:/Imagenes/horno.svg"));
    ui->btnHorno->setIconSize(QSize(90,90));
    ui->btnBandaHE->setIcon(QIcon("C:/Imagenes/bandaTransportadora.png"));
    ui->btnBandaHE->setIconSize(QSize(120,100));
    ui->btnSupervisor1->setIcon(QIcon("C:/Imagenes/supervisores.png"));
    ui->btnSupervisor1->setIconSize(QSize(90,90));
    ui->btnSupervisor2->setIcon(QIcon("C:/Imagenes/supervisores.png"));
    ui->btnSupervisor2->setIconSize(QSize(90,90));
    ui->btnEmpacadora->setIcon(QIcon("C:/Imagenes/empacadora.png"));
    ui->btnEmpacadora->setIconSize(QSize(120,120));
    ui->btnTransporte->setIcon(QIcon("C:/Imagenes/montacarga.png"));
    ui->btnTransporte->setIconSize(QSize(100,100));
    ui->btnAlmacenFinal->setIcon(QIcon("C:/Imagenes/almacenFinal.png"));
    ui->btnAlmacenFinal->setIconSize(QSize(100,100));
    ui->btnResumen->setIcon(QIcon("C:/Imagenes/resumen.png"));
    ui->btnResumen->setIconSize(QSize(120,120));
}

MainWindow::~MainWindow()
{
    delete ui;
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

void MainWindow::on_btnModificar_clicked(){
    this->hide();
    parametros ventanaParametros;
    ventanaParametros.setModal(true);
    ventanaParametros.exec();
    this->show();
}

void MainWindow::on_btnAlmacen_clicked()
{
    ui->lblEstado->setText(QStringLiteral("Cantida de chocolate restante: %1\nCantidad de harina restante: %2").arg(fabrica.almacen->chocolate).arg(fabrica.almacen->harina));
}

void MainWindow::on_btnCarrito_clicked()
{
    QString estadoStr = "Indef";
    if (fabrica.carrito->estado == true) {
        estadoStr = "ON";
    } else if (fabrica.banda2->estado == false) {
        estadoStr = "OFF";
    }
    ui->lblEstado->setText(QStringLiteral("Estado: %1\nCantidad Maxima: %2\nCantidad Minima: %3\nVelocidad: %4\nPeticion: %5\nCantidad transportada: %6").arg(estadoStr).arg(fabrica.carrito->cantMax).arg(fabrica.carrito->cantMin).arg(fabrica.carrito->velocidad).arg(fabrica.carrito->peticion).arg(fabrica.carrito->resultado));
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


void MainWindow::on_btnEnsambladora_clicked()
{
    QString estadoStr = "Indef";
    if (fabrica.ensambladora->estado == true) {
        estadoStr = "ON";
    } else if (fabrica.ensambladora->estado == false) {
        estadoStr = "OFF";
    }
    ui->lblEstado->setText(QStringLiteral("Estado: %1\nVelocidad: %2\nCantidad maxima de chocolate: %3\nCantidad maxima de mezcla: %4\nCantidad de chocolate: %5\nCantidad de mezcla: %6\nCantidad de galletas hechas: %7").arg(estadoStr).arg(fabrica.ensambladora->velocidad).arg(fabrica.ensambladora->cantMaxChoc).arg(fabrica.ensambladora->cantMaxMez).arg(fabrica.ensambladora->chocolate).arg(fabrica.ensambladora->mezcla).arg(fabrica.ensambladora->galletas));
}


void MainWindow::on_btnBandaEH_clicked()
{
    QString estadoStr = "Indef";
    if (fabrica.banda3 ->estado == true) {
        estadoStr = "ON";
    } else if (fabrica.banda3->estado == false) {
        estadoStr = "OFF";
    }
    ui->lblEstado->setText(QStringLiteral("Estado: %1\nVelocidad: %2\nCantidad maxima soportada: %3\nCantidad de paquetes actuales en la banda: %4").arg(estadoStr).arg(fabrica.banda3->velocidad).arg(fabrica.banda3->cantMax).arg(fabrica.banda3->index));
}


void MainWindow::on_btnHorno_clicked()
{
    QString estadoStr = "Indef";
    if (fabrica.horno ->estado == true) {
        estadoStr = "ON";
    } else if (fabrica.horno->estado == false) {
        estadoStr = "OFF";
    }
    // aqui o en horno hay que hacer otra funcion que sume todas las galletas siendo horneadas
    // y las que salen
    int suma = 0;
    for (int i = 0; i < 6; i++) {
        suma +=fabrica.horno->bandejas[i]->cantidad;
    }
    ui->lblEstado->setText(QStringLiteral("Estado: %1\nCantidad de galletas recogidas: %2\nCantidad de galletas en el horno: %3\nCantidad de galletas horneadas: %4").arg(estadoStr).arg(suma).arg(suma).arg(fabrica.horno->galletas));
}


void MainWindow::on_btnBandaHE_clicked()
{
    QString estadoStr = "Indef";
    if (fabrica.banda4 ->estado == true) {
        estadoStr = "ON";
    } else if (fabrica.banda4->estado == false) {
        estadoStr = "OFF";
    }
    ui->lblEstado->setText(QStringLiteral("Estado: %1\nVelocidad: %2\nCantidad maxima soportada: %3\nCantidad de paquetes actuales en la banda: %4").arg(estadoStr).arg(fabrica.banda4->velocidad).arg(fabrica.banda4->cantMax).arg(fabrica.banda4->index));
}


void MainWindow::on_btnSupervisor2_clicked()
{
    QString estadoStr = "Indef";
    if (fabrica.supervisor2 ->estado == true) {
        estadoStr = "ON";
    } else if (fabrica.supervisor2->estado == false) {
        estadoStr = "OFF";
    }
    ui->lblEstado->setText(QStringLiteral("Estado: %1\nVelocidad: %2\nProbabilidad de exito: %3\nCantidad de galletas defectuosas: %4").arg(estadoStr).arg(fabrica.supervisor2->velocidad).arg(fabrica.supervisor2->probabilidad).arg(fabrica.supervisor2->galletasMalas));
}

void MainWindow::on_btnEmpacadora_clicked()
{
    QString estadoStr = "Indef";
    if (fabrica.empacadora->estado == true) {
        estadoStr = "ON";
    } else if (fabrica.empacadora->estado == false) {
        estadoStr = "OFF";
    }
    ui->lblEstado->setText(QStringLiteral("Estado: %1\nVelocidad: %2\nCantidad de galletas siendo empacadas: %3\nCantidad de paquetes empacados: %4").arg(estadoStr).arg(fabrica.empacadora->velocidad).arg(fabrica.empacadora->galletas).arg(fabrica.empacadora->index));
}

void MainWindow::on_btnTransporte_clicked()
{
    NodoTransporte * tmp = fabrica.empacadora->transporteActivo();

    QString estadoStr = "Indef";
    if (tmp->transporte->estado == true) {
        estadoStr = "ON";
    } else if (tmp->transporte->estado == false) {
        estadoStr = "OFF";
    }
    ui->lblEstado->setText(QStringLiteral("Estado: %1\nVelocidad: %2\nCantidad de paquetes actual: %3\nCantidad maxima de paquetes: %4")
                           .arg(estadoStr)
                           .arg(tmp->transporte->velocidad)
                           .arg(tmp->transporte->cantidad)
                           .arg(tmp->transporte->cantMax));
}

void MainWindow::on_btnAlmacenFinal_clicked()
{
    ui->lblEstado->setText(QStringLiteral("Total de galletas: %1\n").arg(fabrica.almacenFinal->galletas));
    NodoString * tmp = fabrica.almacenFinal->listaString->primerNodo;
    while(tmp != NULL){
        ui->lblEstado->setText(QStringLiteral("Paquete: %1\tCantidad: %2\n").arg(tmp->nombre).arg(tmp->dato));
    }
}

void MainWindow::on_btnSupervisor1_clicked()
{
    QString estadoStr = "Indef";
    if (fabrica.supervisor1 ->estado == true) {
        estadoStr = "ON";
    } else if (fabrica.supervisor1->estado == false) {
        estadoStr = "OFF";
    }
    ui->lblEstado->setText(QStringLiteral("Estado: %1\nVelocidad: %2\nProbabilidad de exito: %3\nCantidad de galletas defectuosas: %4").arg(estadoStr).arg(fabrica.supervisor1->velocidad).arg(fabrica.supervisor1->probabilidad).arg(fabrica.supervisor1->galletasMalas));
}

void MainWindow::on_btnConfigurar_clicked()
{
    this->hide();
    solicitar ventanaSolicitar;
    ventanaSolicitar.setPunteroFabrica(ptoFabrica);
    ventanaSolicitar.setModal(true);
    ventanaSolicitar.exec();
    this->show();
}

void MainWindow::on_btnResumen_clicked(){
    ui->lblEstado->setText(QStringLiteral("Total de galletas: %1\n").arg(fabrica.almacenFinal->galletas));
    NodoString * tmp = fabrica.almacenFinal->listaString->primerNodo;
    while(tmp != NULL){
        ui->lblEstado->setText(QStringLiteral("Paquete: %1\tCantidad: %2\n").arg(tmp->nombre).arg(tmp->dato));
    }
    ui->lblEstado->setText(QStringLiteral("Masa utilizada: %1\nChocolate utilizado %2\n")
                           .arg(fabrica.almacenFinal->galletas * fabrica.planificador->receta->harina)
                           .arg(fabrica.almacenFinal->galletas * fabrica.planificador->receta->chocolate));

}
