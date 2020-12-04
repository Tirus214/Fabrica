#ifndef PARAMETROS_H
#define PARAMETROS_H
#include "planificador.h"
#include <QDialog>

namespace Ui {
class parametros;
}

class parametros : public QDialog
{
    Q_OBJECT

public:
    explicit parametros(QWidget *parent = nullptr);
    ~parametros();

private:
    Ui::parametros *ui;
};

#endif // PARAMETROS_H
