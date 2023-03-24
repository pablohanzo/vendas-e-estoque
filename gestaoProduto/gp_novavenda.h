#ifndef GP_NOVAVENDA_H
#define GP_NOVAVENDA_H

#include <QDialog>
#include "Conexao.h"
#include <QTableWidget>

namespace Ui {
class gp_novavenda;
}

class gp_novavenda : public QDialog
{
    Q_OBJECT

public:
    explicit gp_novavenda(QWidget *parent = nullptr);
    ~gp_novavenda();
    Conexao con;
    int contlinhas;
    void resetaCampos();
    double calculaTotal(QTableWidget *tw, int coluna);
    static QString g_idprod,g_prod,g_qtde,g_valuni,g_valtotal;
    static bool alterou;
    void removerlinhas(QTableWidget *tw);

private slots:
    void on_txt_codproduto_returnPressed();

    void on_btn_excluirprod_clicked();

    void on_btn_editarprod_clicked();

    void on_btn_finalizarvenda_clicked();

private:
    Ui::gp_novavenda *ui;
};

#endif // GP_NOVAVENDA_H
