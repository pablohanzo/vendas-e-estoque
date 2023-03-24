/********************************************************************************
** Form generated from reading UI file 'gp_gestaocolab.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GP_GESTAOCOLAB_H
#define UI_GP_GESTAOCOLAB_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
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

class Ui_gp_gestaocolab
{
public:
    QTabWidget *tabWidget;
    QWidget *tab_novocolaborador;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *btn_gravarNovoColab;
    QPushButton *btn_cancelarNovoColab;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *txt_nomeNovoColab;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_4;
    QLineEdit *txt_telefoneNovoColab;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_2;
    QLineEdit *txt_usernameNovoColab;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_3;
    QLineEdit *txt_senhaNovoColab;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_5;
    QComboBox *cb_acessoNovoColab;
    QWidget *tab_gestaocolab;
    QTableWidget *tw_listacolab;
    QWidget *layoutWidget3;
    QVBoxLayout *verticalLayout_12;
    QVBoxLayout *verticalLayout_11;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_6;
    QLineEdit *txt_nomeGestaoColab;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_7;
    QLineEdit *txt_telefoneGestaoColab;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_8;
    QLineEdit *txt_usernameGestaoColab;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_9;
    QLineEdit *txt_senhaGestaoColab;
    QVBoxLayout *verticalLayout_10;
    QLabel *label_10;
    QComboBox *cb_acessoGestaoColab;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *btn_gravarGestaoColab;
    QPushButton *btn_excluirGestaoColab;
    QPushButton *btn_vervendasGestaoColab;
    QWidget *layoutWidget4;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_13;
    QLabel *label_12;
    QRadioButton *rb_idcolabGestaoColab;
    QRadioButton *rb_nomeGestaoColab;
    QVBoxLayout *verticalLayout_15;
    QVBoxLayout *verticalLayout_14;
    QLabel *label_11;
    QLineEdit *txt_filtroGestaoColab;
    QPushButton *btn_filtrarGestaoColab;

    void setupUi(QDialog *gp_gestaocolab)
    {
        if (gp_gestaocolab->objectName().isEmpty())
            gp_gestaocolab->setObjectName("gp_gestaocolab");
        gp_gestaocolab->resize(800, 383);
        tabWidget = new QTabWidget(gp_gestaocolab);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(10, 10, 781, 361));
        tab_novocolaborador = new QWidget();
        tab_novocolaborador->setObjectName("tab_novocolaborador");
        layoutWidget = new QWidget(tab_novocolaborador);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 190, 301, 61));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        btn_gravarNovoColab = new QPushButton(layoutWidget);
        btn_gravarNovoColab->setObjectName("btn_gravarNovoColab");

        horizontalLayout_3->addWidget(btn_gravarNovoColab);

        btn_cancelarNovoColab = new QPushButton(layoutWidget);
        btn_cancelarNovoColab->setObjectName("btn_cancelarNovoColab");

        horizontalLayout_3->addWidget(btn_cancelarNovoColab);

        layoutWidget1 = new QWidget(tab_novocolaborador);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(10, 30, 751, 51));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(layoutWidget1);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        txt_nomeNovoColab = new QLineEdit(layoutWidget1);
        txt_nomeNovoColab->setObjectName("txt_nomeNovoColab");

        verticalLayout->addWidget(txt_nomeNovoColab);


        horizontalLayout->addLayout(verticalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        horizontalLayout->addItem(verticalSpacer);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_4 = new QLabel(layoutWidget1);
        label_4->setObjectName("label_4");

        verticalLayout_2->addWidget(label_4);

        txt_telefoneNovoColab = new QLineEdit(layoutWidget1);
        txt_telefoneNovoColab->setObjectName("txt_telefoneNovoColab");

        verticalLayout_2->addWidget(txt_telefoneNovoColab);


        horizontalLayout->addLayout(verticalLayout_2);

        layoutWidget2 = new QWidget(tab_novocolaborador);
        layoutWidget2->setObjectName("layoutWidget2");
        layoutWidget2->setGeometry(QRect(10, 90, 691, 61));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        label_2 = new QLabel(layoutWidget2);
        label_2->setObjectName("label_2");

        verticalLayout_3->addWidget(label_2);

        txt_usernameNovoColab = new QLineEdit(layoutWidget2);
        txt_usernameNovoColab->setObjectName("txt_usernameNovoColab");

        verticalLayout_3->addWidget(txt_usernameNovoColab);


        horizontalLayout_2->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        label_3 = new QLabel(layoutWidget2);
        label_3->setObjectName("label_3");

        verticalLayout_4->addWidget(label_3);

        txt_senhaNovoColab = new QLineEdit(layoutWidget2);
        txt_senhaNovoColab->setObjectName("txt_senhaNovoColab");
        txt_senhaNovoColab->setEchoMode(QLineEdit::Password);

        verticalLayout_4->addWidget(txt_senhaNovoColab);


        horizontalLayout_2->addLayout(verticalLayout_4);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        label_5 = new QLabel(layoutWidget2);
        label_5->setObjectName("label_5");

        verticalLayout_5->addWidget(label_5);

        cb_acessoNovoColab = new QComboBox(layoutWidget2);
        cb_acessoNovoColab->setObjectName("cb_acessoNovoColab");

        verticalLayout_5->addWidget(cb_acessoNovoColab);


        horizontalLayout_2->addLayout(verticalLayout_5);

        tabWidget->addTab(tab_novocolaborador, QString());
        tab_gestaocolab = new QWidget();
        tab_gestaocolab->setObjectName("tab_gestaocolab");
        tw_listacolab = new QTableWidget(tab_gestaocolab);
        tw_listacolab->setObjectName("tw_listacolab");
        tw_listacolab->setGeometry(QRect(395, 101, 371, 221));
        layoutWidget3 = new QWidget(tab_gestaocolab);
        layoutWidget3->setObjectName("layoutWidget3");
        layoutWidget3->setGeometry(QRect(10, 10, 351, 311));
        verticalLayout_12 = new QVBoxLayout(layoutWidget3);
        verticalLayout_12->setObjectName("verticalLayout_12");
        verticalLayout_12->setContentsMargins(0, 0, 0, 0);
        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setObjectName("verticalLayout_11");
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName("verticalLayout_6");
        label_6 = new QLabel(layoutWidget3);
        label_6->setObjectName("label_6");

        verticalLayout_6->addWidget(label_6);

        txt_nomeGestaoColab = new QLineEdit(layoutWidget3);
        txt_nomeGestaoColab->setObjectName("txt_nomeGestaoColab");

        verticalLayout_6->addWidget(txt_nomeGestaoColab);


        verticalLayout_11->addLayout(verticalLayout_6);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName("verticalLayout_7");
        label_7 = new QLabel(layoutWidget3);
        label_7->setObjectName("label_7");

        verticalLayout_7->addWidget(label_7);

        txt_telefoneGestaoColab = new QLineEdit(layoutWidget3);
        txt_telefoneGestaoColab->setObjectName("txt_telefoneGestaoColab");

        verticalLayout_7->addWidget(txt_telefoneGestaoColab);


        verticalLayout_11->addLayout(verticalLayout_7);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName("verticalLayout_8");
        label_8 = new QLabel(layoutWidget3);
        label_8->setObjectName("label_8");

        verticalLayout_8->addWidget(label_8);

        txt_usernameGestaoColab = new QLineEdit(layoutWidget3);
        txt_usernameGestaoColab->setObjectName("txt_usernameGestaoColab");

        verticalLayout_8->addWidget(txt_usernameGestaoColab);


        verticalLayout_11->addLayout(verticalLayout_8);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName("verticalLayout_9");
        label_9 = new QLabel(layoutWidget3);
        label_9->setObjectName("label_9");

        verticalLayout_9->addWidget(label_9);

        txt_senhaGestaoColab = new QLineEdit(layoutWidget3);
        txt_senhaGestaoColab->setObjectName("txt_senhaGestaoColab");
        txt_senhaGestaoColab->setEchoMode(QLineEdit::Password);

        verticalLayout_9->addWidget(txt_senhaGestaoColab);


        verticalLayout_11->addLayout(verticalLayout_9);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName("verticalLayout_10");
        label_10 = new QLabel(layoutWidget3);
        label_10->setObjectName("label_10");

        verticalLayout_10->addWidget(label_10);

        cb_acessoGestaoColab = new QComboBox(layoutWidget3);
        cb_acessoGestaoColab->setObjectName("cb_acessoGestaoColab");

        verticalLayout_10->addWidget(cb_acessoGestaoColab);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_10->addItem(verticalSpacer_2);


        verticalLayout_11->addLayout(verticalLayout_10);


        verticalLayout_12->addLayout(verticalLayout_11);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        btn_gravarGestaoColab = new QPushButton(layoutWidget3);
        btn_gravarGestaoColab->setObjectName("btn_gravarGestaoColab");

        horizontalLayout_4->addWidget(btn_gravarGestaoColab);

        btn_excluirGestaoColab = new QPushButton(layoutWidget3);
        btn_excluirGestaoColab->setObjectName("btn_excluirGestaoColab");

        horizontalLayout_4->addWidget(btn_excluirGestaoColab);

        btn_vervendasGestaoColab = new QPushButton(layoutWidget3);
        btn_vervendasGestaoColab->setObjectName("btn_vervendasGestaoColab");

        horizontalLayout_4->addWidget(btn_vervendasGestaoColab);


        verticalLayout_12->addLayout(horizontalLayout_4);

        layoutWidget4 = new QWidget(tab_gestaocolab);
        layoutWidget4->setObjectName("layoutWidget4");
        layoutWidget4->setGeometry(QRect(460, 10, 218, 80));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget4);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setObjectName("verticalLayout_13");
        label_12 = new QLabel(layoutWidget4);
        label_12->setObjectName("label_12");

        verticalLayout_13->addWidget(label_12);

        rb_idcolabGestaoColab = new QRadioButton(layoutWidget4);
        rb_idcolabGestaoColab->setObjectName("rb_idcolabGestaoColab");
        rb_idcolabGestaoColab->setChecked(true);

        verticalLayout_13->addWidget(rb_idcolabGestaoColab);

        rb_nomeGestaoColab = new QRadioButton(layoutWidget4);
        rb_nomeGestaoColab->setObjectName("rb_nomeGestaoColab");
        rb_nomeGestaoColab->setChecked(false);

        verticalLayout_13->addWidget(rb_nomeGestaoColab);


        horizontalLayout_5->addLayout(verticalLayout_13);

        verticalLayout_15 = new QVBoxLayout();
        verticalLayout_15->setObjectName("verticalLayout_15");
        verticalLayout_14 = new QVBoxLayout();
        verticalLayout_14->setObjectName("verticalLayout_14");
        label_11 = new QLabel(layoutWidget4);
        label_11->setObjectName("label_11");

        verticalLayout_14->addWidget(label_11);

        txt_filtroGestaoColab = new QLineEdit(layoutWidget4);
        txt_filtroGestaoColab->setObjectName("txt_filtroGestaoColab");

        verticalLayout_14->addWidget(txt_filtroGestaoColab);


        verticalLayout_15->addLayout(verticalLayout_14);

        btn_filtrarGestaoColab = new QPushButton(layoutWidget4);
        btn_filtrarGestaoColab->setObjectName("btn_filtrarGestaoColab");

        verticalLayout_15->addWidget(btn_filtrarGestaoColab);


        horizontalLayout_5->addLayout(verticalLayout_15);

        tabWidget->addTab(tab_gestaocolab, QString());

        retranslateUi(gp_gestaocolab);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(gp_gestaocolab);
    } // setupUi

    void retranslateUi(QDialog *gp_gestaocolab)
    {
        gp_gestaocolab->setWindowTitle(QCoreApplication::translate("gp_gestaocolab", "Dialog", nullptr));
        btn_gravarNovoColab->setText(QCoreApplication::translate("gp_gestaocolab", "Gravar", nullptr));
        btn_cancelarNovoColab->setText(QCoreApplication::translate("gp_gestaocolab", "Cancelar", nullptr));
        label->setText(QCoreApplication::translate("gp_gestaocolab", "Nome", nullptr));
        label_4->setText(QCoreApplication::translate("gp_gestaocolab", "Telefone", nullptr));
        label_2->setText(QCoreApplication::translate("gp_gestaocolab", " Username:", nullptr));
        label_3->setText(QCoreApplication::translate("gp_gestaocolab", " Senha:", nullptr));
        label_5->setText(QCoreApplication::translate("gp_gestaocolab", "Tipo de Acesso", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_novocolaborador), QCoreApplication::translate("gp_gestaocolab", "Novo Colaborador", nullptr));
        label_6->setText(QCoreApplication::translate("gp_gestaocolab", "Nome", nullptr));
        label_7->setText(QCoreApplication::translate("gp_gestaocolab", "Telefone", nullptr));
        label_8->setText(QCoreApplication::translate("gp_gestaocolab", "Username", nullptr));
        label_9->setText(QCoreApplication::translate("gp_gestaocolab", "Senha", nullptr));
        label_10->setText(QCoreApplication::translate("gp_gestaocolab", "Acesso", nullptr));
        btn_gravarGestaoColab->setText(QCoreApplication::translate("gp_gestaocolab", "Gravar", nullptr));
        btn_excluirGestaoColab->setText(QCoreApplication::translate("gp_gestaocolab", "Excluir", nullptr));
        btn_vervendasGestaoColab->setText(QCoreApplication::translate("gp_gestaocolab", "Ver Vendas", nullptr));
        label_12->setText(QCoreApplication::translate("gp_gestaocolab", "Filtrar por:", nullptr));
        rb_idcolabGestaoColab->setText(QCoreApplication::translate("gp_gestaocolab", "ID Colab.", nullptr));
        rb_nomeGestaoColab->setText(QCoreApplication::translate("gp_gestaocolab", "Nome", nullptr));
        label_11->setText(QCoreApplication::translate("gp_gestaocolab", "Filtro", nullptr));
        btn_filtrarGestaoColab->setText(QCoreApplication::translate("gp_gestaocolab", "Pesquisar", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_gestaocolab), QCoreApplication::translate("gp_gestaocolab", "Gestao Colaboradores", nullptr));
    } // retranslateUi

};

namespace Ui {
    class gp_gestaocolab: public Ui_gp_gestaocolab {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GP_GESTAOCOLAB_H
