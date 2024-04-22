#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <string>
#include <cmath>

using namespace std;


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    int a = ui->lineEdit->text().toInt();
    int b = ui->lineEdit_2->text().toInt();
    int c = a + b;

    ui->lineEdit_3->setText(QString::fromStdString(to_string(c)));
}

