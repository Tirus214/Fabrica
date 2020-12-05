#ifndef SOLICITAR_H
#define SOLICITAR_H
#include "EstructuraFabrica.h"
#include <QDialog>

namespace Ui {
class solicitar;
}

class solicitar : public QDialog
{
    Q_OBJECT

public:
    explicit solicitar(QWidget *parent = nullptr);
    ~solicitar();
    EstructuraFabrica * fabri2 = new EstructuraFabrica();

    void setPunteroFabrica(Fabrica *);

private slots:
    void on_btnIncluir_clicked();

    void on_btnOk_accepted();


private:
    Ui::solicitar *ui;
    Fabrica * refFabrica = fabri2->fabrica;
};

#endif // SOLICITAR_H
