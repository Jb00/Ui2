#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->btn_Occu,SIGNAL(clicked()),this,SLOT(btn_Occ_click()));
    connect(ui->btn_Bed,SIGNAL(clicked()),this,SLOT(btn_addBed_click()));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::btn_Occ_click()
{
    ui->btn_Occu->setText("205/300");
}

void MainWindow::btn_addBed_click()

{
    ui->btn_Occu->setText(ui->btn_Occu->text() + ui->text_numberBed->text());
    ui->text_numberBed->setText("1");
}
