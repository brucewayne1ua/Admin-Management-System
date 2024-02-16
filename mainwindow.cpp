#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QLabel>
#include <QLineEdit>
#include <QMessageBox>
#include <QTimeEdit>

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
    QString AdminName = ui->Login->text();
    QString AdminPass = ui->Pass->text();
    if (AdminName == "admin" && AdminPass == "admin"){
        ui->Name->setText("admin");
        ui->CardSum->setText("5.000 USDT");
    }
    else if (AdminName != "admin" && AdminPass != "admin")
    {
        QMessageBox msgBox;
        msgBox.setText("Error.");
        msgBox.exec();
    }

}

