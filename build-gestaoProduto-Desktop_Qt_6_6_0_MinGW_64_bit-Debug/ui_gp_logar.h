/********************************************************************************
** Form generated from reading UI file 'gp_logar.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GP_LOGAR_H
#define UI_GP_LOGAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_gp_logar
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *txt_username;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *txt_password;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *btn_logar;
    QPushButton *btn_sair;

    void setupUi(QDialog *gp_logar)
    {
        if (gp_logar->objectName().isEmpty())
            gp_logar->setObjectName("gp_logar");
        gp_logar->resize(378, 157);
        widget = new QWidget(gp_logar);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(40, 30, 291, 91));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(widget);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        txt_username = new QLineEdit(widget);
        txt_username->setObjectName("txt_username");

        horizontalLayout->addWidget(txt_username);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        txt_password = new QLineEdit(widget);
        txt_password->setObjectName("txt_password");
        txt_password->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(txt_password);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        btn_logar = new QPushButton(widget);
        btn_logar->setObjectName("btn_logar");

        horizontalLayout_3->addWidget(btn_logar);

        btn_sair = new QPushButton(widget);
        btn_sair->setObjectName("btn_sair");

        horizontalLayout_3->addWidget(btn_sair);


        verticalLayout_2->addLayout(horizontalLayout_3);


        retranslateUi(gp_logar);

        QMetaObject::connectSlotsByName(gp_logar);
    } // setupUi

    void retranslateUi(QDialog *gp_logar)
    {
        gp_logar->setWindowTitle(QCoreApplication::translate("gp_logar", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("gp_logar", "Username", nullptr));
        label_2->setText(QCoreApplication::translate("gp_logar", "Password", nullptr));
        btn_logar->setText(QCoreApplication::translate("gp_logar", "Logar", nullptr));
        btn_sair->setText(QCoreApplication::translate("gp_logar", "Sair", nullptr));
    } // retranslateUi

};

namespace Ui {
    class gp_logar: public Ui_gp_logar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GP_LOGAR_H
