/********************************************************************************
** Form generated from reading UI file 'gp_editarprodutovenda.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GP_EDITARPRODUTOVENDA_H
#define UI_GP_EDITARPRODUTOVENDA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_gp_editarprodutovenda
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *txt_editaproduto;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QLineEdit *txt_editaunitario;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_3;
    QLineEdit *txt_editaqtde;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btn_editaconfirma;
    QPushButton *btn_editacancela;

    void setupUi(QDialog *gp_editarprodutovenda)
    {
        if (gp_editarprodutovenda->objectName().isEmpty())
            gp_editarprodutovenda->setObjectName("gp_editarprodutovenda");
        gp_editarprodutovenda->resize(346, 249);
        widget = new QWidget(gp_editarprodutovenda);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(10, 20, 321, 211));
        verticalLayout_4 = new QVBoxLayout(widget);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(widget);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        txt_editaproduto = new QLineEdit(widget);
        txt_editaproduto->setObjectName("txt_editaproduto");

        verticalLayout->addWidget(txt_editaproduto);


        verticalLayout_4->addLayout(verticalLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");

        verticalLayout_2->addWidget(label_2);

        txt_editaunitario = new QLineEdit(widget);
        txt_editaunitario->setObjectName("txt_editaunitario");

        verticalLayout_2->addWidget(txt_editaunitario);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");

        verticalLayout_3->addWidget(label_3);

        txt_editaqtde = new QLineEdit(widget);
        txt_editaqtde->setObjectName("txt_editaqtde");

        verticalLayout_3->addWidget(txt_editaqtde);


        horizontalLayout->addLayout(verticalLayout_3);


        verticalLayout_4->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        btn_editaconfirma = new QPushButton(widget);
        btn_editaconfirma->setObjectName("btn_editaconfirma");

        horizontalLayout_2->addWidget(btn_editaconfirma);

        btn_editacancela = new QPushButton(widget);
        btn_editacancela->setObjectName("btn_editacancela");

        horizontalLayout_2->addWidget(btn_editacancela);


        verticalLayout_4->addLayout(horizontalLayout_2);


        retranslateUi(gp_editarprodutovenda);

        QMetaObject::connectSlotsByName(gp_editarprodutovenda);
    } // setupUi

    void retranslateUi(QDialog *gp_editarprodutovenda)
    {
        gp_editarprodutovenda->setWindowTitle(QCoreApplication::translate("gp_editarprodutovenda", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("gp_editarprodutovenda", "Produto", nullptr));
        label_2->setText(QCoreApplication::translate("gp_editarprodutovenda", "Pre\303\247o Unit.", nullptr));
        label_3->setText(QCoreApplication::translate("gp_editarprodutovenda", "Quantidade", nullptr));
        btn_editaconfirma->setText(QCoreApplication::translate("gp_editarprodutovenda", "Confirmar", nullptr));
        btn_editacancela->setText(QCoreApplication::translate("gp_editarprodutovenda", "Cancelar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class gp_editarprodutovenda: public Ui_gp_editarprodutovenda {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GP_EDITARPRODUTOVENDA_H
