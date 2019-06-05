#include "logindialog.h"
#include "ui_logindialog.h"
#include <QMessageBox>
#include <QJsonParseError>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <QJsonValue>

LoginDialog::LoginDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LoginDialog)
{
    ui->setupUi(this);
    //设置默认用户名密码
    this->ui->lineEdit_username->setText("test");
    this->ui->lineEdit_password->setText("test");
    //设置登陆窗口固定大小
    this->setFixedSize(500,350);

    manager = new QNetworkAccessManager(this);
    connect(manager,SIGNAL(finished(QNetworkReply *)),this,SLOT(replyFinished(QNetworkReply *)));
}

LoginDialog::~LoginDialog()
{
    delete ui;
}
void LoginDialog::accept()
{
    if(ui->lineEdit_username->text().trimmed().isEmpty() || ui->lineEdit_password->text().trimmed().isEmpty()){
        QMessageBox::warning(this,"警告","用户名或者密码不能为空！",QMessageBox::Yes);
        QDialog::accept();
    }else{
        QByteArray postData;
        postData.append("username=");
        postData.append(ui->lineEdit_username->text().trimmed());
        postData.append("&password=");
        postData.append(ui->lineEdit_password->text().trimmed());
        Common_data::username = ui->lineEdit_username->text().trimmed();

        this->manager->post(QNetworkRequest(QUrl(Common_data::login_url)),postData);
    }
}

void LoginDialog::on_toolButton_clicked()
{
    Url_Config_Dialog url;
    url.exec();
}

void LoginDialog::replyFinished(QNetworkReply *reply)
{
    if (reply->error() == QNetworkReply::NoError){
        QTextCodec *codec = QTextCodec::codecForName("utf8");//使用utf8编码，这样才可以显示中文
        QString all = codec->toUnicode(reply->readAll());

        QJsonParseError *error = new QJsonParseError;
        QJsonDocument jsonDocument = QJsonDocument::fromJson(all.toUtf8(), error);
        if (error->error == QJsonParseError::NoError) {
            if (jsonDocument.isObject()) {
                QVariantMap result = jsonDocument.toVariant().toMap();
                int status = result["status"].toInt();
                QString content = result["content"].toString();
                if(status < 0){
                    QMessageBox::warning(this,"登陆失败：",content,QMessageBox::Yes);
                    return;
                }else{
                    Common_data::kaodian_bianhao = result["k_daima"].toString();
                    Common_data::school_name = result["k_name"].toString();
                    QMessageBox::information(this,"登陆成功！",content,QMessageBox::Yes);
                    QDialog::accept();
//                   qDebug()<<Common_data::kaodian_bianhao;
//                   qDebug()<<Common_data::school_name;
                }
            }
        } else {
            QMessageBox::warning(this,"警告：",error->errorString().toUtf8().constData(),QMessageBox::Yes);
        }
     }
     else
     {
         QMessageBox::warning(this,"警告：",qPrintable(reply->errorString()),QMessageBox::Yes);
     }
     reply->deleteLater(); //最后要释放reply对象
}
