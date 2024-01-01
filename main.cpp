<<<<<<< HEAD
#include "mainwindow.h"

=======
#include"mainwindow.h"
#include"kavach.h"
>>>>>>> ac53cc0f62dc91483f1d711138990835512285f9
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
