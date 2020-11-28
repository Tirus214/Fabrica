#ifndef SUPERVISOR_H
#define SUPERVISOR_H
#include <QApplication>
#include <QtCore>
#include <QtDebug>


class Supervisor : public QThread{
    int galletas;
public:
    Supervisor(){
        galletas = 0;
    }
};

#endif // SUPERVISOR_H
