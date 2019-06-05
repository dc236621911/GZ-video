#include "mainwindow.h"
#include <QApplication>
#include <QFontDatabase>
#include <QDebug>
#include "logindialog.h"
#include "common_data.h"
#include <QString>
#include <QFile>
#include <QByteArray>
#include <QTextCodec>
#include <QMessageBox>
#include "config.h"

//通用静态常量
QString Common_data::school_name="四川内江资中";
QString Common_data::kaodian_bianhao="0903";
QString Common_data::xin_lujing="C:\\shipin";
QString Common_data::yuan_lujing="D:\\shipin";
QString Common_data::login_url = "http://web.zizhong.ren/index.php?s=/shipin/index/login/";
QString Common_data::username = "test";
int Common_data::one2duo=2;//默认为2，多视频文件

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //指定中文编码
    QTextCodec *codec1 = QTextCodec::codecForName("GBK");
    //QTextCodec::setCodecForTr(QTextCodec::codecForName("utf8"));
    //对配置文件处理
    QByteArray config1[4];
    QString filename = "config.txt";
    QFile config_file(filename);
    if(config_file.exists()){
        if(config_file.open(QFile::ReadOnly | QIODevice::Text)){
            for(int i=0;i<4;i++){//不能使用QFile.atEnd()函数，程序编译能通过，但运行报错
                config1[i] = config_file.readLine();
            }
            Common_data::school_name = codec1->toUnicode(config1[0].constData()).trimmed();
            Common_data::kaodian_bianhao = codec1->toUnicode((config1[1].constData())).trimmed();
            Common_data::yuan_lujing = codec1->toUnicode(config1[2].constData()).trimmed();
            Common_data::xin_lujing = codec1->toUnicode(config1[3].constData()).trimmed();
        }
    }else{
        QMessageBox::warning(NULL,"警告：","配置文件不存在！",QMessageBox::NoButton);
    }
    //配置文件处理完成
    //url配置处理
    QFile url_config("url.txt");
    if(url_config.exists()){
        if(url_config.open(QFile::ReadOnly|QIODevice::Text)){
            QByteArray url = url_config.readLine();
            Common_data::login_url = codec1->toUnicode(url.constData()).trimmed();
        }
    }else{

    }
    MainWindow w;
    LoginDialog dlg;

    if(1 || dlg.exec() == QDialog::Accepted){
        dlg.close();
        w.show();

        return a.exec();
    }else{
        return 0;
    }

}
