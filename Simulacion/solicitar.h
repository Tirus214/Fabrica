#ifndef SOLICITAR_H
#define SOLICITAR_H

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

private:
    Ui::solicitar *ui;
};

#endif // SOLICITAR_H
