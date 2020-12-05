#include "parametros.h"
#include "ui_parametros.h"


parametros::parametros(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::parametros)
{
    ui->setupUi(this);
}

parametros::~parametros()
{
    delete ui;
}

void parametros::on_btnOk_clicked()
{
    // Aqui hay que guardar los valores    
    refFabrica->carrito->velocidad = ui->txtCarritoV->text().toDouble();
    refFabrica->carrito->cantMax = ui->txtCarritoMx->text().toInt();
    refFabrica->carrito->cantMin = ui->txtCarritoMn->text().toInt();

    refFabrica->mezcladora1->setVelocidad(ui->txtMezc1V->text().toDouble());
    refFabrica->mezcladora1->setMaximo(ui->txtMezc1Mx->text().toInt());
    refFabrica->mezcladora1->setMinimo(ui->txtMezc1Mn->text().toInt());

    refFabrica->mezcladora2->setVelocidad(ui->txtMezc2V->text().toDouble());
    refFabrica->mezcladora2->setMaximo(ui->txtMezc2Mx->text().toInt());
    refFabrica->mezcladora2->setMinimo(ui->txtMezc2Mn->text().toInt());

    refFabrica->mezcladora3->setVelocidad(ui->txtMezcChocV->text().toDouble());
    refFabrica->mezcladora3->setMaximo(ui->txtMezcChocMx->text().toInt());
    refFabrica->mezcladora3->setMinimo(ui->txtMezcChocMn->text().toInt());

    refFabrica->banda1->setVelocidad(ui->txtBanda1V->text().toDouble());
    refFabrica->banda1->setMaximo(ui->txtBanda1Mx->text().toInt());

    refFabrica->banda2->setVelocidad(ui->txtBanda2V->text().toDouble());
    refFabrica->banda2->setMaximo(ui->txtBanda2Mx->text().toInt());

    refFabrica->banda3->setVelocidad(ui->txtBanda3V->text().toDouble());
    refFabrica->banda3->setMaximo(ui->txtBanda3Mx->text().toInt());

    refFabrica->banda4->setVelocidad(ui->txtBanda4V->text().toDouble());
    refFabrica->banda4->setMaximo(ui->txtBanda4Mx->text().toInt());

    refFabrica->ensambladora->setVelocidad(ui->txtEnsamV->text().toDouble());
    refFabrica->ensambladora->setMaximo(ui->txtEnsamMx->text().toInt());

    refFabrica->horno->bandejas[0]->setVelocidad(ui->txtBandeja1V->text().toDouble());
    refFabrica->horno->bandejas[0]->setMaximo(ui->txtBandeja1Mx->text().toInt());

    refFabrica->horno->bandejas[1]->setVelocidad(ui->txtBandeja2V->text().toDouble());
    refFabrica->horno->bandejas[1]->setMaximo(ui->txtBandeja2Mx->text().toInt());

    refFabrica->horno->bandejas[2]->setVelocidad(ui->txtBandeja3V->text().toDouble());
    refFabrica->horno->bandejas[2]->setMaximo(ui->txtBandeja3Mx->text().toInt());

    refFabrica->horno->bandejas[3]->setVelocidad(ui->txtBandeja4V->text().toDouble());
    refFabrica->horno->bandejas[3]->setMaximo(ui->txtBandeja4Mx->text().toInt());

    refFabrica->horno->bandejas[4]->setVelocidad(ui->txtBandeja5V->text().toDouble());
    refFabrica->horno->bandejas[4]->setMaximo(ui->txtBandeja5Mx->text().toInt());

    refFabrica->horno->bandejas[5]->setVelocidad(ui->txtBandeja6V->text().toDouble());
    refFabrica->horno->bandejas[5]->setMaximo(ui->txtBandeja6Mx->text().toInt());

    refFabrica->supervisor1->setVelocidad(ui->txtSuper1V->text().toDouble());
    refFabrica->supervisor2->setVelocidad(ui->txtSuper2V->text().toDouble());

    refFabrica->empacadora->setVelocidad(ui->txtEmpacV->text().toDouble());
    refFabrica->empacadora->setMaximo(ui->txtEmpacMx->text().toInt());

    // aqui hay que ver como asignar al transporte (empacadora for i in listaTransporte -> nodoTransporte
    // -> transporte -> setVelocidad / setMaximo
    int velocidadTransporte = ui->txtTranspV->text().toInt();
    int maximoTransporte = ui->txtTrasnpMx->text().toInt();

    refFabrica->transporte->velocidad = velocidadTransporte;
    refFabrica->transporte->cantMax = maximoTransporte;

    fabri2->setFabrica(refFabrica);
    this->close();

}


void parametros::setPunteroFabrica(Fabrica * _refFabrica) {
    refFabrica = _refFabrica;
}
