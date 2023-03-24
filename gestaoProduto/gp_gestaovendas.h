#ifndef GP_GESTAOVENDAS_H
#define GP_GESTAOVENDAS_H

#include    "Conexao.h"
#include <QDialog>

namespace Ui {
class gp_gestaovendas;
}

class gp_gestaovendas : public QDialog
{
    Q_OBJECT

public:
    explicit gp_gestaovendas(QWidget *parent = nullptr);
    ~gp_gestaovendas();
    Conexao con;

private slots:
    void on_tw_listavendas_itemSelectionChanged();

    void on_btn_filtrargvenda_clicked();

    void on_btn_imprimirgvenda_clicked();

private:
    Ui::gp_gestaovendas *ui;
};

#endif // GP_GESTAOVENDAS_H
