#ifndef GP_EDITARPRODUTOVENDA_H
#define GP_EDITARPRODUTOVENDA_H

#include <QDialog>

namespace Ui {
class gp_editarprodutovenda;
}

class gp_editarprodutovenda : public QDialog
{
    Q_OBJECT

public:
    explicit gp_editarprodutovenda(QWidget *parent = nullptr);
    ~gp_editarprodutovenda();

private slots:
    void on_btn_editaconfirma_clicked();

    void on_btn_editacancela_clicked();

private:
    Ui::gp_editarprodutovenda *ui;
};

#endif // GP_EDITARPRODUTOVENDA_H
