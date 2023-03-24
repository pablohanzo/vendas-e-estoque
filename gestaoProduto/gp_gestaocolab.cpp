#include "gp_gestaocolab.h"
#include "ui_gp_gestaocolab.h"
#include <QMessageBox>
#include    <QtSql>
#include "gp_gestaoestoque.h"
#include "gp_novavenda.h"
#include "variaveis_globais.h"
#include "funcoes_globais.h"

gp_gestaocolab::gp_gestaocolab(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::gp_gestaocolab)
{
    ui->setupUi(this);
    if(!con.aberto()){
    if(!con.abrir()){
        QMessageBox::warning(this,"Erro", "Erro ao abrir banco de dados");
    }
    }

    ui->cb_acessoNovoColab->addItem("A");
    ui->cb_acessoGestaoColab->addItem("A");
    ui->cb_acessoNovoColab->addItem("B");
     ui->cb_acessoGestaoColab->addItem("B");
    ui->txt_nomeNovoColab->setFocus();


    ui->tabWidget->setCurrentIndex(0);

    ui->tw_listacolab->setColumnCount(2);
        ui->tw_listacolab->setColumnWidth(0,150);
        ui->tw_listacolab->setColumnWidth(1,210);
        QStringList cabeçalhos={"ID", "Colaborador"};
        ui->tw_listacolab->setHorizontalHeaderLabels(cabeçalhos);
        ui->tw_listacolab->setStyleSheet("QTableView {selection-background-color:blue}");
        ui->tw_listacolab->setEditTriggers(QAbstractItemView::NoEditTriggers);
        ui->tw_listacolab->setSelectionBehavior(QAbstractItemView::SelectRows);
        ui->tw_listacolab->verticalHeader()->setVisible(false);

}

gp_gestaocolab::~gp_gestaocolab()
{
    delete ui;
}

void gp_gestaocolab::on_btn_gravarNovoColab_clicked()
{
    QString nome=ui->txt_nomeNovoColab->text();
    QString username=ui->txt_usernameNovoColab->text();
    QString senha=ui->txt_senhaNovoColab->text();
    QString telefone=ui->txt_telefoneNovoColab->text();
    QString acesso=ui->cb_acessoNovoColab->currentText();

           QSqlQuery query;
           query.prepare("insert into id_colaboradores (nome_colab,username_colab,senha_colab,fone_colab,acesso_colab) values('"+nome+"','"+username+"','"+senha+"','"+telefone+"','"+acesso+"')");

         if(!query.exec()){
           QMessageBox::warning(this,"Erro", "Erro ao inserir colaborador");
            }else{
             QMessageBox::information(this,"Sucesso", "Colaborador salvo com sucesso");
             ui->txt_nomeNovoColab->clear();
             ui->txt_usernameNovoColab->clear();
             ui->txt_senhaNovoColab->clear();
             ui->txt_telefoneNovoColab->clear();
             ui->cb_acessoNovoColab->setCurrentIndex(0);
             ui->txt_nomeNovoColab->setFocus();
}
}

void gp_gestaocolab::on_tabWidget_currentChanged(int index)
{
    if(index==1){
        funcoes_globais::removerlinhas(ui->tw_listacolab);
        int contlinhas=0;
        // Remover produtos do TW
       QSqlQuery query;
       query.prepare("select id_colab,nome_colab from id_colaboradores order by id_colab");
       if(query.exec()){
           while(query.next()){
               ui->tw_listacolab->insertRow(contlinhas);
               ui->tw_listacolab->setItem(contlinhas, 0, new QTableWidgetItem(query.value(0).toString()));
               ui->tw_listacolab->setItem(contlinhas, 1, new QTableWidgetItem(query.value(1).toString()));
               ui->tw_listacolab->setRowHeight(contlinhas,20);
               contlinhas++;
           }

       }else{
          QMessageBox::warning(this,"Erro", "Erro ao listar colaboradores");

       }

}
}


void gp_gestaocolab::on_btn_cancelarNovoColab_clicked()
{
 close();
}


void gp_gestaocolab::on_tw_listacolab_itemSelectionChanged()
{
    int id=ui->tw_listacolab->item(ui->tw_listacolab->currentRow(),0)->text().toInt();
    QSqlQuery query;
    query.prepare("select * from id_colaboradores where id_colab="+QString::number(id));
    if(query.exec()){
        query.first();
        ui->txt_nomeGestaoColab->setText(query.value(1).toString());
        ui->txt_usernameGestaoColab->setText(query.value(2).toString());
        ui->txt_senhaGestaoColab->setText(query.value(3).toString());
        ui->txt_telefoneGestaoColab->setText(query.value(4).toString());
        ui->cb_acessoGestaoColab->setCurrentText(query.value(5).toString());

    }
}


void gp_gestaocolab::on_btn_filtrarGestaoColab_clicked()
{
    QString busca;
    funcoes_globais::removerlinhas(ui->tw_listacolab);
    if(ui->txt_filtroGestaoColab->text()==""){
        if(ui->rb_idcolabGestaoColab->isChecked()){
            busca="select id_colab,nome_colab from id_colaboradores order by id_colab";
        }else{
            busca="select id_colab,nome_colab from id_colaboradores order by nome_colab";
        }

    }else{
            if(ui->rb_idcolabGestaoColab->isChecked()){
                busca="select id_colab,nome_colab from id_colaboradores where id_colab="+ui->txt_filtroGestaoColab->text()+" order by id_colab";
            }else{
                busca="select id_colab,nome_colab from id_colaboradores where nome_colab like '%"+ui->txt_filtroGestaoColab->text()+"%' order by nome_colab";
}
    }
    int contlinhas=0;
    QSqlQuery query;
    query.prepare(busca);
            if(query.exec()){
                while(query.next()){
                    ui->tw_listacolab->insertRow(contlinhas);
                    ui->tw_listacolab->setItem(contlinhas, 0, new QTableWidgetItem(query.value(0).toString()));
                    ui->tw_listacolab->setItem(contlinhas, 1, new QTableWidgetItem(query.value(1).toString()));
                    ui->tw_listacolab->setRowHeight(contlinhas,20);
                    contlinhas++;
                }

    }else{
        QMessageBox::warning(this,"Erro", "Não foi possível realizar a busca pelos colaboradores");
        }
        ui->txt_filtroGestaoColab->clear();
        ui->txt_filtroGestaoColab->setFocus();
        ui->rb_idcolabGestaoColab->setChecked(0);
    }



void gp_gestaocolab::on_btn_gravarGestaoColab_clicked()
{
    QString id=ui->tw_listacolab->item(ui->tw_listacolab->currentRow(),0)->text();
    QSqlQuery query;
    QString nome=ui->txt_nomeGestaoColab->text();
    QString username=ui->txt_usernameGestaoColab->text();
    QString senha=ui->txt_senhaGestaoColab->text();
    QString telefone=ui->txt_telefoneGestaoColab->text();
    QString acesso=ui->cb_acessoGestaoColab->currentText();

    query.prepare("update id_colaboradores set id_colab='"+id+"', nome_colab='"+nome+"', username_colab='"+username+"', senha_colab='"+senha+"', fone_colab='"+telefone+"', acesso_colab='"+acesso+"' where id_colab="+id+"");
    if(query.exec()){
        int linha=ui->tw_listacolab->currentRow();
        ui->tw_listacolab->item(linha, 1)->setText(nome);
        QMessageBox::information(this,"Atualizado","Colaborador atualizado com sucesso");
    }else{
        QMessageBox::warning(this,"Erro", "Erro ao atualizar colaborador");
    }

}


void gp_gestaocolab::on_btn_excluirGestaoColab_clicked()
{
    if(ui->tw_listacolab->currentRow()==-1){
        QMessageBox::warning(this, "Erro", "Selecione um colaborador");
        return;
    }else{
           QMessageBox::StandardButton opc=QMessageBox::question(this, "Exclusão", "Você deseja realmente excluir este colaborador?", QMessageBox::Yes|QMessageBox::No);

             if(opc==QMessageBox::Yes){
            int linha=ui->tw_listacolab->currentRow();
            QString id=ui->tw_listacolab->item(linha, 0)->text();

            QSqlQuery query;
              query.prepare("delete from id_colaboradores where id_colab="+id+"");
            if(query.exec()){
             ui->tw_listacolab->removeRow(linha);
             QMessageBox::information(this,"Sucesso", "O colaborador foi removido com sucesso");
              }else{
             QMessageBox::warning(this,"Erro", "Erro ao excluir colaborador");
            }
        }
      }

    }

