#include "gp_logar.h"
#include "ui_gp_logar.h"
#include <QMessageBox>
#include "gp_principal.h"
#include "variaveis_globais.h"

gp_logar::gp_logar(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::gp_logar)
{
    ui->setupUi(this);
    logado=false;
}

gp_logar::~gp_logar()
{
    delete ui;
}

void gp_logar::on_btn_logar_clicked()
{
    if(!con.abrir()){
        QMessageBox::warning(this, "Erro", "Erro ao abrir banco de dados");
    }else{
        QString username, password;
        username=ui->txt_username->text();
        password=ui->txt_password->text();
        QSqlQuery query;
        query.prepare("select * from id_colaboradores where username_colab='"+username+"'and senha_colab='"+password+"'");
        if(query.exec()){
            query.first();
            if(query.value(1).toString()!=""){
                variaveis_globais::logado=true;
                variaveis_globais::nome_colab=query.value(1).toString();;
                variaveis_globais::acesso_colab=query.value(5).toString();
                variaveis_globais::id_colab=query.value(0).toInt();
                con.fechar();
                close();
            }

            else{QMessageBox::warning (this, "Erro", "O colaborador não foi encontrado");}

        }else{QMessageBox::warning (this, "Erro", "Falha ao tentar logar");}
        }
    }

void gp_logar::on_btn_sair_clicked()
{
    logado=false;
    close();

}
