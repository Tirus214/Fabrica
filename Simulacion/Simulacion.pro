QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    almacen.cpp \
    almacenfinal.cpp \
    banda.cpp \
    bandeja.cpp \
    carrito.cpp \
    cola.cpp \
    dialogalmacen.cpp \
    empacadora.cpp \
    ensambladora.cpp \
    fabrica.cpp \
    horno.cpp \
    listadoblecircular.cpp \
    listasimplestring.cpp \
    listasimpletransporte.cpp \
    main.cpp \
    mainwindow.cpp \
    mezcladora.cpp \
    nodocola.cpp \
    nodopaquete.cpp \
    nodostring.cpp \
    nodotransporte.cpp \
    paquete.cpp \
    planificador.cpp \
    receta.cpp \
    supervisor.cpp \
    transporte.cpp

HEADERS += \
    almacen.h \
    almacenfinal.h \
    banda.h \
    bandeja.h \
    carrito.h \
    cola.h \
    dialogalmacen.h \
    empacadora.h \
    ensambladora.h \
    fabrica.h \
    horno.h \
    listadoblecircular.h \
    listasimplestring.h \
    listasimpletransporte.h \
    mainwindow.h \
    mezcladora.h \
    nodocola.h \
    nodopaquete.h \
    nodostring.h \
    nodotransporte.h \
    paquete.h \
    planificador.h \
    receta.h \
    supervisor.h \
    transporte.h

FORMS += \
    dialogalmacen.ui \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
