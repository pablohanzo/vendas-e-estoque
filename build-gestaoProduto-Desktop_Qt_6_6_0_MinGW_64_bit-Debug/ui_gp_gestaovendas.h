/********************************************************************************
** Form generated from reading UI file 'gp_gestaovendas.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GP_GESTAOVENDAS_H
#define UI_GP_GESTAOVENDAS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_gp_gestaovendas
{
public:
    QDateEdit *de_dataini;
    QDateEdit *de_datafim;
    QPushButton *btn_imprimirgvenda;
    QTableWidget *tw_listavendas;
    QTableWidget *tw_listaprodvendas;
    QLabel *label;
    QLabel *label_2;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *btn_filtrargvenda;
    QPushButton *pushButton;

    void setupUi(QDialog *gp_gestaovendas)
    {
        if (gp_gestaovendas->objectName().isEmpty())
            gp_gestaovendas->setObjectName("gp_gestaovendas");
        gp_gestaovendas->resize(623, 408);
        de_dataini = new QDateEdit(gp_gestaovendas);
        de_dataini->setObjectName("de_dataini");
        de_dataini->setGeometry(QRect(20, 30, 110, 22));
        de_datafim = new QDateEdit(gp_gestaovendas);
        de_datafim->setObjectName("de_datafim");
        de_datafim->setGeometry(QRect(150, 30, 110, 22));
        btn_imprimirgvenda = new QPushButton(gp_gestaovendas);
        btn_imprimirgvenda->setObjectName("btn_imprimirgvenda");
        btn_imprimirgvenda->setGeometry(QRect(30, 360, 111, 31));
        tw_listavendas = new QTableWidget(gp_gestaovendas);
        tw_listavendas->setObjectName("tw_listavendas");
        tw_listavendas->setGeometry(QRect(20, 60, 581, 131));
        tw_listaprodvendas = new QTableWidget(gp_gestaovendas);
        tw_listaprodvendas->setObjectName("tw_listaprodvendas");
        tw_listaprodvendas->setGeometry(QRect(20, 200, 581, 151));
        label = new QLabel(gp_gestaovendas);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 10, 91, 16));
        label_2 = new QLabel(gp_gestaovendas);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(150, 10, 91, 16));
        widget = new QWidget(gp_gestaovendas);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(280, 30, 231, 26));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        btn_filtrargvenda = new QPushButton(widget);
        btn_filtrargvenda->setObjectName("btn_filtrargvenda");

        horizontalLayout->addWidget(btn_filtrargvenda);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName("pushButton");

        horizontalLayout->addWidget(pushButton);


        retranslateUi(gp_gestaovendas);

        QMetaObject::connectSlotsByName(gp_gestaovendas);
    } // setupUi

    void retranslateUi(QDialog *gp_gestaovendas)
    {
        gp_gestaovendas->setWindowTitle(QCoreApplication::translate("gp_gestaovendas", "Dialog", nullptr));
        btn_imprimirgvenda->setText(QCoreApplication::translate("gp_gestaovendas", "Imprimir", nullptr));
        label->setText(QCoreApplication::translate("gp_gestaovendas", "Data Inicial", nullptr));
        label_2->setText(QCoreApplication::translate("gp_gestaovendas", "Data Final", nullptr));
        btn_filtrargvenda->setText(QCoreApplication::translate("gp_gestaovendas", "Filtrar", nullptr));
        pushButton->setText(QCoreApplication::translate("gp_gestaovendas", "Mostrar todas vendas", nullptr));
    } // retranslateUi

};

namespace Ui {
    class gp_gestaovendas: public Ui_gp_gestaovendas {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GP_GESTAOVENDAS_H
