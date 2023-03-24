#ifndef GP_LOGAR_H
#define GP_LOGAR_H

#include <QDialog>
#include <Conexao.h>

namespace Ui {
class gp_logar;
}

class gp_logar : public QDialog
{
    Q_OBJECT

public:
    explicit gp_logar(QWidget *parent = nullptr);
    ~gp_logar();
    bool logado;
    Conexao con;
    QString nome,acesso;
    int id;


private slots:
    void on_btn_logar_clicked();

    void on_btn_sair_clicked();

private:
    Ui::gp_logar *ui;
};

#endif // GP_LOGAR_H
