#ifndef SOLICITAR_H
#define SOLICITAR_H
#include "fabrica.h"
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


    void setPunteroFabrica(Fabrica *);

private slots:
    void on_btnIncluir_clicked();

    void on_btnOk_clicked();


private:
    Ui::solicitar *ui;
    Fabrica * refFabrica;
};

#endif // SOLICITAR_H
