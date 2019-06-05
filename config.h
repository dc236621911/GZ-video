#ifndef CONFIG_H
#define CONFIG_H

#include <QWidget>
#include "mainwindow.h"

namespace Ui {
class config;
}

class config : public QWidget
{
    Q_OBJECT

public:
    explicit config(QWidget *parent = 0);
    ~config();

    void hookMainWindow(MainWindow *ww) ;  //创建一个函数，其参数是窗口指针
        MainWindow *pp ;                       //创建一个主窗口指针
private slots:
    void on_pushButton_clicked();

    void on_Button_l2_clicked();

    void on_Button_l1_clicked();



private:
    Ui::config *ui;
};

#endif // CONFIG_H
