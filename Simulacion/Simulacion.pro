QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    almacen.cpp \
    almacenfinal.cpp \
    bandaeh.cpp \
    # bandaeh.cpp \
    bandahe.cpp \
    bandame.cpp \
    bandeja.cpp \
    carrito.cpp \
    cola.cpp \
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
    parametros.cpp \
    planificador.cpp \
    receta.cpp \
    solicitar.cpp \
    supervisor.cpp \
    transporte.cpp

HEADERS += \
    almacen.h \
    almacenfinal.h \
    bandaeh.h \
    bandahe.h \
    bandame.h \
    bandeja.h \
    carrito.h \
    cola.h \
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
    parametros.h \
    planificador.h \
    receta.h \
    solicitar.h \
    supervisor.h \
    transporte.h

FORMS += \
    mainwindow.ui \
    parametros.ui \
    solicitar.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
