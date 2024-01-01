#include "kavach.h"
#include "./ui_kavach.h"
<<<<<<< HEAD
#include"savedpw.h"
=======
#include "savedpw.h"
>>>>>>> ac53cc0f62dc91483f1d711138990835512285f9
#include <iostream>


using namespace std;


Kavach::Kavach(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Kavach)
{
    ui->setupUi(this);
    mainwindow = new MainWindow(this);

}

Kavach::~Kavach()
{
    delete ui;
}


void Kavach::on_newPw_clicked()
{
    newPass = new newpass(this);
    hide();
    newPass->show();
}

void Kavach::on_oldPw_clicked()
{
<<<<<<< HEAD
    savedpw *savedPWDialog = new savedpw(this);
    savedPWDialog->exec();
    hide();
=======
    savedPw = new savedpw(this);
    hide();
    savedPw->show();
>>>>>>> ac53cc0f62dc91483f1d711138990835512285f9

}

