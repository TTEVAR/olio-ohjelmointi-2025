#include "mainwindow.h"
#include "./ui_mainwindow.h"

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

void MainWindow::on_btnCount_clicked()
{
    counter++;
    QString s = QString::number(counter);
    ui->txtResult->setText(s);
    ui->labelinfo->setText("Painiketta painettu " + s + " kertaa");
}

void MainWindow::on_btnReset_clicked()
{
    counter = 0;
    ui->txtResult->setText("0");
    ui->labelinfo->setText("Painiketta painettu 0 kertaa");
}
