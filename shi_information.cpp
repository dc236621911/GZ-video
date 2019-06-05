#include "shi_information.h"
#include "ui_shi_information.h"
#include <QDir>
#include <QDebug>
#include <QMessageBox>
#include "common_data.h"
#include <QColor>
#include <QFont>
#include "s_thread.h"
Shi_information::Shi_information(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Shi_information)
{
    ui->setupUi(this);

    //视频信息相关操作
    QFont font0("Microsoft YaHei", 12,QFont::Normal);
    ui->tableWidget->setFont(font0);
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);//根据内容宽度设置列宽
    QDir shipin_dir(Common_data::xin_lujing);
    //shipin_dir.setFilter(QDir::Files);
    if(shipin_dir.exists()){
        ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);

        S_Thread *new_thread=new S_Thread(this);
        //new_thread.start();
        connect(new_thread,SIGNAL(send_file_info(int,QString,int,QString,QString,QString)),this,SLOT(chuli_shi_info(int,QString,int,QString,QString,QString)),Qt::DirectConnection);
        new_thread->thread_play();

    }else{
        QMessageBox::warning(this,tr("警告："),tr("新视频目录不存在！"),QMessageBox::Yes);
        ui->tableWidget->setRowCount(5);
        ui->tableWidget->setSpan(0,0,5,5);
        QTableWidgetItem *meineirong = new QTableWidgetItem(tr("视频目录不存在！"));
        meineirong->setTextAlignment(Qt::AlignCenter | Qt::AlignHCenter);
        ui->tableWidget->setItem(0,0,meineirong);

    }
    ui->pushButton->setEnabled(false);

}

Shi_information::~Shi_information()
{
    delete ui;
}

void Shi_information::setFatherWidget(MainWindow *f)
{
    this->father = f;
}

MainWindow* Shi_information::getFatherWidget()
{
    return this->father;
}

void Shi_information::on_pushButton_clicked()
{

}

void Shi_information::chuli_shi_info(int ii,QString file_name,int file_size,QString duration,QString acFrame,QString f)
{
    ui->tableWidget->setRowCount(ii);//设置总行数
    QTableWidgetItem *shipin_name = new QTableWidgetItem(file_name);
    this->ui->tableWidget->setItem(ii-1,0,shipin_name);
    //文件大小

    int file_size_ = file_size;
    QString file_size_in = QString::number(file_size_,10);
    QTableWidgetItem *file_size_I = new QTableWidgetItem(file_size_in+" MB");
    if(file_size_ == 0 || file_size_ < 100){
        file_size_I->setTextColor(QColor("red"));
        QFont font("Microsoft YaHei", 14, 75);
        file_size_I->setFont(font);
    }
    ui->tableWidget->setItem(ii-1,1,file_size_I);

    QTableWidgetItem *avFrameRate_t = new QTableWidgetItem(acFrame);
    QTableWidgetItem *duration_time_t = new QTableWidgetItem(duration);
    QTableWidgetItem *fenbianlv = new QTableWidgetItem(f);
    ui->tableWidget->setItem(ii-1,2,duration_time_t);
    ui->tableWidget->setItem(ii-1,3,avFrameRate_t);
    fenbianlv->setTextAlignment(Qt::AlignCenter);
    ui->tableWidget->setItem(ii-1,4,fenbianlv);
}

