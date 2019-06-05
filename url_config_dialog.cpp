#include "url_config_dialog.h"
#include "ui_url_config_dialog.h"

Url_Config_Dialog::Url_Config_Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Url_Config_Dialog)
{
    ui->setupUi(this);

    this->setFixedSize(400,120);
    this->ui->lineEdit->setText(Common_data::login_url);
}

Url_Config_Dialog::~Url_Config_Dialog()
{
    delete ui;
}

void Url_Config_Dialog::on_pushButton_clicked()
{
    QString url_config_file = "url.txt";

    QString url = this->ui->lineEdit->text();
    if(url.isEmpty()){
        QMessageBox::warning(this,tr("警告"),tr("地址信息为空！"),QMessageBox::Yes);
        this->ui->lineEdit->setFocus();
        return;
    }
    QString strUrlExp = "((http|https|ftp)://|(www)\\.)(\\w+)(\\.?[\\.a-z0-9/:?%&=\\-_+#;]*)"; //url正则
    QRegExp urlRegExp(strUrlExp,Qt::CaseInsensitive); //Url正则表达式，不区分大小写
    if(urlRegExp.indexIn(url) == -1){
        QMessageBox::warning(this,tr("警告"),tr("登陆地址格式不正确！"),QMessageBox::Yes);
        this->ui->lineEdit->setFocus();
        return;
    }
    //保存入配置文件
    QFile url_config(url_config_file);
    if(url_config.exists()){
        url_config.remove();
    }
    Common_data::login_url = url;
    if(url_config.open(QIODevice::WriteOnly)){
        QTextStream out(&url_config);
        out <<url+"\n";
        url_config.close();
        QMessageBox::information(this,tr("成功"),tr("保存成功！"),QMessageBox::Yes);
        this->close();
    }else{
        url_config.close();
        QMessageBox::warning(this,tr("警告"),tr("配置文件创建或打开失败！"),QMessageBox::Yes);
    }

}
