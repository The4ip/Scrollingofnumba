#include "mainwindow.h"
#include "ui_mainwindow.h"



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    int c=0;
    ui->setupUi(this);
    QString cString=QString::number(c);
    ui->lineEdit->setText(cString);
}

MainWindow::~MainWindow()
{
    delete ui;

}

class Numba
{


    public:

    int cClass=0;

        int plus_c(int cclas)
        {
            cClass=cclas;
            cClass++;
            QString cString=QString::number(cClass);
            return cClass;
        }

        int minus_c(int cclas)
        {
            cClass=cclas;
            cClass--;
            QString cString=QString::number(cClass);
            return cClass;
        }


};

void MainWindow::on_pushButton_2_clicked()
{

   QString  ctring=ui->lineEdit->text();
   int c=ctring.toInt();
   Numba znach;
   c=znach.plus_c(c);//c++
   ui->lineEdit->setText(QString::number(c));

}

void MainWindow::on_pushButton_clicked()
{
    QString  ctring=ui->lineEdit->text();
    int c=ctring.toInt();
    Numba znach;
    c=znach.minus_c(c);
    ui->lineEdit->setText(QString::number(c));
}




void MainWindow::on_pushButton_2_pressed()
{
    QString  ctring=ui->lineEdit->text();
    int c=ctring.toInt();
    Numba znach;
    c=znach.plus_c(c);//c++
    ui->lineEdit->setText(QString::number(c));
}
