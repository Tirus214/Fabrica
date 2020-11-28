#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "dialogalmacen.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_btnAlmacen_clicked();

    void on_btnMezcladora1_pressed();

    void on_btnMezcladora2_pressed();

    void on_btnMezcladora3_pressed();

    void on_btnBarraTransporte1_pressed();

    void on_btnBarraTransporte2_pressed();

private:
    Ui::MainWindow *ui;
    DialogAlmacen *dialogoAlmacen;
};
#endif // MAINWINDOW_H
