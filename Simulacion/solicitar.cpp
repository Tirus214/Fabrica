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
    refFabrica->planificador->addPeticion(cantidadPaquetes,nombrePaquete,cantidadGalletas);
}

void solicitar::setPunteroFabrica(Fabrica * _refFabrica) {
    this->refFabrica = _refFabrica;
}

void solicitar::on_btnOk_clicked(){
    int harina = ui->txtHarina->textCursor().selectedText().toInt();
    int chocolate = ui->txtChoc->textCursor().selectedText().toInt();
    refFabrica->planificador->receta->chocolate = chocolate;
    refFabrica->planificador->receta->harina = harina;
    refFabrica->setElementos();
}
