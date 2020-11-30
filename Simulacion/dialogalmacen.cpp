#include "dialogalmacen.h"
#include "ui_dialogalmacen.h"
#include "almacen.h"


DialogAlmacen::DialogAlmacen(QWidget *parent) :
    QDialog(parent);
    ui(new Ui::DialogAlmacen);
{
    ui->setupUi(this);
    ui->lblCantidad->setText("Cantidad de mezcla restante: ");
    ui->lblCantidad->setTextFormat(Qt::PlainText);
    ui->lblCantidad->setWordWrap(true);
}

DialogAlmacen::~DialogAlmacen()
{
    delete ui;
}
