#ifndef URL_CONFIG_DIALOG_H
#define URL_CONFIG_DIALOG_H

#include <QDialog>
#include <QFile>
#include <QDebug>
#include <QMessageBox>
#include <QRegExp>
#include "common_data.h"
namespace Ui {
class Url_Config_Dialog;
}

class Url_Config_Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Url_Config_Dialog(QWidget *parent = 0);
    ~Url_Config_Dialog();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Url_Config_Dialog *ui;
};

#endif // URL_CONFIG_DIALOG_H
