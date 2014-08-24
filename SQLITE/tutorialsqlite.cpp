#include "tutorialsqlite.h"
#include "ui_tutorialsqlite.h"

#include <QMessageBox>
#include <QtGui>

#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlError>

tutorialSQLITE::tutorialSQLITE(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::tutorialSQLITE)
{
    ui->setupUi(this);

    this->setWindowTitle("TUTORIAL SQLITE");
    habilitar_query(false);
    valoresiniciais();

    connect(ui->btn_conectar, SIGNAL(clicked()), this, SLOT(validarcampos()));
    connect(ui->btn_desconectar, SIGNAL(clicked()),this, SLOT(desconectar()));
    connect(ui->btn_executar, SIGNAL(clicked()), this, SLOT(enviarQuery()));

    txt_query = new QSqlQueryModel;
}

tutorialSQLITE::~tutorialSQLITE()
{
    delete txt_query;
    delete ui;
}

void tutorialSQLITE::valoresiniciais()
{
    ui->edt_schema->setText("BANCO.db");
}

void tutorialSQLITE::habilitar_query(bool ativo)
{
    //true
    ui->txt_sql->setEnabled(ativo);
    ui->tbl_sql->setEnabled(ativo);
    ui->btn_executar->setEnabled(ativo);
    ui->btn_desconectar->setEnabled(ativo);

    //false
    ui->btn_conectar->setDisabled(ativo);
    ui->edt_schema->setDisabled(ativo);
}

void tutorialSQLITE::validarcampos()
{
    if(ui->edt_schema->text().trimmed().isEmpty())
    {
        QMessageBox::information(this, "Campos em branco", "preencha o campo SCHEMA");
        ui->edt_schema->setFocus();
        return;
    }
    else
        conectarSQL();
}

void tutorialSQLITE::conectarSQL()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName(ui->edt_schema->text().trimmed());

    if (!db.open())
    {
        QMessageBox::critical(this, "Falha na conexão", "Falha na conexão com o banco [" + ui->edt_schema->text() + "]\n" + db.lastError().text(),QMessageBox::Cancel);
        return;
    }
    QSqlQuery qry;
    qry.prepare(("SELECT datetime('now')"));
    if(!qry.exec())
    {
        QString erro = qry.lastError().text();
        QMessageBox::critical(this, "Falha na conexão", "Falha ao preparar consulta do banco" + erro + "\n", QMessageBox::Cancel);
    }
    else if(qry.next())
    {
        QMessageBox::information(this, "Banco tutorial", "conexão realizada com sucesso com o banco[" + ui->edt_schema->text() + "]\n[" + qry.value(0).toDateTime().toString() + "]", QMessageBox::Ok);
    }
    habilitar_query(true);
    ui->txt_sql->setFocus();
}

void tutorialSQLITE::enviarQuery()
{
    txt_query->clear();
    ui->tbl_sql->setModel(NULL);

    if(ui->txt_sql->toPlainText().trimmed().isEmpty())
    {
        QMessageBox::information(this, "Instrução SQL", "Não a instrução SQL a ser executada");
        ui->txt_sql->setFocus();
        return;
    }

    QString sql = ui->txt_sql->toPlainText();
    if(sql.toUpper().startsWith("Select"))
    {
        txt_query->setQuery(sql);
        ui->tbl_sql->setModel(txt_query);
        if(txt_query->lastError().isValid())
        {
            QMessageBox::critical(this, "SOQH SQL - ERRO",txt_query->lastError().text());
            ui->txt_sql->setFocus();
            return;
        }
        QMessageBox::information(this, "SOQL SQL", "Instrução SQL executada com sucesso");
    }
    else
    {
        QStringList sqls = sql.split(";");
        QString strROWS;

        int numROWS = 0;
        for(int i = 0; i<sqls.size();i++)
        {
            QString tmpSql = sqls.at(i);
            if (tmpSql.trimmed().isEmpty())
                continue;

            QSqlQuery qry;
            qry.prepare(sqls.at(i));
            if(!qry.exec())
            {
                strROWS.setNum(numROWS);
                QString numScript;
                numScript.setNum(i+1);
                QMessageBox::critical(this, "SOQL SQL - ERRO", "Falha ao executar script [" + numScript + "]\n[" + strROWS + "] linha(s) afetada(s)\n" + qry.lastError().text());
                ui->txt_sql->setFocus();
                return;
            }
            numROWS += qry.numRowsAffected();
        }
        strROWS.setNum(numROWS);
        QMessageBox::information(this, "SOQL SQL", "Instrução SQL executada com sucesso\n[" + strROWS +"] linha(s) afetada(s)");
    }
}
