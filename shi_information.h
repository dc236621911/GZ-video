#ifndef SHI_INFORMATION_H
#define SHI_INFORMATION_H

#include <QWidget>
#include "mainwindow.h"

namespace Ui {
class Shi_information;
}

class Shi_information : public QWidget
{
    Q_OBJECT

public:
    explicit Shi_information(QWidget *parent = 0);
    ~Shi_information();
    void setFatherWidget(MainWindow *f);
    MainWindow* getFatherWidget();

private slots:
    void on_pushButton_clicked();
    void chuli_shi_info(int ii,QString file_name,int file_size,QString duration,QString acFrame,QString f);

private:
    Ui::Shi_information *ui;
    MainWindow *father;
};

#endif // SHI_INFORMATION_H
