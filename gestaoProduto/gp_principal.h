#ifndef GP_PRINCIPAL_H
#define GP_PRINCIPAL_H

#include <QMainWindow>
#include <QtSql>

QT_BEGIN_NAMESPACE
namespace Ui { class gp_principal; }
QT_END_NAMESPACE

class gp_principal : public QMainWindow
{
    Q_OBJECT

public:
    explicit gp_principal(QWidget *parent = nullptr);
    ~gp_principal();
    QIcon cadFechado;
    QIcon cadAberto;
    QIcon logo;

private slots:
    void on_btn_bloquear_clicked();

    void on_btn_novavenda_clicked();

    void on_actionEstoque_triggered();

    void on_actionColaboradores_triggered();

    void on_actionVendas_triggered();

    void on_actionSair_triggered();

    void on_actionSobre_triggered();

private:
    Ui::gp_principal *ui;
};
#endif // GP_PRINCIPAL_H
