#include "gp_gestaoestoque.h"
#include "ui_gp_gestaoestoque.h"
#include <QtSql>
#include "funcoes_globais.h"

gp_gestaoestoque::gp_gestaoestoque(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::gp_gestaoestoque)
{
    ui->setupUi(this);
    if(!con.abrir()){
        QMessageBox::warning(this,"Erro", "Erro ao abrir banco de dados");
    }else{
        QSqlQuery query;
        query.prepare("select * from tb_produtos");
        if(query.exec()){

        }else{
            QMessageBox::warning(this,"Erro", "Erro ao listar produtos");
        }
    }
        ui->tw_g_produtos->setColumnCount(2);
        ui->tabWidget->setCurrentIndex(0);
}


gp_gestaoestoque::~gp_gestaoestoque()
{
    delete ui;
    con.fechar();
}

void gp_gestaoestoque::on_btn_novoproduto_clicked()
{
    ui->txt_codigo->clear();
    ui->txt_descricao->clear();
    ui->txt_fornecedor->clear();
    ui->txt_qtdestoque->clear();
    ui->txt_valorcompra->clear();
    ui->txt_valorvenda->clear();
    ui->txt_codigo->setFocus();
}



void gp_gestaoestoque::on_btn_gravarnovoproduto_clicked()
{
 QString aux;
 QString codigo=ui->txt_codigo->text();
 QString produto=ui->txt_descricao->text();
 QString fornecedor=ui->txt_fornecedor->text();
 QString qtdestoque=ui->txt_qtdestoque->text();
 aux=ui->txt_valorcompra->text();
 std::replace(aux.begin(), aux.end(), ',', '.');
 QString valorcompra=aux;              // ui->txt_valorcompra->text()

        aux=ui->txt_valorvenda->text();
        std::replace(aux.begin(), aux.end(), ',', '.');
        QString valorvenda=aux;               // txt_valorvenda->text()

        QSqlQuery query;
        query.prepare("insert into tb_produtos (id_produto,produto,id_fornecedor,qtde_estoque,valor_compra,valor_venda) values("+QString::number(codigo.toInt())+",'"+produto+"',"+QString::number(fornecedor.toInt())+","+QString::number(qtdestoque.toInt())+","+QString::number(valorcompra.toFloat())+","+QString::number(valorvenda.toFloat())+")");

      if(!query.exec()){
        QMessageBox::warning(this,"Erro", "Erro ao inserir produto");
         }else{
          QMessageBox::information(this,"Sucesso", "Produto salvo com sucesso");
          ui->txt_codigo->clear();
          ui->txt_descricao->clear();
          ui->txt_fornecedor->clear();
          ui->txt_qtdestoque->clear();
          ui->txt_valorcompra->clear();
          ui->txt_valorvenda->clear();
          ui->txt_codigo->setFocus();
      }
    }



void gp_gestaoestoque::on_tabWidget_currentChanged(int index)
{
    if(index==1){
        funcoes_globais::removerlinhas(ui->tw_g_produtos);
        int contlinhas=0;
        // Remover produtos do TW
       QSqlQuery query;
       query.prepare("select id_produto,produto from tb_produtos order by produto");
       if(query.exec()){
           while(query.next()){
               ui->tw_g_produtos->insertRow(contlinhas);
               ui->tw_g_produtos->setItem(contlinhas, 0, new QTableWidgetItem(query.value(0).toString()));
               ui->tw_g_produtos->setItem(contlinhas, 1, new QTableWidgetItem(query.value(1).toString()));
               ui->tw_g_produtos->setRowHeight(contlinhas,20);
               contlinhas++;
           }
           ui->tw_g_produtos->setColumnWidth(0,150);
           ui->tw_g_produtos->setColumnWidth(1,210);
           QStringList cabeçalhos={"Código", "Produto"};
           ui->tw_g_produtos->setHorizontalHeaderLabels(cabeçalhos);
           ui->tw_g_produtos->setStyleSheet("QTableView {selection-background-color:blue}");
           ui->tw_g_produtos->setEditTriggers(QAbstractItemView::NoEditTriggers);
           ui->tw_g_produtos->setSelectionBehavior(QAbstractItemView::SelectRows);
           ui->tw_g_produtos->verticalHeader()->setVisible(false);
       }else{
           QMessageBox::warning(this,"Erro", "Produtos não encontrados");

       }

    }
}

;


void gp_gestaoestoque::on_tw_g_produtos_itemSelectionChanged()
{
    int id=ui->tw_g_produtos->item(ui->tw_g_produtos->currentRow(),0)->text().toInt();
    QSqlQuery query;
    query.prepare("select * from tb_produtos where id_produto="+QString::number(id));
    if(query.exec()){
        query.first();
        ui->txt_g_codigoproduto->setText(query.value(0).toString());
        ui->txt_g_produto->setText(query.value(1).toString());
        ui->txt_g_fornecedor->setText(query.value(2).toString());
        ui->txt_g_qtdestoque->setText(query.value(3).toString());
        ui->txt_g_valorcompra->setText(query.value(4).toString());
        ui->txt_g_valorvenda->setText(query.value(5).toString());
        }
}


void gp_gestaoestoque::on_btn_g_gravar_clicked()
{
    if(ui->txt_g_codigoproduto->text()==""){
        QMessageBox::warning(this,"Erro", "Primeiro selecione um produto");
    }else{
        int id=ui->tw_g_produtos->item(ui->tw_g_produtos->currentRow(),0)->text().toInt();
        QString aux;
        QString prod=ui->txt_g_produto->text();
        QString forn=ui->txt_g_fornecedor->text();
        QString qtde=ui->txt_g_qtdestoque->text();

        aux=ui->txt_g_valorcompra->text();
        std::replace(aux.begin(), aux.end(), ',', '.');
        QString valcompra=aux;

        aux=ui->txt_g_valorvenda->text();
        std::replace(aux.begin(), aux.end(), ',', '.');
        QString valvenda=aux;

        QSqlQuery query;
        query.prepare("update tb_produtos set id_produto="+QString::number(id)+", produto='"+prod+"', id_fornecedor="+QString::number(forn.toInt())+", qtde_estoque="+QString::number(qtde.toInt())+", valor_compra="+QString::number(valcompra.toDouble())+", valor_venda="+QString::number(valvenda.toDouble())+" where id_produto="+QString::number(id)+"");
        if(query.exec()){
            int linha=ui->tw_g_produtos->currentRow();
            ui->tw_g_produtos->item(linha, 0)->setText(ui->txt_g_codigoproduto->text());
            ui->tw_g_produtos->item(linha, 1)->setText(prod);
            QMessageBox::information(this,"Atualizado","Produto atualizado com sucesso");
        }else{
            QMessageBox::warning(this,"Erro", "Erro ao atualizar produto");
        }

    }
}


void gp_gestaoestoque::on_btn_g_excluir_clicked()
{
    if(ui->txt_g_codigoproduto->text()==""){
        QMessageBox::warning(this,"Erro", "Primeiro selecione um produto");
    }else{
       QMessageBox::StandardButton opc=QMessageBox::question(this, "Exclusão", "Você deseja realmente excluir este produto?", QMessageBox::Yes|QMessageBox::No);

         if(opc==QMessageBox::Yes){
        int linha=ui->tw_g_produtos->currentRow();
        int id=ui->tw_g_produtos->item(linha, 0)->text().toInt();

        QSqlQuery query;
          query.prepare("delete from tb_produtos where id_produto="+QString::number(id)+"");
        if(query.exec()){
         ui->tw_g_produtos->removeRow(linha);
         QMessageBox::information(this,"Sucesso", "O produto foi removido com sucesso");
          }else{
         QMessageBox::warning(this,"Erro", "Erro ao excluir produto");
        }
    }
  }
}


void gp_gestaoestoque::on_btn_g_filtrar_clicked()
{
    QString busca;
    funcoes_globais::removerlinhas(ui->tw_g_produtos);
    if(ui->txt_g_filtrar->text()==""){
        if(ui->rb_g_codigo->isChecked()){
            busca="select id_produto,produto from tb_produtos order by id_produto";
        }else{
            busca="select id_produto,produto from tb_produtos order by produto";
        }

    }else{
            if(ui->rb_g_codigo->isChecked()){
                busca="select id_produto,produto from tb_produtos where id_produto="+ui->txt_g_filtrar->text()+" order by id_produto";
            }else{
                busca="select id_produto,produto from tb_produtos where produto like '%"+ui->txt_g_filtrar->text()+"%' order by produto";
}
    }
    int contlinhas=0;
    QSqlQuery query;
    query.prepare(busca);
            if(query.exec()){
                while(query.next()){
                    ui->tw_g_produtos->insertRow(contlinhas);
                    ui->tw_g_produtos->setItem(contlinhas, 0, new QTableWidgetItem(query.value(0).toString()));
                    ui->tw_g_produtos->setItem(contlinhas, 1, new QTableWidgetItem(query.value(1).toString()));
                    ui->tw_g_produtos->setRowHeight(contlinhas,20);
                    contlinhas++;
                }

    }else{
        QMessageBox::warning(this,"Erro", "Não foi possível realizar a busca pelos produtos");
        }
        ui->txt_g_filtrar->clear();
        ui->txt_g_filtrar->setFocus();
    }


