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

void parametros::on_buttonBox_accepted()
{
    // Aqui hay que guardar los valores    
    refFabrica->carrito->setVelocidad(ui->txtCarritoV->textCursor().selectedText().toDouble());
    refFabrica->carrito->setMaximo(ui->txtCarritoMx->textCursor().selectedText().toInt());
    refFabrica->carrito->setMinimo(ui->txtCarritoMn->textCursor().selectedText().toInt());

    /*refFabrica->mezcladora1->setVelocidad(ui->txtMezc1V->textCursor().selectedText().toDouble());
    refFabrica->mezcladora1->setMaximo(ui->txtMezc1Mx->textCursor().selectedText().toInt());
    refFabrica->mezcladora1->setMinimo(ui->txtMezc1Mn->textCursor().selectedText().toInt());

    refFabrica->mezcladora2->setVelocidad(ui->txtMezc2V->textCursor().selectedText().toDouble());
    refFabrica->mezcladora2->setMaximo(ui->txtMezc2Mx->textCursor().selectedText().toInt());
    refFabrica->mezcladora2->setMinimo(ui->txtMezc12Mn->textCursor().selectedText().toInt());

    refFabrica->mezcladora3->setVelocidad(ui->txtMezcChoV->textCursor().selectedText().toDouble());
    refFabrica->mezcladora3->setMaximo(ui->txtMezcChoMx->textCursor().selectedText().toInt());
    refFabrica->mezcladora3->setMinimo(ui->txtMezcChoMn->textCursor().selectedText().toInt());

    refFabrica->banda1->setVelocidad(ui->txtBanda1V->textCursor().selectedText().toDouble());
    refFabrica->banda1->setMaximo(ui->txtBanda1Mx->textCursor().selectedText().toInt());

    refFabrica->banda2->setVelocidad(ui->txtBanda2V->textCursor().selectedText().toDouble());
    refFabrica->banda2->setMaximo(ui->txtBanda2Mx->textCursor().selectedText().toInt());

    refFabrica->banda3->setVelocidad(ui->txtBanda3V->textCursor().selectedText().toDouble());
    refFabrica->banda3->setMaximo(ui->txtBanda3Mx->textCursor().selectedText().toInt());

    refFabrica->banda4->setVelocidad(ui->txtBanda4V->textCursor().selectedText().toDouble());
    refFabrica->banda4->setMaximo(ui->txtBanda4Mx->textCursor().selectedText().toInt());

    refFabrica->ensambladora->setVelocidad(ui->txtEnsamV->textCursor().selectedText().toDouble());
    refFabrica->ensambladora->setMaximo(ui->txtEnsamMx->textCursor().selectedText().toInt());

    refFabrica->horno->bandejas[0]->setVelocidad(ui->txtBandeja1V->textCursor().selectedText().toDouble());
    refFabrica->horno->bandejas[0]->setMaximo(ui->txtBandeja1Mx->textCursor().selectedText().toInt());

    refFabrica->horno->bandejas[1]->setVelocidad(ui->txtBandeja2V->textCursor().selectedText().toDouble());
    refFabrica->horno->bandejas[1]->setMaximo(ui->txtBandeja2Mx->textCursor().selectedText().toInt());

    refFabrica->horno->bandejas[2]->setVelocidad(ui->txtBandeja3V->textCursor().selectedText().toDouble());
    refFabrica->horno->bandejas[2]->setMaximo(ui->txtBandeja3Mx->textCursor().selectedText().toInt());

    refFabrica->horno->bandejas[3]->setVelocidad(ui->txtBandeja4V->textCursor().selectedText().toDouble());
    refFabrica->horno->bandejas[3]->setMaximo(ui->txtBandeja4Mx->textCursor().selectedText().toInt());

    refFabrica->horno->bandejas[4]->setVelocidad(ui->txtBandeja5V->textCursor().selectedText().toDouble());
    refFabrica->horno->bandejas[4]->setMaximo(ui->txtBandeja5Mx->textCursor().selectedText().toInt());

    refFabrica->horno->bandejas[5]->setVelocidad(ui->txtBandeja6V->textCursor().selectedText().toDouble());
    refFabrica->horno->bandejas[5]->setMaximo(ui->txtBandeja6Mx->textCursor().selectedText().toInt());

    refFabrica->supervisor1->setVelocidad(ui->txtSuper1V->textCursor().selectedText().toDouble());
    refFabrica->supervisor2->setVelocidad(ui->txtSuper2V->textCursor().selectedText().toDouble());

    refFabrica->empacadora->setVelocidad(ui->txtEmpacV->textCursor().selectedText().toDouble());
    refFabrica->empacadora->setMaximo(ui->txtEmpacMx->textCursor().selectedText().toInt());

    // aqui hay que ver como asignar al transporte (empacadora for i in listaTransporte -> nodoTransporte
    // -> transporte -> setVelocidad / setMaximo
    int velocidadTransporte = ui->txtTranspV->textCursor().selectedText().toInt();
    int maximoTransporte = ui->txtTrasnpMx->textCursor().selectedText().toInt();

    refFabrica->empacadora->velocitadTransporte = velocidadTransporte;
    refFabrica->empacadora->maximoTrasnporte = maximoTransporte;

    refFabrica->setElementos();*/
}


void parametros::on_buttonBox_rejected()
{
    refFabrica->setElementos();
    this->close();
}

void parametros::setPunteroFabrica(Fabrica * _refFabrica) {
    refFabrica = _refFabrica;
}
