#include "gp_principal.h"
#include "ui_gp_principal.h"
#include <QMessageBox>
#include <gp_logar.h>
#include <gp_novavenda.h>
#include <gp_gestaocolab.h>
#include <gp_gestaoestoque.h>
#include <gp_gestaovendas.h>
#include <QSql>
#include "variaveis_globais.h"

int variaveis_globais::id_colab;
QString variaveis_globais::nome_colab;
QString variaveis_globais::acesso_colab;
bool variaveis_globais::logado;


gp_principal::gp_principal(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::gp_principal)
{
    ui->setupUi(this);

    //Botões de bloquear e desbloquear

    variaveis_globais::logado=false;
    cadFechado.addFile(":/imagens/imgs/fechadura.png");
    cadAberto.addFile(":/imagens/imgs/cadeado-desbloqueado.png");

    ui->btn_bloquear->setIcon(cadFechado);
    ui->statusbar->addWidget(ui->btn_bloquear);
    ui->statusbar->addWidget(ui->lb_nomelogado);



    //Aviso de falha na conexão com o banco de dados

     QSqlDatabase bancoDeDados;
     bancoDeDados=QSqlDatabase::addDatabase("QSQLITE");
    if (!bancoDeDados.open()){
      QMessageBox::warning(this,"ERRO", "Erro de conexão com o banco de dados");
    }
}

gp_principal::~gp_principal()
{
    delete ui;
}


    //Comando para chamar tela de login

void gp_principal::on_btn_bloquear_clicked()
{
    if(!variaveis_globais::logado){
        gp_logar g_logar;
        g_logar.exec();
        if(variaveis_globais::logado){
            ui->btn_bloquear->setIcon(cadAberto);
            ui->lb_nomelogado->setText(variaveis_globais::nome_colab);
        }

    }else{
        variaveis_globais::logado=false;
        ui->btn_bloquear->setIcon(cadFechado);
        ui->lb_nomelogado->setText("Sem Colaborador");
    }
}


void gp_principal::on_btn_novavenda_clicked()
{
    if(variaveis_globais::logado){
    gp_novavenda g_novavenda;
    g_novavenda.exec();
    }else{
        QMessageBox::warning(this, "Erro", "Não existe colaborador logado");
    }
}


void gp_principal::on_actionEstoque_triggered()
{
    if(variaveis_globais::logado){
        if(variaveis_globais::acesso_colab=="A"){
    gp_gestaoestoque g_gestaoestoque;
    g_gestaoestoque.exec();

    }else{
      QMessageBox::warning(this, "ACESSO", "Acesso não permitido");
        }
    }else{
        QMessageBox::warning(this, "Erro", "Não existe colaborador logado");
      }
}


void gp_principal::on_actionColaboradores_triggered()
{
    if(variaveis_globais::logado){
        if(variaveis_globais::acesso_colab=="A"){
    gp_gestaocolab g_gestaocolab;
    g_gestaocolab.exec();

    }else{
      QMessageBox::warning(this, "ACESSO", "Acesso não permitido");
        }
    }else{
        QMessageBox::warning(this, "Erro", "Não existe colaborador logado");
      }
}


void gp_principal::on_actionVendas_triggered()
{
    if(variaveis_globais::logado){
        if(variaveis_globais::acesso_colab=="A"){
    gp_gestaovendas g_gestaovendas;
    g_gestaovendas.exec();

    }else{
      QMessageBox::warning(this, "ACESSO", "Acesso não permitido");
        }
    }else{
        QMessageBox::warning(this, "Erro", "Não existe colaborador logado");
      }
}


void gp_principal::on_actionSair_triggered()
{
    QMessageBox::StandardButton opc=QMessageBox::question(this, "Sair", "Você deseja realmente sair?", QMessageBox::Yes|QMessageBox::No);

    if(opc==QMessageBox::Yes){
    close();

}

}



void gp_principal::on_actionSobre_triggered()
{
    QMessageBox::information(this, "Sobre", "GestaoEstoque IJAL\nVersão: 1.0\n\nDesenvolvido por: Pablo Hanzo\n (12)98829-3609 | pablohanzo@gmail.com");
}

