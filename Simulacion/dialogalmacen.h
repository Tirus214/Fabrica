#ifndef DIALOGALMACEN_H
#define DIALOGALMACEN_H

#include <QWidget>

namespace Ui {
class DialogAlmacen;
}

class DialogAlmacen : public QWidget
{
    Q_OBJECT

public:
    explicit DialogAlmacen(QWidget *parent = nullptr);
    ~DialogAlmacen();

private:
    Ui::DialogAlmacen *ui;
};

#endif // DIALOGALMACEN_H
