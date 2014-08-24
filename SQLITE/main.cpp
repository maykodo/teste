#include "tutorialsqlite.h"
#include <QtWidgets>

int main(int argc, char *argv[])
{
    //instancia base para inicializar a aplicacao
    QApplication app(argc, argv);
    //formulario principal
    tutorialSQLITE form;
    // exibe formulario principal
    form.show();
    // inicializa a aplicacao
    return app.exec();
}
