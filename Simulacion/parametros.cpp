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
}


void parametros::on_buttonBox_rejected()
{
    this->close();
}
