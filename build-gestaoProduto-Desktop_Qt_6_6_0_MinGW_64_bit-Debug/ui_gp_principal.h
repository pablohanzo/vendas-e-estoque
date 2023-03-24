/********************************************************************************
** Form generated from reading UI file 'gp_principal.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GP_PRINCIPAL_H
#define UI_GP_PRINCIPAL_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_gp_principal
{
public:
    QAction *actionEstoque;
    QAction *actionColaboradores;
    QAction *actionVendas;
    QAction *actionSair;
    QAction *actionSobre;
    QWidget *centralwidget;
    QPushButton *btn_novavenda;
    QPushButton *btn_bloquear;
    QLabel *lb_nomelogado;
    QLabel *label;
    QMenuBar *menubar;
    QMenu *menuGest_o;
    QMenu *menuSistema;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *gp_principal)
    {
        if (gp_principal->objectName().isEmpty())
            gp_principal->setObjectName("gp_principal");
        gp_principal->resize(800, 600);
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(gp_principal->sizePolicy().hasHeightForWidth());
        gp_principal->setSizePolicy(sizePolicy);
        gp_principal->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        actionEstoque = new QAction(gp_principal);
        actionEstoque->setObjectName("actionEstoque");
        actionColaboradores = new QAction(gp_principal);
        actionColaboradores->setObjectName("actionColaboradores");
        actionVendas = new QAction(gp_principal);
        actionVendas->setObjectName("actionVendas");
        actionSair = new QAction(gp_principal);
        actionSair->setObjectName("actionSair");
        actionSobre = new QAction(gp_principal);
        actionSobre->setObjectName("actionSobre");
        centralwidget = new QWidget(gp_principal);
        centralwidget->setObjectName("centralwidget");
        btn_novavenda = new QPushButton(centralwidget);
        btn_novavenda->setObjectName("btn_novavenda");
        btn_novavenda->setGeometry(QRect(10, 10, 141, 41));
        btn_novavenda->setStyleSheet(QString::fromUtf8("font-size: 23px;\n"
"background-color: rgb(50, 73, 167);\n"
"color: rgb(255, 255, 255);"));
        btn_bloquear = new QPushButton(centralwidget);
        btn_bloquear->setObjectName("btn_bloquear");
        btn_bloquear->setGeometry(QRect(10, 240, 32, 32));
        btn_bloquear->setFlat(true);
        lb_nomelogado = new QLabel(centralwidget);
        lb_nomelogado->setObjectName("lb_nomelogado");
        lb_nomelogado->setGeometry(QRect(20, 410, 49, 16));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(170, 120, 501, 291));
        label->setFocusPolicy(Qt::TabFocus);
        label->setAutoFillBackground(false);
        label->setFrameShape(QFrame::NoFrame);
        label->setPixmap(QPixmap(QString::fromUtf8(":/imagens/imgs/logo-casa de ferragens ijal.png")));
        label->setScaledContents(false);
        label->setAlignment(Qt::AlignCenter);
        gp_principal->setCentralWidget(centralwidget);
        menubar = new QMenuBar(gp_principal);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        menuGest_o = new QMenu(menubar);
        menuGest_o->setObjectName("menuGest_o");
        menuSistema = new QMenu(menubar);
        menuSistema->setObjectName("menuSistema");
        gp_principal->setMenuBar(menubar);
        statusbar = new QStatusBar(gp_principal);
        statusbar->setObjectName("statusbar");
        gp_principal->setStatusBar(statusbar);

        menubar->addAction(menuGest_o->menuAction());
        menubar->addAction(menuSistema->menuAction());
        menuGest_o->addAction(actionEstoque);
        menuGest_o->addAction(actionColaboradores);
        menuGest_o->addAction(actionVendas);
        menuSistema->addAction(actionSair);
        menuSistema->addSeparator();
        menuSistema->addAction(actionSobre);

        retranslateUi(gp_principal);

        QMetaObject::connectSlotsByName(gp_principal);
    } // setupUi

    void retranslateUi(QMainWindow *gp_principal)
    {
        gp_principal->setWindowTitle(QCoreApplication::translate("gp_principal", "gp_principal", nullptr));
        actionEstoque->setText(QCoreApplication::translate("gp_principal", "Estoque", nullptr));
        actionColaboradores->setText(QCoreApplication::translate("gp_principal", "Colaboradores", nullptr));
        actionVendas->setText(QCoreApplication::translate("gp_principal", "Vendas", nullptr));
        actionSair->setText(QCoreApplication::translate("gp_principal", "Sair", nullptr));
        actionSobre->setText(QCoreApplication::translate("gp_principal", "Sobre", nullptr));
        btn_novavenda->setText(QCoreApplication::translate("gp_principal", "Nova venda", nullptr));
        btn_bloquear->setText(QString());
        lb_nomelogado->setText(QCoreApplication::translate("gp_principal", "Sem Colaborador", nullptr));
        label->setText(QString());
        menuGest_o->setTitle(QCoreApplication::translate("gp_principal", "Gest\303\243o", nullptr));
        menuSistema->setTitle(QCoreApplication::translate("gp_principal", "Sistema", nullptr));
    } // retranslateUi

};

namespace Ui {
    class gp_principal: public Ui_gp_principal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GP_PRINCIPAL_H
