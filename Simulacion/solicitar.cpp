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

void solicitar::on_btnIncluir_clicked()
{
    int cantidadPaquetes = ui->txtCant->textCursor().selectedText().toInt();
    int cantidadGalletas = ui->txtCantGallet->textCursor().selectedText().toInt();
    QString nombrePaquete = ui->txtNombre->textCursor().selectedText();

}
