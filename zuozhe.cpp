#include "zuozhe.h"
#include "ui_zuozhe.h"

Zuozhe::Zuozhe(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Zuozhe)
{
    ui->setupUi(this);
}

Zuozhe::~Zuozhe()
{
    delete ui;
}
