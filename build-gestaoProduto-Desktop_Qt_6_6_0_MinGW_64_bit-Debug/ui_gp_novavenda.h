/********************************************************************************
** Form generated from reading UI file 'gp_novavenda.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GP_NOVAVENDA_H
#define UI_GP_NOVAVENDA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_gp_novavenda
{
public:
    QLineEdit *txt_qtde;
    QLineEdit *txt_codproduto;
    QTableWidget *tw_listaprodutos;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *lb_totalvenda;
    QPushButton *btn_excluirprod;
    QPushButton *btn_editarprod;
    QPushButton *btn_finalizarvenda;
    QPushButton *btn_pesquisarprod;

    void setupUi(QDialog *gp_novavenda)
    {
        if (gp_novavenda->objectName().isEmpty())
            gp_novavenda->setObjectName("gp_novavenda");
        gp_novavenda->resize(718, 364);
        txt_qtde = new QLineEdit(gp_novavenda);
        txt_qtde->setObjectName("txt_qtde");
        txt_qtde->setGeometry(QRect(20, 30, 113, 22));
        txt_codproduto = new QLineEdit(gp_novavenda);
        txt_codproduto->setObjectName("txt_codproduto");
        txt_codproduto->setGeometry(QRect(156, 30, 181, 22));
        tw_listaprodutos = new QTableWidget(gp_novavenda);
        tw_listaprodutos->setObjectName("tw_listaprodutos");
        tw_listaprodutos->setGeometry(QRect(10, 60, 691, 241));
        label = new QLabel(gp_novavenda);
        label->setObjectName("label");
        label->setGeometry(QRect(40, 10, 71, 16));
        label_2 = new QLabel(gp_novavenda);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(140, 34, 49, 16));
        label_3 = new QLabel(gp_novavenda);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(180, 10, 111, 16));
        label_4 = new QLabel(gp_novavenda);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(40, 300, 71, 20));
        lb_totalvenda = new QLabel(gp_novavenda);
        lb_totalvenda->setObjectName("lb_totalvenda");
        lb_totalvenda->setGeometry(QRect(100, 300, 131, 20));
        btn_excluirprod = new QPushButton(gp_novavenda);
        btn_excluirprod->setObjectName("btn_excluirprod");
        btn_excluirprod->setGeometry(QRect(30, 330, 100, 24));
        btn_excluirprod->setAutoDefault(false);
        btn_editarprod = new QPushButton(gp_novavenda);
        btn_editarprod->setObjectName("btn_editarprod");
        btn_editarprod->setGeometry(QRect(140, 330, 100, 24));
        btn_editarprod->setAutoDefault(false);
        btn_finalizarvenda = new QPushButton(gp_novavenda);
        btn_finalizarvenda->setObjectName("btn_finalizarvenda");
        btn_finalizarvenda->setGeometry(QRect(260, 324, 131, 31));
        btn_finalizarvenda->setStyleSheet(QString::fromUtf8("font-size: 16px;\n"
"background-color: rgb(66, 133, 244);\n"
"color: rgb(255, 255, 255);"));
        btn_finalizarvenda->setAutoDefault(false);
        btn_pesquisarprod = new QPushButton(gp_novavenda);
        btn_pesquisarprod->setObjectName("btn_pesquisarprod");
        btn_pesquisarprod->setGeometry(QRect(350, 30, 75, 24));
        btn_pesquisarprod->setAutoDefault(false);

        retranslateUi(gp_novavenda);

        QMetaObject::connectSlotsByName(gp_novavenda);
    } // setupUi

    void retranslateUi(QDialog *gp_novavenda)
    {
        gp_novavenda->setWindowTitle(QCoreApplication::translate("gp_novavenda", "Dialog", nullptr));
        txt_qtde->setText(QCoreApplication::translate("gp_novavenda", "1", nullptr));
        label->setText(QCoreApplication::translate("gp_novavenda", "Quantidade", nullptr));
        label_2->setText(QCoreApplication::translate("gp_novavenda", "X", nullptr));
        label_3->setText(QCoreApplication::translate("gp_novavenda", "C\303\263digo do Produto", nullptr));
        label_4->setText(QCoreApplication::translate("gp_novavenda", "Valor Total:", nullptr));
        lb_totalvenda->setText(QCoreApplication::translate("gp_novavenda", "R$", nullptr));
        btn_excluirprod->setText(QCoreApplication::translate("gp_novavenda", "Excluir ", nullptr));
        btn_editarprod->setText(QCoreApplication::translate("gp_novavenda", "Editar ", nullptr));
        btn_finalizarvenda->setText(QCoreApplication::translate("gp_novavenda", "Finalizar Venda", nullptr));
        btn_pesquisarprod->setText(QCoreApplication::translate("gp_novavenda", "Pesquisar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class gp_novavenda: public Ui_gp_novavenda {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GP_NOVAVENDA_H
