#ifndef GP_GESTAOCOLAB_H
#define GP_GESTAOCOLAB_H

#include <QDialog>
#include "Conexao.h"

namespace Ui {
class gp_gestaocolab;
}

class gp_gestaocolab : public QDialog
{
    Q_OBJECT

public:
    explicit gp_gestaocolab(QWidget *parent = nullptr);
    ~gp_gestaocolab();
    Conexao con;


private slots:
    void on_btn_gravarNovoColab_clicked();

    void on_btn_cancelarNovoColab_clicked();

    void on_tabWidget_currentChanged(int index);

    void on_tw_listacolab_itemSelectionChanged();

    void on_btn_filtrarGestaoColab_clicked();

    void on_btn_gravarGestaoColab_clicked();

    void on_btn_excluirGestaoColab_clicked();

private:
    Ui::gp_gestaocolab *ui;
};

#endif // GP_GESTAOCOLAB_H
