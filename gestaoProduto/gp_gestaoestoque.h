#ifndef GP_GESTAOESTOQUE_H
#define GP_GESTAOESTOQUE_H

#include <QDialog>
#include "Conexao.h"
#include <QMessageBox>
#include <QTableWidget>



namespace Ui {
class gp_gestaoestoque;
}

class gp_gestaoestoque : public QDialog
{
    Q_OBJECT

public:
    explicit gp_gestaoestoque(QWidget *parent = nullptr);
    ~gp_gestaoestoque();
    Conexao con;

private slots:
    void on_btn_novoproduto_clicked();

    void on_btn_gravarnovoproduto_clicked();

    void on_tabWidget_currentChanged(int index);

    void on_tw_g_produtos_itemSelectionChanged();

    void on_btn_g_gravar_clicked();

    void on_btn_g_excluir_clicked();

    void on_btn_g_filtrar_clicked();

private:
    Ui::gp_gestaoestoque *ui;
};

#endif // GP_GESTAOESTOQUE_H
