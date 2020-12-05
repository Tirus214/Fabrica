#ifndef PARAMETROS_H
#define PARAMETROS_H
#include "planificador.h"
#include <QDialog>
#include "fabrica.h"

namespace Ui {
class parametros;
}

class parametros : public QDialog
{
    Q_OBJECT

public:
    explicit parametros(QWidget *parent = nullptr);
    ~parametros();

    void setPunteroFabrica(Fabrica * _refFabrica);

private slots:
    void on_buttonBox_clicked();

private:
    Ui::parametros *ui;
    Fabrica * refFabrica;
};

#endif // PARAMETROS_H
