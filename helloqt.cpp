#include "helloqt.h"
#include "./ui_helloqt.h"

HelloQt::HelloQt(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::HelloQt)
{
    ui->setupUi(this);
}

HelloQt::~HelloQt()
{
    delete ui;
}


void HelloQt::on_pushButton_clicked()
{
    QString name = ui->lineEdit->text();
    QString message = "Hello, " + name + '!';
    ui->label->setText(message);
}

