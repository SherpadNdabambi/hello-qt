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

