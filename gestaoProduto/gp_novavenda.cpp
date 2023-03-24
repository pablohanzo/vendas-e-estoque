#include "gp_novavenda.h"
#include "ui_gp_novavenda.h"
#include  <QMessageBox>
#include  <gp_editarprodutovenda.h>
#include   "gp_principal.h"
#include    "variaveis_globais.h"

QString gp_novavenda::g_idprod;
QString gp_novavenda::g_prod;
QString gp_novavenda::g_qtde;
QString gp_novavenda::g_valuni;
QString gp_novavenda::g_valtotal;
bool gp_novavenda::alterou;

gp_novavenda::gp_novavenda(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::gp_novavenda)
{
    ui->setupUi(this);
    if(!con.aberto()){
    if(!con.abrir()){
        QMessageBox::warning(this,"Erro", "Erro ao abrir banco de dados");
    }
    };

    ui->tw_listaprodutos->setColumnCount(5);
    ui->tw_listaprodutos->setColumnWidth(0, 100);
    ui->tw_listaprodutos->setColumnWidth(1, 280);
    ui->tw_listaprodutos->setColumnWidth(2, 100);
    ui->tw_listaprodutos->setColumnWidth(3, 100);
    ui->tw_listaprodutos->setColumnWidth(4, 100);
    QStringList cabecalhos={"Código", "Produto", "Valor Un.", "Quantidade", "Total"};
    ui->tw_listaprodutos->setHorizontalHeaderLabels(cabecalhos);
    ui->tw_listaprodutos->setStyleSheet("QTableView{selection-background-color:blue;}");
    ui->tw_listaprodutos->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tw_listaprodutos->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tw_listaprodutos->verticalHeader()->setVisible(false);
    ui->txt_codproduto->setFocus();
    contlinhas=0;
}

gp_novavenda::~gp_novavenda()
{
    delete ui;
}

void gp_novavenda::on_txt_codproduto_returnPressed()
{
    QSqlQuery query;
    QString id=ui->txt_codproduto->text();
    double valtot;
    query.prepare("select id_produto,produto,valor_venda from tb_produtos where id_produto="+id);
    if(query.exec()){
        query.first();
        if(query.value(0).toString()!=""){
            ui->tw_listaprodutos->insertRow(contlinhas);
            ui->tw_listaprodutos->setItem(contlinhas, 0, new QTableWidgetItem(query.value(0).toString()));
            ui->tw_listaprodutos->setItem(contlinhas, 1, new QTableWidgetItem(query.value(1).toString()));
            ui->tw_listaprodutos->setItem(contlinhas, 2, new QTableWidgetItem(query.value(2).toString()));
            ui->tw_listaprodutos->setItem(contlinhas, 3, new QTableWidgetItem(ui->txt_qtde->text()));
            valtot=ui->txt_qtde->text().toDouble()*query.value(2).toDouble();
            ui->tw_listaprodutos->setItem(contlinhas, 4, new QTableWidgetItem(QString::number(valtot)));
            ui->tw_listaprodutos->setRowHeight(contlinhas, 20);
            contlinhas++;
            ui->lb_totalvenda->setText("R$ "+QString::number(calculaTotal(ui->tw_listaprodutos, 4)));
        //Atualizar o valor total da venda
       }else{
            QMessageBox::warning(this,"Erro", "Produto não encontrado");
        }

    }else{
        QMessageBox::warning(this,"Erro", "Erro ao inserir produto");
    }
}

void gp_novavenda::resetaCampos(){

    ui->txt_codproduto->clear();
    ui->txt_qtde->setText("1");
    ui->txt_codproduto->setFocus();

}

void gp_novavenda::removerlinhas(QTableWidget *tw){
    while(tw->rowCount()>0);
    tw->removeRow(0);

}
double gp_novavenda::calculaTotal(QTableWidget *tw, int coluna){
    int totalLinhas;
    double total;

    totalLinhas=tw->rowCount();
    for(int i=0;i<totalLinhas;i++){
        total+=tw->item(i, coluna)->text().toDouble();
    }
    return total;
}

void gp_novavenda::on_btn_excluirprod_clicked()
{
    if(ui->tw_listaprodutos->currentColumn()!=-1){
        QMessageBox::StandardButton opc=QMessageBox::question(this, "Exclusão", "Você deseja realmente excluir este produto?", QMessageBox::Yes|QMessageBox::No);

        if(opc==QMessageBox::Yes){
        ui->tw_listaprodutos->removeRow(ui->tw_listaprodutos->currentRow());
        ui->lb_totalvenda->setText("R$ "+QString::number(calculaTotal(ui->tw_listaprodutos,4)));
        contlinhas--;

    }
    }else{
        QMessageBox::warning(this,"Erro", "Selecione um produto");

    }
}


void gp_novavenda::on_btn_editarprod_clicked()
{
    if(ui->tw_listaprodutos->currentColumn()!=-1){
        int linha=ui->tw_listaprodutos->currentRow();

        g_idprod=ui->tw_listaprodutos->item(linha,0)->text();
        g_prod=ui->tw_listaprodutos->item(linha,1)->text();
        g_valuni=ui->tw_listaprodutos->item(linha,2)->text();
        g_qtde=ui->tw_listaprodutos->item(linha,3)->text();


        gp_editarprodutovenda g_editarprodutovenda;
        g_editarprodutovenda.exec();

        if(alterou){
            ui->tw_listaprodutos->item(linha,2)->setText(g_valuni);
            ui->tw_listaprodutos->item(linha,3)->setText(g_qtde);
            ui->tw_listaprodutos->item(linha,4)->setText(g_valtotal);
            ui->lb_totalvenda->setText("R$ "+QString::number(calculaTotal(ui->tw_listaprodutos,4)));
        }
    }

}


void gp_novavenda::on_btn_finalizarvenda_clicked()
{
    if(ui->tw_listaprodutos->rowCount()>0){
        int idVenda;
        QString msgFimVenda;
        double total=calculaTotal(ui->tw_listaprodutos,4);
        //QString data=QDate::currentDate().toString("yyyy-MM-dd");
        QString data=QDate::currentDate().toString("dd-MM-yyyy");
        QString hora=QTime::currentTime().toString("hh:mm:ss");

        QSqlQuery query;
        query.prepare("insert into tb_vendas (data_venda,hora_venda,id_colaborador,valor_total,id_tipo_pagamento) values('"+data+"', '"+hora+"', "+QString::number(variaveis_globais::id_colab)+","+QString::number(total)+", 1)");

        if(!query.exec()){
             QMessageBox::warning(this,"Erro", "Erro ao registrar nova venda");
        }else{
            query.prepare("select id_venda from tb_vendas order by id_venda desc limit 1");
            query.exec();
            query.first();
            idVenda=query.value(0).toInt();
            msgFimVenda="ID Venda: "+QString::number(idVenda)+"\nValor total: R$"+QString::number(total);

            int totalLinhas=ui->tw_listaprodutos->rowCount();
            int linha=0;
            while(linha<totalLinhas){
                QString prod=ui->tw_listaprodutos->item(linha,1)->text();
                QString qtde=ui->tw_listaprodutos->item(linha,3)->text();
                QString valUn=ui->tw_listaprodutos->item(linha,2)->text();
                QString valTot=ui->tw_listaprodutos->item(linha,4)->text();

                query.prepare("insert into tb_produtosVendas (id_venda,produto,qtde,valor_un,valor_total) values("+QString::number(idVenda)+",'"+prod+"',"+qtde+", "+valUn+", "+valTot+")");
                query.exec();

                query.prepare("update tb_produtos set qtde_estoque=qtde_estoque-'"+qtde+"'");
                query.exec();
                 linha++;
            }

            QMessageBox::information(this,"Venda concluida", msgFimVenda);
            resetaCampos();
            ui->lb_totalvenda->setText("R$ 0.00");
            close();
        }
    }else{
        QMessageBox::warning(this,"Erro", "Não existem produtos nessa venda");

    }

}

