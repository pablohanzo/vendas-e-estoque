#include "gp_editarprodutovenda.h"
#include "ui_gp_editarprodutovenda.h"
#include  "gp_novavenda.h"

gp_editarprodutovenda::gp_editarprodutovenda(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::gp_editarprodutovenda)
{
    ui->setupUi(this);
    ui->txt_editaproduto->setText(gp_novavenda::g_prod);
    ui->txt_editaqtde->setText(gp_novavenda::g_qtde);
    ui->txt_editaunitario->setText(gp_novavenda::g_valuni);
}

gp_editarprodutovenda::~gp_editarprodutovenda()
{
    delete ui;
}

void gp_editarprodutovenda::on_btn_editaconfirma_clicked()
{
    QString aux;

    gp_novavenda::alterou=true;
    gp_novavenda::g_qtde=ui->txt_editaqtde->text();

    aux=ui->txt_editaunitario->text();
    std::replace(aux.begin(), aux.end(), ',','.');
    gp_novavenda::g_valuni=aux;

    gp_novavenda::g_valtotal=QString::number(ui->txt_editaqtde->text().toDouble()*aux.toDouble());
    close();

}


void gp_editarprodutovenda::on_btn_editacancela_clicked()
{
    gp_novavenda::alterou=false;
    close();
}

