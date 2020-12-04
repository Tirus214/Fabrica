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
    int velocidadCarrito = ui->txtCarritoV->textCursor().selectedText().toInt();
    int maximoCarrito = ui->txtCarritoMx->textCursor().selectedText().toInt();
    int minimoCarrito = ui->txtCarritoMn->textCursor().selectedText().toInt();
    int velocidadMezcladoraM1 = ui->txtMezc1V->textCursor().selectedText().toInt();
    int maximoMezcladoraM1 = ui->txtMezc1Mx->textCursor().selectedText().toInt();
    int minimoMezcladoraM1 = ui->txtMezc1Mn->textCursor().selectedText().toInt();
    int velocidadMezcladoraM2 = ui->txtMezc2V->textCursor().selectedText().toInt();
    int maximoMezcladoraM2 = ui->txtMezc2Mx->textCursor().selectedText().toInt();
    int minimoMezcladoraM2 = ui->txtMezc12Mn->textCursor().selectedText().toInt();
    int velocidadMezcladoraC = ui->txtMezcChoV->textCursor().selectedText().toInt();
    int maximoMezcladoraC = ui->txtMezcChoMx->textCursor().selectedText().toInt();
    int minimoMezcladoraC = ui->txtMezcChoMn->textCursor().selectedText().toInt();
    int velocidadBanda1 = ui->txtBanda1V->textCursor().selectedText().toInt();
    int maximoBanda1 = ui->txtBanda1Mx->textCursor().selectedText().toInt();
    int velocidadBanda2 = ui->txtBanda2V->textCursor().selectedText().toInt();
    int maximoBanda2 = ui->txtBanda2Mx->textCursor().selectedText().toInt();
    int velocidadEnsambladora = ui->txtEnsamV->textCursor().selectedText().toInt();
    int maximoEnsambladora = ui->txtEnsamMx->textCursor().selectedText().toInt();
    int velocidadBanda3 = ui->txtBanda3V->textCursor().selectedText().toInt();
    int maximoBanda3 = ui->txtBanda3Mx->textCursor().selectedText().toInt();
    int velocidadBandeja1 = ui->txtBandeja1V->textCursor().selectedText().toInt();
    int maximoBandeja1 = ui->txtBandeja1Mx->textCursor().selectedText().toInt();
    int velocidadBandeja2 = ui->txtBandeja2V->textCursor().selectedText().toInt();
    int maximoBandeja2 = ui->txtBandeja2Mx->textCursor().selectedText().toInt();
    int velocidadBandeja3 = ui->txtBandeja3V->textCursor().selectedText().toInt();
    int maximoBandeja3 = ui->txtBandeja3Mx->textCursor().selectedText().toInt();
    int velocidadBandeja4 = ui->txtBandeja4V->textCursor().selectedText().toInt();
    int maximoBandeja4 = ui->txtBandeja4Mx->textCursor().selectedText().toInt();
    int velocidadBandeja5 = ui->txtBandeja5V->textCursor().selectedText().toInt();
    int maximoBandeja5 = ui->txtBandeja5Mx->textCursor().selectedText().toInt();
    int velocidadBandeja6 = ui->txtBandeja6V->textCursor().selectedText().toInt();
    int maximoBandeja6 = ui->txtBandeja6Mx->textCursor().selectedText().toInt();
    int velocidadBanda4 = ui->txtBanda4V->textCursor().selectedText().toInt();
    int maximoBanda4 = ui->txtBanda4Mx->textCursor().selectedText().toInt();
    int velocidadSupervisor1 = ui->txtSuper1V->textCursor().selectedText().toInt();
    int velocidadSupervisor2 = ui->txtSuper2V->textCursor().selectedText().toInt();
    int velocidadEmpacadora = ui->txtEmpacV->textCursor().selectedText().toInt();
    int maximoEmpacadora = ui->txtEmpacMx->textCursor().selectedText().toInt();
    int velocidadTransporte = ui->txtTranspV->textCursor().selectedText().toInt();
    int maximoTransporte = ui->txtTrasnpMx->textCursor().selectedText().toInt();
}


void parametros::on_buttonBox_rejected()
{
    this->close();
}

void parametros::setPunteroFabrica(Fabrica * _refFabrica) {
    this->refFabrica = _refFabrica;
}
