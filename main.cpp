#include "app/App.h"

#include <QApplication>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    App app;
    app.Init();
    app.Show();
    return a.exec();
}
