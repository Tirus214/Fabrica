#ifndef PARAMETROS_H
#define PARAMETROS_H
#include "planificador.h"
#include <QDialog>
#include "EstructuraFabrica.h"

namespace Ui {
class parametros;
}

class parametros : public QDialog
{
    Q_OBJECT

public:
    explicit parametros(QWidget *parent = nullptr);
    ~parametros();

     EstructuraFabrica * fabri2 = new EstructuraFabrica();


    void setPunteroFabrica(Fabrica * _refFabrica);

private slots:
    void on_btnOk_clicked();

private:
    Ui::parametros *ui;
    Fabrica * refFabrica = fabri2->fabrica;
};

#endif // PARAMETROS_H
