#ifndef LOGINDIALOG_H
#define LOGINDIALOG_H

#include <QDialog>
#include "url_config_dialog.h"
#include <QtNetwork>
#include <QTextCodec>
#include "common_data.h"
namespace Ui {
class LoginDialog;
}

class LoginDialog : public QDialog
{
    Q_OBJECT

public:
    explicit LoginDialog(QWidget *parent = 0);
    ~LoginDialog();

private slots:
    void accept();
    void on_toolButton_clicked();
    void replyFinished(QNetworkReply*);

private:
    Ui::LoginDialog *ui;
    QNetworkAccessManager *manager;
};

#endif // LOGINDIALOG_H
