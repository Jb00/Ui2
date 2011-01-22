#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->btn_Login,SIGNAL(clicked()),this,SLOT(btn_Login_click()));
    connect(ui->btn_Cancel,SIGNAL(clicked()),this,SLOT(btn_Cancel_click()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::btn_Login_click()
{
    ui->lb_Pw->setText(ui->text_Pw->text());
}

void MainWindow::btn_Cancel_click()
{
    close();
}
