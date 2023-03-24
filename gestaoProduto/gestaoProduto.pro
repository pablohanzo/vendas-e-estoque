QT       += core gui sql printsupport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    funcoes_globais.cpp \
    gp_editarprodutovenda.cpp \
    gp_gestaocolab.cpp \
    gp_gestaoestoque.cpp \
    gp_gestaovendas.cpp \
    gp_logar.cpp \
    gp_novavenda.cpp \
    main.cpp \
    gp_principal.cpp

HEADERS += \
    Conexao.h \
    funcoes_globais.h \
    gp_editarprodutovenda.h \
    gp_gestaocolab.h \
    gp_gestaoestoque.h \
    gp_gestaovendas.h \
    gp_logar.h \
    gp_novavenda.h \
    gp_principal.h \
    variaveis_globais.h

FORMS += \
    gp_editarprodutovenda.ui \
    gp_gestaocolab.ui \
    gp_gestaoestoque.ui \
    gp_gestaovendas.ui \
    gp_logar.ui \
    gp_novavenda.ui \
    gp_principal.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    arquivo_de_recursos.qrc
