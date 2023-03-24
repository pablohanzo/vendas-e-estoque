/********************************************************************************
** Form generated from reading UI file 'gp_gestaoestoque.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GP_GESTAOESTOQUE_H
#define UI_GP_GESTAOESTOQUE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_gp_gestaoestoque
{
public:
    QTabWidget *tabWidget;
    QWidget *tab_novoproduto;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_8;
    QVBoxLayout *verticalLayout_7;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *txt_codigo;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QLineEdit *txt_descricao;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_4;
    QLineEdit *txt_fornecedor;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_3;
    QLineEdit *txt_qtdestoque;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_5;
    QLineEdit *txt_valorcompra;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_6;
    QLineEdit *txt_valorvenda;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QPushButton *btn_novoproduto;
    QPushButton *btn_gravarnovoproduto;
    QWidget *tab_gestaoprodutos;
    QTableWidget *tw_g_produtos;
    QGroupBox *groupBox;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_9;
    QRadioButton *rb_g_codigo;
    QRadioButton *rb_g_produto;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_16;
    QVBoxLayout *verticalLayout_10;
    QLabel *label_7;
    QLineEdit *txt_g_codigoproduto;
    QVBoxLayout *verticalLayout_15;
    QVBoxLayout *verticalLayout_14;
    QVBoxLayout *verticalLayout_13;
    QVBoxLayout *verticalLayout_12;
    QVBoxLayout *verticalLayout_11;
    QLabel *label_8;
    QLineEdit *txt_g_produto;
    QLabel *label_9;
    QLineEdit *txt_g_fornecedor;
    QLabel *labelestoque;
    QLineEdit *txt_g_qtdestoque;
    QLabel *label_11;
    QLineEdit *txt_g_valorcompra;
    QLabel *label_12;
    QLineEdit *txt_g_valorvenda;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *btn_g_gravar;
    QPushButton *btn_g_excluir;
    QWidget *layoutWidget3;
    QVBoxLayout *verticalLayout_18;
    QVBoxLayout *verticalLayout_17;
    QLabel *label_13;
    QLineEdit *txt_g_filtrar;
    QPushButton *btn_g_filtrar;

    void setupUi(QDialog *gp_gestaoestoque)
    {
        if (gp_gestaoestoque->objectName().isEmpty())
            gp_gestaoestoque->setObjectName("gp_gestaoestoque");
        gp_gestaoestoque->resize(722, 425);
        tabWidget = new QTabWidget(gp_gestaoestoque);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(10, 10, 711, 411));
        tab_novoproduto = new QWidget();
        tab_novoproduto->setObjectName("tab_novoproduto");
        layoutWidget = new QWidget(tab_novoproduto);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(20, 10, 662, 246));
        verticalLayout_8 = new QVBoxLayout(layoutWidget);
        verticalLayout_8->setObjectName("verticalLayout_8");
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName("verticalLayout_7");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(layoutWidget);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        txt_codigo = new QLineEdit(layoutWidget);
        txt_codigo->setObjectName("txt_codigo");

        verticalLayout->addWidget(txt_codigo);


        verticalLayout_7->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");

        verticalLayout_2->addWidget(label_2);

        txt_descricao = new QLineEdit(layoutWidget);
        txt_descricao->setObjectName("txt_descricao");

        verticalLayout_2->addWidget(txt_descricao);


        verticalLayout_7->addLayout(verticalLayout_2);


        verticalLayout_8->addLayout(verticalLayout_7);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName("label_4");

        verticalLayout_4->addWidget(label_4);

        txt_fornecedor = new QLineEdit(layoutWidget);
        txt_fornecedor->setObjectName("txt_fornecedor");

        verticalLayout_4->addWidget(txt_fornecedor);


        horizontalLayout_2->addLayout(verticalLayout_4);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");

        verticalLayout_3->addWidget(label_3);

        txt_qtdestoque = new QLineEdit(layoutWidget);
        txt_qtdestoque->setObjectName("txt_qtdestoque");

        verticalLayout_3->addWidget(txt_qtdestoque);


        horizontalLayout_2->addLayout(verticalLayout_3);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName("label_5");

        verticalLayout_5->addWidget(label_5);

        txt_valorcompra = new QLineEdit(layoutWidget);
        txt_valorcompra->setObjectName("txt_valorcompra");

        verticalLayout_5->addWidget(txt_valorcompra);


        horizontalLayout_2->addLayout(verticalLayout_5);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName("verticalLayout_6");
        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName("label_6");

        verticalLayout_6->addWidget(label_6);

        txt_valorvenda = new QLineEdit(layoutWidget);
        txt_valorvenda->setObjectName("txt_valorvenda");

        verticalLayout_6->addWidget(txt_valorvenda);


        horizontalLayout_2->addLayout(verticalLayout_6);


        verticalLayout_8->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_8->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        btn_novoproduto = new QPushButton(layoutWidget);
        btn_novoproduto->setObjectName("btn_novoproduto");

        horizontalLayout->addWidget(btn_novoproduto);

        btn_gravarnovoproduto = new QPushButton(layoutWidget);
        btn_gravarnovoproduto->setObjectName("btn_gravarnovoproduto");

        horizontalLayout->addWidget(btn_gravarnovoproduto);


        verticalLayout_8->addLayout(horizontalLayout);

        tabWidget->addTab(tab_novoproduto, QString());
        tab_gestaoprodutos = new QWidget();
        tab_gestaoprodutos->setObjectName("tab_gestaoprodutos");
        tw_g_produtos = new QTableWidget(tab_gestaoprodutos);
        tw_g_produtos->setObjectName("tw_g_produtos");
        tw_g_produtos->setGeometry(QRect(320, 101, 371, 271));
        groupBox = new QGroupBox(tab_gestaoprodutos);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(320, 10, 141, 81));
        layoutWidget1 = new QWidget(groupBox);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(10, 20, 122, 48));
        verticalLayout_9 = new QVBoxLayout(layoutWidget1);
        verticalLayout_9->setObjectName("verticalLayout_9");
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        rb_g_codigo = new QRadioButton(layoutWidget1);
        rb_g_codigo->setObjectName("rb_g_codigo");
        rb_g_codigo->setChecked(true);

        verticalLayout_9->addWidget(rb_g_codigo);

        rb_g_produto = new QRadioButton(layoutWidget1);
        rb_g_produto->setObjectName("rb_g_produto");

        verticalLayout_9->addWidget(rb_g_produto);

        layoutWidget2 = new QWidget(tab_gestaoprodutos);
        layoutWidget2->setObjectName("layoutWidget2");
        layoutWidget2->setGeometry(QRect(10, 10, 281, 361));
        verticalLayout_16 = new QVBoxLayout(layoutWidget2);
        verticalLayout_16->setObjectName("verticalLayout_16");
        verticalLayout_16->setContentsMargins(0, 0, 0, 0);
        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName("verticalLayout_10");
        label_7 = new QLabel(layoutWidget2);
        label_7->setObjectName("label_7");

        verticalLayout_10->addWidget(label_7);

        txt_g_codigoproduto = new QLineEdit(layoutWidget2);
        txt_g_codigoproduto->setObjectName("txt_g_codigoproduto");

        verticalLayout_10->addWidget(txt_g_codigoproduto);


        verticalLayout_16->addLayout(verticalLayout_10);

        verticalLayout_15 = new QVBoxLayout();
        verticalLayout_15->setObjectName("verticalLayout_15");
        verticalLayout_14 = new QVBoxLayout();
        verticalLayout_14->setObjectName("verticalLayout_14");
        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setObjectName("verticalLayout_13");
        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setObjectName("verticalLayout_12");
        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setObjectName("verticalLayout_11");
        label_8 = new QLabel(layoutWidget2);
        label_8->setObjectName("label_8");

        verticalLayout_11->addWidget(label_8);

        txt_g_produto = new QLineEdit(layoutWidget2);
        txt_g_produto->setObjectName("txt_g_produto");

        verticalLayout_11->addWidget(txt_g_produto);


        verticalLayout_12->addLayout(verticalLayout_11);

        label_9 = new QLabel(layoutWidget2);
        label_9->setObjectName("label_9");

        verticalLayout_12->addWidget(label_9);

        txt_g_fornecedor = new QLineEdit(layoutWidget2);
        txt_g_fornecedor->setObjectName("txt_g_fornecedor");

        verticalLayout_12->addWidget(txt_g_fornecedor);


        verticalLayout_13->addLayout(verticalLayout_12);

        labelestoque = new QLabel(layoutWidget2);
        labelestoque->setObjectName("labelestoque");

        verticalLayout_13->addWidget(labelestoque);

        txt_g_qtdestoque = new QLineEdit(layoutWidget2);
        txt_g_qtdestoque->setObjectName("txt_g_qtdestoque");

        verticalLayout_13->addWidget(txt_g_qtdestoque);


        verticalLayout_14->addLayout(verticalLayout_13);

        label_11 = new QLabel(layoutWidget2);
        label_11->setObjectName("label_11");

        verticalLayout_14->addWidget(label_11);

        txt_g_valorcompra = new QLineEdit(layoutWidget2);
        txt_g_valorcompra->setObjectName("txt_g_valorcompra");

        verticalLayout_14->addWidget(txt_g_valorcompra);


        verticalLayout_15->addLayout(verticalLayout_14);

        label_12 = new QLabel(layoutWidget2);
        label_12->setObjectName("label_12");

        verticalLayout_15->addWidget(label_12);

        txt_g_valorvenda = new QLineEdit(layoutWidget2);
        txt_g_valorvenda->setObjectName("txt_g_valorvenda");

        verticalLayout_15->addWidget(txt_g_valorvenda);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_15->addItem(verticalSpacer_2);


        verticalLayout_16->addLayout(verticalLayout_15);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        btn_g_gravar = new QPushButton(layoutWidget2);
        btn_g_gravar->setObjectName("btn_g_gravar");

        horizontalLayout_3->addWidget(btn_g_gravar);

        btn_g_excluir = new QPushButton(layoutWidget2);
        btn_g_excluir->setObjectName("btn_g_excluir");

        horizontalLayout_3->addWidget(btn_g_excluir);


        verticalLayout_16->addLayout(horizontalLayout_3);

        layoutWidget3 = new QWidget(tab_gestaoprodutos);
        layoutWidget3->setObjectName("layoutWidget3");
        layoutWidget3->setGeometry(QRect(480, 10, 211, 81));
        verticalLayout_18 = new QVBoxLayout(layoutWidget3);
        verticalLayout_18->setObjectName("verticalLayout_18");
        verticalLayout_18->setContentsMargins(0, 0, 0, 0);
        verticalLayout_17 = new QVBoxLayout();
        verticalLayout_17->setObjectName("verticalLayout_17");
        label_13 = new QLabel(layoutWidget3);
        label_13->setObjectName("label_13");

        verticalLayout_17->addWidget(label_13);

        txt_g_filtrar = new QLineEdit(layoutWidget3);
        txt_g_filtrar->setObjectName("txt_g_filtrar");

        verticalLayout_17->addWidget(txt_g_filtrar);


        verticalLayout_18->addLayout(verticalLayout_17);

        btn_g_filtrar = new QPushButton(layoutWidget3);
        btn_g_filtrar->setObjectName("btn_g_filtrar");

        verticalLayout_18->addWidget(btn_g_filtrar);

        tabWidget->addTab(tab_gestaoprodutos, QString());

        retranslateUi(gp_gestaoestoque);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(gp_gestaoestoque);
    } // setupUi

    void retranslateUi(QDialog *gp_gestaoestoque)
    {
        gp_gestaoestoque->setWindowTitle(QCoreApplication::translate("gp_gestaoestoque", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("gp_gestaoestoque", "C\303\263digo do Produto", nullptr));
        label_2->setText(QCoreApplication::translate("gp_gestaoestoque", "Descri\303\247\303\243o do Produto", nullptr));
        label_4->setText(QCoreApplication::translate("gp_gestaoestoque", "Fornecedor", nullptr));
        label_3->setText(QCoreApplication::translate("gp_gestaoestoque", "Qtde. Estoque", nullptr));
        label_5->setText(QCoreApplication::translate("gp_gestaoestoque", "Valor de Compra", nullptr));
        label_6->setText(QCoreApplication::translate("gp_gestaoestoque", "Valor de Venda", nullptr));
        btn_novoproduto->setText(QCoreApplication::translate("gp_gestaoestoque", "Novo", nullptr));
        btn_gravarnovoproduto->setText(QCoreApplication::translate("gp_gestaoestoque", "Gravar", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_novoproduto), QCoreApplication::translate("gp_gestaoestoque", "Novo Produto", nullptr));
        groupBox->setTitle(QCoreApplication::translate("gp_gestaoestoque", "Filtrar por:", nullptr));
        rb_g_codigo->setText(QCoreApplication::translate("gp_gestaoestoque", "C\303\263d. Produto", nullptr));
        rb_g_produto->setText(QCoreApplication::translate("gp_gestaoestoque", "Descri\303\247\303\243o Produto", nullptr));
        label_7->setText(QCoreApplication::translate("gp_gestaoestoque", "C\303\263digo do Produto", nullptr));
        label_8->setText(QCoreApplication::translate("gp_gestaoestoque", "Produto", nullptr));
        label_9->setText(QCoreApplication::translate("gp_gestaoestoque", "Fornecedor", nullptr));
        labelestoque->setText(QCoreApplication::translate("gp_gestaoestoque", "Quantidade", nullptr));
        label_11->setText(QCoreApplication::translate("gp_gestaoestoque", "Valor Compra", nullptr));
        label_12->setText(QCoreApplication::translate("gp_gestaoestoque", "Valor Venda", nullptr));
        btn_g_gravar->setText(QCoreApplication::translate("gp_gestaoestoque", "Gravar", nullptr));
        btn_g_excluir->setText(QCoreApplication::translate("gp_gestaoestoque", "Excluir", nullptr));
        label_13->setText(QCoreApplication::translate("gp_gestaoestoque", "Filtrar", nullptr));
        btn_g_filtrar->setText(QCoreApplication::translate("gp_gestaoestoque", "Pesquisar", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_gestaoprodutos), QCoreApplication::translate("gp_gestaoestoque", "Gest\303\243o Produtos", nullptr));
    } // retranslateUi

};

namespace Ui {
    class gp_gestaoestoque: public Ui_gp_gestaoestoque {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GP_GESTAOESTOQUE_H
