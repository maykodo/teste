#ifndef TUTORIALSQLITE_H
#define TUTORIALSQLITE_H

#include <QDialog>
#include <qdialog.h>
#include <QSqlQueryModel>

namespace Ui {
class tutorialSQLITE;
}

class tutorialSQLITE : public QDialog
{
    Q_OBJECT

public slots:
    void validarcampos();
    void desconectar();
    void enviarQuery();

public:
    explicit tutorialSQLITE(QWidget *parent = 0);
    ~tutorialSQLITE();

private:
    Ui::tutorialSQLITE *ui;
    QSqlQueryModel *txt_query;
    void habilitar_query(bool ativo);
    void valoresiniciais();
    void conectarSQL();
};

#endif // TUTORIALSQLITE_H
