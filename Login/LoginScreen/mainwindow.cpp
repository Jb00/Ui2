#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
 //   connect(ui->btn_Login,SIGNAL(clicked()), this , SLOT(on_btn_Login_clicked()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btn_Login_clicked()
{
    ui->lab_Login->setText(ui->lineEdit->text());
}
