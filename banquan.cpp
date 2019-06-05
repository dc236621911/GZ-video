#include "banquan.h"
#include "ui_banquan.h"

Banquan::Banquan(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Banquan)
{
    ui->setupUi(this);
}

Banquan::~Banquan()
{
    delete ui;
}
