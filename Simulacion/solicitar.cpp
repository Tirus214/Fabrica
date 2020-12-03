#include "solicitar.h"
#include "ui_solicitar.h"

solicitar::solicitar(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::solicitar)
{
    ui->setupUi(this);
}

solicitar::~solicitar()
{
    delete ui;
}
