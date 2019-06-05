#include "config.h"
#include "ui_config.h"
#include "common_data.h"
#include "kaochang.h"

#include <QString>
#include <QFile>
#include <QFileDialog>
#include <QDir>
#include <QTextStream>
#include <QDebug>
#include <QMessageBox>


config::config(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::config)
{
    ui->setupUi(this);
    //设置默认值
    ui->line_kaodian_name->setText(Common_data::school_name);
    ui->line_kaodian_daima->setText(Common_data::kaodian_bianhao);
    ui->line_yuanshipin->setText(Common_data::yuan_lujing);
    ui->line_mudishipin->setText(Common_data::xin_lujing);
    //初始化样式
    ui->line_mudishipin->setStyleSheet("font-size:10pt");
    ui->line_yuanshipin->setStyleSheet("font-size:10pt");
}

config::~config()
{
    delete ui;
}

void config::hookMainWindow(MainWindow *ww)
{
    pp=ww;
}
//配置保存
void config::on_pushButton_clicked()
{
    //需保存的配置变量
    QString config_name = this->ui->line_kaodian_name->text().trimmed();//考点名称
    QString config_daima = this->ui->line_kaodian_daima->text().trimmed();//考场前四位
    QString config_mudi = this->ui->line_mudishipin->text().trimmed();//目的视频存放路径
    QString config_yuan = this->ui->line_yuanshipin->text().trimmed();//原视频存放路径
    //检测输入路径变量
    ui->line_mudishipin->setStyleSheet("font-size:10pt");
    ui->line_yuanshipin->setStyleSheet("font-size:10pt");
    if(!QDir(config_yuan).exists()){
        QMessageBox::warning(this,tr("警告"),tr("<span style='font-size:10pt'>原视频目录不存在！</span>"),QMessageBox::Yes);
        this->ui->line_yuanshipin->setFocus();
        this->ui->line_yuanshipin->setStyleSheet("border:1px solid red;font-size:10pt");
        return;
    }
    if(!QDir(config_mudi).exists()){
        QMessageBox::warning(this,tr("警告"),tr("<span style='font-size:10pt'>标准视频目录不存在！</span>"),QMessageBox::Yes);
        this->ui->line_mudishipin->setFocus();
        this->ui->line_mudishipin->setStyleSheet("border:1px solid red;font-size:10pt");
        return;
    }
    //动态保存配置变量值
    Common_data::school_name = config_name;
    Common_data::kaodian_bianhao = config_daima;
    Common_data::yuan_lujing = config_yuan;
    Common_data::xin_lujing = config_mudi;
    //保存入配置文件
    QString filename = "config.txt";
    QFile config_file(filename);
    if(config_file.exists()){
        config_file.remove();
    }
    if(config_file.open(QIODevice::WriteOnly)){
        QTextStream out(&config_file);
        out<<config_name+"\r\n";
        out<<config_daima+"\r\n";
        out<<config_yuan+"\r\n";
        out<<config_mudi;
        config_file.close();
        QMessageBox::information(this,tr("保存成功"),tr("<span style='font-size:10pt'>保存成功！</span>"),QMessageBox::Yes);
    }else{
        config_file.close();
        QMessageBox::warning(this,tr("警告"),tr("<span style='font-size:10pt'>配置文件创建或打开失败！</span>"),QMessageBox::Ok);
    }
}

//视频路径浏览按钮
void config::on_Button_l2_clicked()
{

    QString file_path = QFileDialog::getExistingDirectory(this,"请选择原视频路径...","/",QFileDialog::ShowDirsOnly);
    this->ui->line_yuanshipin->setText(file_path);
}
//标准视频路径选择按钮
void config::on_Button_l1_clicked()
{
    QString file_path = QFileDialog::getExistingDirectory(this,"请选择标准视频路径...","/",QFileDialog::ShowDirsOnly);
    this->ui->line_mudishipin->setText(file_path);
}
