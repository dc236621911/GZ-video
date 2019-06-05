#ifndef KAOCHANG_H
#define KAOCHANG_H

#include <QWidget>
#include <QString>
#include <QTableWidgetItem>
namespace Ui {
class KaoChang;
}

class KaoChang : public QWidget
{
    Q_OBJECT

public:
    explicit KaoChang(QWidget *parent = 0);
    ~KaoChang();

    //存通道名
    QStringList tongdao_name;
    //当前文件夹名
    QStringList dir_name;
    //存视频文件的路径
    QStringList shiping_dir;
    //通道-考场配置文件
    QString  tc_file_name= "tc_file.xml";
    //通过通道名取出考场编号
    QString find_kaochanghao(QString tongdaoming);
private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void itemChanged_slots(QTableWidgetItem *item);
    //移动
    void item_move_ok();
    //复制
    void item_copy_ok();
    void on_radioButton_clicked();

private:
    Ui::KaoChang *ui;
};

#endif // KAOCHANG_H
