#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QLabel>
#include <QGridLayout>
#include <QFont>
#include "config.h"
#include "kaochang.h"
#include "help.h"
#include "banquan.h"
#include "zuozhe.h"
#include "shi_information.h"
#include <QDebug>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //设置状态栏临时显示信息
    statusLabel = new QLabel;
    statusLabel->setMinimumSize(150,20);
    ui->statusBar->addWidget(statusLabel);
    statusLabel->setText(tr("版权所有，盗版必究！"));
    //设置状态栏右侧永久显示信息
    QLabel *permanent = new QLabel;
    permanent->setText(tr("<span style=\"color:blue\">QQ:236621911</span>&nbsp;&nbsp;<span style=\"color:red\">电话：13568523067</span>&nbsp;&nbsp;<span style=\"color:green\">微信：13568523067</span>"));
    permanent->setTextFormat(Qt::RichText);
    ui->statusBar->addPermanentWidget(permanent);
}
MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_action_N_triggered()//配置界面
{
    this->centralWidget()->setParent( NULL );
    config *config_w = new config(this);
    config_w->hookMainWindow(this);
    this->setCentralWidget(config_w);
}

void MainWindow::on_action_Q_triggered()//退出
{
    qApp->quit();
}
//通道-考场配置页面
void MainWindow::on_action_T_triggered()
{
    this->centralWidget()->setParent( NULL );
    KaoChang *kaochang = new KaoChang(this);
    this->setCentralWidget(kaochang);
}

//视频信息展示页面
void MainWindow::on_action_I_triggered()
{
    this->centralWidget()->setParent(NULL);
    Shi_information *shi = new Shi_information(this);
    shi->setFatherWidget(this);
    this->setCentralWidget(shi);
}
//视频播放验证页面
void MainWindow::on_action_P_triggered()
{
    this->centralWidget()->setParent(NULL);//暂时用帮助页面
    Help *help = new Help(this);
    this->setCentralWidget(help);
}
//使用帮助页面
void MainWindow::on_action_H_triggered()
{
    this->centralWidget()->setParent(NULL);
    Help *help = new Help(this);
    this->setCentralWidget(help);
}
//联系作者页面
void MainWindow::on_action_L_triggered()
{
    this->centralWidget()->setParent(NULL);
    Zuozhe *zuozhe = new Zuozhe(this);
    this->setCentralWidget(zuozhe);
}
//版权信息页面
void MainWindow::on_action_B_triggered()
{
    this->centralWidget()->setParent(NULL);
    Banquan *banquan = new Banquan(this);
    this->setCentralWidget(banquan);
}
