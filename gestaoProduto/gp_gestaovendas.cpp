#include "gp_gestaovendas.h"
#include "ui_gp_gestaovendas.h"
#include <QtSql>
#include <QPrinter>
#include    <QPainter>
#include    <QDir>
#include    <QDebug>
#include    <QDesktopServices>

gp_gestaovendas::gp_gestaovendas(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::gp_gestaovendas)
{
    ui->setupUi(this);

    ui->tw_listavendas->horizontalHeader()->setVisible(true);
    ui->tw_listavendas->setColumnCount(6);
    QStringList cabe1={"ID", "Data", "Hora", "Colab.", "V.Total", "T.Pagto"};
    ui->tw_listavendas->setHorizontalHeaderLabels(cabe1);
    ui->tw_listavendas->verticalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
    ui->tw_listavendas->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tw_listavendas->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tw_listavendas->setEditTriggers(QAbstractItemView::NoEditTriggers);

    ui->tw_listaprodvendas->horizontalHeader()->setVisible(true);
    ui->tw_listaprodvendas->setColumnCount(5);
    QStringList cabe={"Mov.", "Produto", "Qtde", "Valor Uni", "V.Total"};
    ui->tw_listaprodvendas->setHorizontalHeaderLabels(cabe);
    ui->tw_listaprodvendas->verticalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
    ui->tw_listaprodvendas->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tw_listaprodvendas->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tw_listaprodvendas->setEditTriggers(QAbstractItemView::NoEditTriggers);


    con.abrir();
    int contlinhas=0;
    QSqlQuery query;
    query.prepare("select * from tb_vendas");
    query.exec();
    query.first();
    do{
        ui->tw_listavendas->insertRow(contlinhas);
        ui->tw_listavendas->setItem(contlinhas, 0, new QTableWidgetItem(query.value(0).toString()));
        ui->tw_listavendas->setItem(contlinhas, 1, new QTableWidgetItem(query.value(1).toString()));
        ui->tw_listavendas->setItem(contlinhas, 2, new QTableWidgetItem(query.value(2).toString()));
        ui->tw_listavendas->setItem(contlinhas, 3, new QTableWidgetItem(query.value(3).toString()));
        ui->tw_listavendas->setItem(contlinhas, 4, new QTableWidgetItem(query.value(4).toString()));
        ui->tw_listavendas->setItem(contlinhas, 5, new QTableWidgetItem(query.value(5).toString()));


            contlinhas++;
    }while(query.next());
    con.fechar();

}

gp_gestaovendas::~gp_gestaovendas()
{
    delete ui;
}

void gp_gestaovendas::on_tw_listavendas_itemSelectionChanged()
{
    //ui->tw_listaprodvendas->clear();
    ui->tw_listaprodvendas->setRowCount(0);

    con.abrir();
    int contlinhas=0;
    QSqlQuery query;
    query.prepare("select id_movimentacao,produto,qtde,valor_un,valor_total from tb_produtosVendas where id_venda="+ui->tw_listavendas->item(ui->tw_listavendas->currentRow(),0)->text()+"");
    query.exec();
    query.first();
    do{
        ui->tw_listaprodvendas->insertRow(contlinhas);
        ui->tw_listaprodvendas->setItem(contlinhas, 0, new QTableWidgetItem(query.value(0).toString()));
        ui->tw_listaprodvendas->setItem(contlinhas, 1, new QTableWidgetItem(query.value(1).toString()));
        ui->tw_listaprodvendas->setItem(contlinhas, 2, new QTableWidgetItem(query.value(2).toString()));
        ui->tw_listaprodvendas->setItem(contlinhas, 3, new QTableWidgetItem(query.value(3).toString()));
        ui->tw_listaprodvendas->setItem(contlinhas, 4, new QTableWidgetItem(query.value(4).toString()));


            contlinhas++;
    }while(query.next());
    con.fechar();

}


void gp_gestaovendas::on_btn_filtrargvenda_clicked()
{
    ui->tw_listavendas->setRowCount(0);
    con.abrir();
    int contlinhas=0;
    QSqlQuery query;
    query.prepare("select * from tb_vendas where data_venda between '"+ui->de_dataini->text()+"' and '"+ui->de_datafim->text()+"'");
    query.exec();
    query.first();
    do{
        ui->tw_listavendas->insertRow(contlinhas);
        ui->tw_listavendas->setItem(contlinhas, 0, new QTableWidgetItem(query.value(0).toString()));
        ui->tw_listavendas->setItem(contlinhas, 1, new QTableWidgetItem(query.value(1).toString()));
        ui->tw_listavendas->setItem(contlinhas, 2, new QTableWidgetItem(query.value(2).toString()));
        ui->tw_listavendas->setItem(contlinhas, 3, new QTableWidgetItem(query.value(3).toString()));
        ui->tw_listavendas->setItem(contlinhas, 4, new QTableWidgetItem(query.value(4).toString()));
        ui->tw_listavendas->setItem(contlinhas, 5, new QTableWidgetItem(query.value(5).toString()));


            contlinhas++;
    }while(query.next());
    con.fechar();
    ui->de_dataini->setFocus();

}


void gp_gestaovendas::on_btn_imprimirgvenda_clicked()
{

    QString nome=QDir::currentPath()+"/"+ui->tw_listavendas->item(ui->tw_listavendas->currentRow(),0)->text()+"_vendas.pdf";

    QPrinter printer;
    printer.setOutputFormat(QPrinter::PdfFormat);
    printer.setOutputFileName(nome);

    QPainter painter;
    if(!painter.begin(&printer)){
        qDebug() << "Erro ao abrir PDF";
        return;
    }
    int linha=350;
    int salto=20;

    painter.drawPixmap(25,25,QPixmap(":/imagens/imgs/logo-casa de ferragens ijal.png"));

    painter.drawText(25,300,"Nº Compra:"+ui->tw_listavendas->item(ui->tw_listavendas->currentRow(),0)->text());
    painter.drawText(150,300,"Data:"+ui->tw_listavendas->item(ui->tw_listavendas->currentRow(),1)->text());

    for(int i=0;i<ui->tw_listaprodvendas->rowCount();i++){
    painter.drawText(25,linha,ui->tw_listaprodvendas->item(i,0)->text());
    painter.drawText(50,linha,ui->tw_listaprodvendas->item(i,2)->text());
    painter.drawText(280,linha,ui->tw_listaprodvendas->item(i,1)->text());
    linha+=salto;
 }
    painter.end();

    QDesktopServices::openUrl(QUrl("file:///"+nome));
}

