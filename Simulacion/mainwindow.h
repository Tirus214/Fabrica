#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include "dialogalmacen.h"
#include "fabrica.h"



QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:

    Fabrica fabrica;
    //Carrito carrito;

    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_btnAlmacen_clicked();

    void on_btnMezcladora1_pressed();

    void on_btnMezcladora2_pressed();

    void on_btnMezcladora3_pressed();

    void on_btnBarraTransporte1_pressed();

    void on_btnBarraTransporte2_pressed();

    void on_btnStart_clicked();

    void on_btnPause_clicked();

    void on_btnDetener_clicked();

    void on_btnCarrito_clicked();

    void on_btnEnsambladora_clicked();

    void on_btnBandaEH_clicked();

    void on_btnHorno_clicked();

    void on_btnBandaHE_clicked();

    void on_btnSupervisores_clicked();

    void on_btnSupervisor2_clicked();

    void on_btnEmpacadora_clicked();

    void on_btnTransporte_clicked();

    void on_btnAlmacenFinal_clicked();

    void on_btnSupervisor1_clicked();

private:
    Ui::MainWindow *ui;
    DialogAlmacen *dialogoAlmacen;
};
#endif // MAINWINDOW_H
