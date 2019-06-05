#include "kaochang.h"
#include "ui_kaochang.h"

#include "common_data.h"
#include <QString>
#include <QDir>
#include <QFile>
#include <QTextStream>
#include <QDebug>
#include <QTextCodec>
#include <QMessageBox>
#include <QtXml>
#include <QColor>
#include <QPushButton>

KaoChang::KaoChang(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::KaoChang)
{
    ui->setupUi(this);
    //指定中文编码
    QTextCodec *codec2 = QTextCodec::codecForName("GBK");
    //读取配置文件
    QString yuan_lujing = Common_data::yuan_lujing;
    QDir yuan_dir(yuan_lujing);

    ui->tableWidget->setStyleSheet("selection-background-color:lightblue");//设置选中背景色
    //设置水平、垂直表头背景颜色
    ui->tableWidget->horizontalHeader()->setStyleSheet("QHeaderView::section {background-color:lightblue;color: black;}");//设置表头字体，颜色，模式
    ui->tableWidget->verticalHeader()->setStyleSheet("QHeaderView::section {  background-color:skyblue;color: black;}");   //设置纵列的边框项的字体颜色模式等
    ui->tableWidget->setAlternatingRowColors(true);//开启间隔行颜色
    ui->tableWidget->setStyleSheet("QTableWidget{gridline-color:#2aaee4; color:#333; border:none;alternate-background-color:lightblue;}" );//设置隔行颜色样式

    if(yuan_dir.exists()){
        QStringList file_dir = yuan_dir.entryList(QDir::Files,QDir::Time);//QDir::Dirs,QDir::Time
        if(file_dir.size()>0){
            for(int i=0;i<file_dir.size();i++){
                QString file_dir_name = codec2->toUnicode(file_dir.at(i).toLocal8Bit().constData());

                if(file_dir_name == "." || file_dir_name == ".."){
                    continue;
                }
                shiping_dir.append(yuan_lujing+"/"+file_dir_name);

                QStringList tongdao_name_ = file_dir_name.split("_");
                tongdao_name.append(codec2->toUnicode(tongdao_name_.at(3).toLocal8Bit().constData()));
                dir_name.append(codec2->toUnicode(tongdao_name_.at(1).toLocal8Bit().constData())+"-"+codec2->toUnicode(tongdao_name_.at(2).toLocal8Bit().constData())+"-"+codec2->toUnicode(tongdao_name_.at(3).toLocal8Bit().constData()));
            }
            tongdao_name.removeDuplicates();
            dir_name.removeDuplicates();
            //qDebug()<<shiping_dir;
            //qDebug()<<tongdao_name;
            //qDebug()<<dir_name;

            ui->tableWidget->setRowCount(tongdao_name.size());

            for(int i2=0;i2<tongdao_name.size();i2++){
                //第一列第一列
                QTableWidgetItem *dir_name_item = new QTableWidgetItem(codec2->toUnicode(dir_name.at(i2).toLocal8Bit().constData()));
                dir_name_item->setBackgroundColor((QColor("#dddddd")));
                dir_name_item->setFlags(dir_name_item->flags()&(~Qt::ItemIsEditable));
                dir_name_item->setTextAlignment(Qt::AlignVCenter|Qt::AlignLeft);
                dir_name_item->setTextColor(QColor("blue"));
                ui->tableWidget->closePersistentEditor(dir_name_item);
                ui->tableWidget->setItem(i2,0,dir_name_item);
                //第二列
                QTableWidgetItem *tongdao_item = new QTableWidgetItem(codec2->toUnicode(tongdao_name.at(i2).toLocal8Bit().constData()));
                tongdao_item->setBackgroundColor(QColor("#efefef"));
                tongdao_item->setFlags(tongdao_item->flags()&(~Qt::ItemIsEditable));
                tongdao_item->setTextAlignment(Qt::AlignCenter);//单元格内容居中
                ui->tableWidget->closePersistentEditor(tongdao_item);//禁止单元格被编辑
                ui->tableWidget->setItem(i2,1,tongdao_item);
                //第三列
                QString kaochanghao_ = find_kaochanghao(codec2->toUnicode(tongdao_name.at(i2).toLocal8Bit().constData()));
                QTableWidgetItem *kaochang_item = new QTableWidgetItem(kaochanghao_);
                kaochang_item->setTextAlignment(Qt::AlignCenter);
                kaochang_item->setBackgroundColor(QColor("#fff"));
                ui->tableWidget->setItem(i2,2,kaochang_item);
            }
            ui->tableWidget->setCurrentCell(0,2,QItemSelectionModel::Select);//设置第一行第三列为选中状态
            //设置内容与表格相匹配
            ui->tableWidget->resizeColumnsToContents();
            ui->tableWidget->resizeRowsToContents();
            //单选按钮指定默认值
            if(Common_data::one2duo == 1){
              ui->one2duo1->setChecked(true);
            }
            if(Common_data::one2duo == 2){
                ui->oen2duo2->setChecked(true);
            }
            //添加单元格内容变化的信息槽连接
            connect(ui->tableWidget, SIGNAL(itemChanged(QTableWidgetItem*)), this, SLOT(itemChanged_slots(QTableWidgetItem*)));
            //单选按钮选择变化槽连接
            connect(ui->one2duo1, SIGNAL(clicked()), this, SLOT(on_radioButton_clicked()));
            connect(ui->oen2duo2, SIGNAL(clicked()), this, SLOT(on_radioButton_clicked()));
        }else{
            QMessageBox::warning(this,tr("警告："),tr("没有视频数据！"),QMessageBox::Yes);
            ui->tableWidget->setRowCount(5);
            ui->tableWidget->setSpan(0,0,5,3);
            QTableWidgetItem *meineirong = new QTableWidgetItem(tr("没有视频数据！"));
            meineirong->setTextAlignment(Qt::AlignCenter | Qt::AlignHCenter);
            ui->tableWidget->setItem(0,0,meineirong);
            ui->pushButton->setEnabled(false);
            ui->pushButton_2->setEnabled(false);
        }
    }else{
        QMessageBox::warning(this,tr("警告："),tr("原视频路径不存在！没有视频数据！"),QMessageBox::Yes);
        ui->tableWidget->setRowCount(5);
        ui->tableWidget->setSpan(0,0,5,3);
        QTableWidgetItem *meineirong = new QTableWidgetItem(tr("原视频路径不存在！没有视频数据！"));
        meineirong->setTextAlignment(Qt::AlignCenter | Qt::AlignHCenter);
        ui->tableWidget->setItem(0,0,meineirong);
        ui->pushButton->setEnabled(false);
        ui->pushButton_2->setEnabled(false);
    }
}

KaoChang::~KaoChang()
{
    delete ui;
}

QString KaoChang::find_kaochanghao(QString tongdaoming)
{
    //读取通道-考场配置文件
    QFile kc_file(tc_file_name);
    QDomElement kc_doc_root;
    QDomNodeList all_list;
    if(kc_file.open(QIODevice::ReadOnly)){
        QDomDocument kc_doc;
        if(kc_doc.setContent(&kc_file)){
            kc_doc_root = kc_doc.documentElement();//返回根元素
            all_list = kc_doc_root.childNodes();
            //kc_first_child = kc_doc_root.firstChild();//返回根节点的第一个子节点
            kc_file.close();
        }
    }else{
        kc_file.close();
    }
    //读取通道-考场配置文件
    for(int i5=0;i5<all_list.count();i5++){
        QDomNode all_list_ = all_list.at(i5);
        if( all_list_.isElement()){
            QDomElement kc_element =  all_list_.toElement();//将其转换为元素
            QDomNodeList kc_list=kc_element.childNodes();
            QDomNode kc_first_child_node = kc_list.at(0);
            if(kc_first_child_node.toElement().tagName() == "tongdao_title"){
                QString tongdao_name_c = kc_first_child_node.toElement().text();
                QString tongdao_name_current = tongdaoming;
                if(tongdao_name_c == tongdao_name_current){
                    return kc_first_child_node.nextSibling().toElement().text();
                }
            }
        }
    }
    return 0;
}

void KaoChang::on_pushButton_clicked()//通道-考场配置保存按钮
{
    QDomDocument tc_doc;
    QString kaochanghao,err_info;
    QFile tc_file(tc_file_name);
    if(tc_file.exists()){
        tc_file.remove();
    }
    if(tc_file.open(QIODevice::ReadWrite)){
        QDomProcessingInstruction instruction;//添加预处理
        instruction = tc_doc.createProcessingInstruction("xml","version=\"1.0\" encoding=\"UTF-8\"");
        tc_doc.appendChild(instruction);
        QDomElement root = tc_doc.createElement("tc");
        tc_doc.appendChild(root);
        for(int i3=0;i3<tongdao_name.size();i3++){
            QDomElement tt = tc_doc.createElement("tongdao");
            QDomAttr id = tc_doc.createAttribute("id");
            QDomElement tongdao_title = tc_doc.createElement("tongdao_title");
            QDomElement kaochang_title = tc_doc.createElement("kaochang_title");
            //验证考场号
            kaochanghao = ui->tableWidget->item(i3,2)->text();
            if(kaochanghao.toInt() >=1000 || kaochanghao.toInt() < 0){
                err_info = "考场号设置错误；位于第";
                err_info.append(QString::number(i3+1));
                err_info.append("行，第");
                err_info.append(QString::number(3));
                err_info.append("列。");

                QMessageBox::warning(this,tr("错误："),err_info,QMessageBox::NoButton);
                return;
            }
            //验证考场号
            QDomText text;
            id.setValue(ui->tableWidget->item(i3,1)->text());
            tt.setAttributeNode(id);
            text = tc_doc.createTextNode(ui->tableWidget->item(i3,1)->text());
            tongdao_title.appendChild(text);
            text = tc_doc.createTextNode(ui->tableWidget->item(i3,2)->text());
            kaochang_title.appendChild(text);

            tt.appendChild(tongdao_title);
            tt.appendChild(kaochang_title);

            root.appendChild(tt);
        }
        QTextStream out(&tc_file);
        tc_doc.save(out,4);
        tc_file.close();
        QMessageBox::information(this,"保存成功","保存成功！",QMessageBox::Yes);

    }else{
        QMessageBox::warning(this,"警告","通道-考场配置文件创建失败！",QMessageBox::Yes);
    }
}

void KaoChang::on_pushButton_2_clicked()//标准化命名
{
    //取消单元格内容变化的信息槽连接
    disconnect(ui->tableWidget, SIGNAL(itemChanged(QTableWidgetItem*)), this, SLOT(itemChanged_slots(QTableWidgetItem*)));
    //取消保存按钮的动作连接
    disconnect(this->ui->pushButton,SIGNAL(clicked()),this,SLOT(on_pushButton_clicked()));
    //取消标准化命名按钮动作连接
    disconnect(this->ui->pushButton_2,SIGNAL(clicked()),this,SLOT(on_pushButton_2_clicked()));
    //清除单选按钮行的布局
    delete this->ui->horizontalLayout_5;
    this->ui->oen2duo2->close();
    this->ui->one2duo1->close();
    this->ui->label_2->close();
    //清除单选按钮行的布局

    this->ui->tableWidget->clearContents();
    //this->ui->tableWidget->setRowCount(1);
    this->ui->tableWidget->setColumnCount(3);
    QStringList table_header;
    table_header.append("原视频");
    table_header.append("标准视频");
    table_header.append("处理状态");
    this->ui->tableWidget->setHorizontalHeaderLabels(table_header);
    this->ui->tableWidget->setColumnWidth(0,350);
    this->ui->tableWidget->setColumnWidth(1,350);
    this->ui->tableWidget->setColumnWidth(2,100);
    this->ui->tableWidget->horizontalHeader()->setStretchLastSection(true);//表格最后一列自动拉伸
    this->ui->label->setText(tr("视频文件标准化命名"));
    //this->ui->pushButton->close();//清除按钮
    //this->ui->pushButton_2->close();//清除按钮

    //表格样式
    this->ui->tableWidget->setStyleSheet("selection-background-color:lightblue");//设置选中背景色
    //设置水平、垂直表头背景颜色
    this->ui->tableWidget->horizontalHeader()->setStyleSheet("QHeaderView::section {background-color:lightblue;color: black;}");//设置表头字体，颜色，模式
    this->ui->tableWidget->verticalHeader()->setStyleSheet("QHeaderView::section {  background-color:skyblue;color: black;}");   //设置纵列的边框项的字体颜色模式等
    this->ui->tableWidget->setAlternatingRowColors(true);//开启间隔行颜色
    this->ui->tableWidget->setStyleSheet("QTableWidget{gridline-color:#2aaee4; color:#333; border:none;alternate-background-color:lightblue;}" );//设置隔行颜色样式
    //表格样式
    //按钮处理
    this->ui->pushButton->setText(tr("移 动"));
    this->ui->pushButton_2->setText(tr("复 制"));
    connect(this->ui->pushButton,SIGNAL(clicked()),this,SLOT(item_move_ok()));//移动操作
    connect(this->ui->pushButton_2,SIGNAL(clicked()),this,SLOT(item_copy_ok()));//复制操作
    this->ui->pushButton_2->setDisabled(true);//复制按钮不可用
    //标准名称处理  
    int table_row_count = 1;
    for(int i0=0;i0<shiping_dir.size();i0++){//shiping_dir已经为老视频路劲
        QStringList shipin_file_list = shiping_dir.at(i0).split("/");
        if(shipin_file_list.size() == 2){
            //如果列表长度只为2，则表示只有.和..默认的两个目录，此时按钮不可用
            this->ui->pushButton->setEnabled(false);
            this->ui->pushButton_2->setEnabled(false);
            QMessageBox::warning(this,tr("警告："),tr("原始视频不存在！"),QMessageBox::NoButton);
        }else{
             QCoreApplication::processEvents();//手动运行事件循环

            QString file_name = shipin_file_list.at(shipin_file_list.size()-1);//最后一项即为文件名

            QStringList file_name_base = file_name.split("_");//分割原视频文件名各个有用部分
            QString tongdao_ming = file_name_base.at(3);//取通道名称

            QString start_time = file_name_base.at(4);//取录制视频开始时间

            QString old_file_name = shiping_dir.at(i0);

            ui->tableWidget->setRowCount(table_row_count);
            QTableWidgetItem *old_file_name_ = new QTableWidgetItem(old_file_name);
            ui->tableWidget->setItem(table_row_count-1,0,old_file_name_);


            if(start_time.length()>14){
                start_time = start_time.mid(0,14);
            }
            QString file_year = start_time.mid(0,4);
            QString file_day = start_time.mid(4,4);
            QString file_time = start_time.mid(8,6);

            QString kaochang_hao = find_kaochanghao(tongdao_ming);//查找通道名对应的考场号
            //存放目录路径处理
            QDir new_dir(Common_data::xin_lujing);//新路径
            if(!new_dir.exists()){
                new_dir.mkdir(Common_data::xin_lujing);
            }
            //二级存放目录处理
            QString two_dir = Common_data::xin_lujing+'/'+Common_data::kaodian_bianhao+kaochang_hao;
            QDir new_two_dir(two_dir);
            if(!new_two_dir.exists()){
                new_two_dir.mkdir(two_dir);
            }
            //科目处理
            QString kemu;
            //对test用户处理

            switch (file_day.toInt()) {
                case 607:
                    if(file_time<"120000"){
                        kemu = "语文";
                    }else{
                        kemu = "数学";
                    }
                    break;
                case 608:
                    if(file_time<"120000"){
                        kemu = "综合";
                    }else{
                        kemu = "英语";
                    }
                    break;
                default:
                    if(file_time<"120000"){
                        kemu = "上午科目";
                    }else{
                        kemu = "下午科目";
                    }
                    break;
            }
            QFileInfo file_info(old_file_name);
            QString file_ext = file_info.suffix();
            QString new_file_name;
            if(Common_data::one2duo == 1){//一堂考试只有一个视频文件
                new_file_name =two_dir+"/"+Common_data::kaodian_bianhao+kaochang_hao+kemu+'.'+file_ext;
            }
            if(Common_data::one2duo == 2){//一堂考试有多个视频文件
                new_file_name =two_dir+"/"+Common_data::kaodian_bianhao+kaochang_hao+kemu+file_year+file_day+file_time+'.'+file_ext;
            }
            QTableWidgetItem *new_file_name_ = new QTableWidgetItem(new_file_name);
            ui->tableWidget->setItem(table_row_count-1,1,new_file_name_);
            //未处理值
            QString weichuli_text = "未处理";
            QTableWidgetItem *weichuli = new QTableWidgetItem(weichuli_text);
            weichuli->setTextColor(QColor("red"));
            ui->tableWidget->setItem(table_row_count-1,2,weichuli);

            table_row_count++;//行控制标签
        }

    }
}
void KaoChang::itemChanged_slots(QTableWidgetItem *item){//考场号输入格式验证
    int kaochanghao = 0;
    int row = item->row();
    int col = item->column();
    if(item->text().isEmpty()){
        QMessageBox::warning(this,tr("警告："),tr("输入考场号为空！"),QMessageBox::NoButton);
    }else{
        kaochanghao = item->text().toInt();
        if(item->text() == QString(' ')){
            return;
        }
        if(kaochanghao == 0){
            QMessageBox::warning(this,tr("警告："),tr("输入的考场号非法！"),QMessageBox::NoButton);
            item->setText(QString(' '));
            ui->tableWidget->setItem(row,col,item);
            return;
        }else if(kaochanghao >=1000 || kaochanghao < 0) {
            QMessageBox::warning(this,tr("警告："),tr("输入的考场号非法！"),QMessageBox::NoButton);
            item->setText(QString(' '));
            ui->tableWidget->setItem(row,col,item);
            return;
        }
    }
}
//移动处理按钮
void KaoChang::item_move_ok(){
    int suc_count = 0;
    int fail_count = 0;

    QString old_file_name;
    QString new_file_name;

    int row_count = this->ui->tableWidget->rowCount();
    if(row_count == 0){//如果没有数据行则返回
        QMessageBox::warning(this,"警告：","没有视频文件……",QMessageBox::NoButton);
        return;
    }

    QFile fail_txt("fail.txt");//失败文件记录
    fail_txt.open(QIODevice::ReadWrite | QIODevice::Append);//打开文件
    QTextStream out(&fail_txt);//新建文件输出流

    for(int i=0;i<row_count;i++){
        old_file_name = this->ui->tableWidget->item(i,0)->text();
        new_file_name = this->ui->tableWidget->item(i,1)->text();
        //qDebug()<<i<<" "<<"old_name="<<old_file_name<<"new_name:"<<new_file_name;
        if(old_file_name == new_file_name){
            continue;
        }
        if(!QFile::exists(old_file_name)){
            this->ui->tableWidget->item(i,2)->setText("原视频文件不存在！");
            this->ui->tableWidget->item(i,2)->setTextColor(QColor("red"));//设置字体颜色
            fail_count++;
            //写日志文件
            out<<old_file_name+"原视频文件不存在！"+"\n";
        }else if(QFile::rename(old_file_name,new_file_name)){//移动文件
            suc_count++;
            this->ui->tableWidget->item(i,2)->setText("处理成功！");
            this->ui->tableWidget->item(i,2)->setTextColor(QColor("green"));//设置字体颜色
        }else {
            fail_count++;
            this->ui->tableWidget->item(i,2)->setText("处理失败！");
            this->ui->tableWidget->item(i,2)->setTextColor(QColor("red"));//设置字体颜色
            //写日志文件
            out<<old_file_name+"\n";
        }
    }

    fail_txt.close();//关闭失败文件记录

    QString info_txt = tr("标准化命名成功");
    info_txt.append(QString::number(suc_count));
    info_txt.append(tr("次，失败"));
    info_txt.append(QString::number(fail_count));
    info_txt.append(tr("次，失败文件请查看文档fail.txt。"));
    QMessageBox::information(this,tr("信息"),info_txt,QMessageBox::Yes);

}
//复制处理按钮
void KaoChang::item_copy_ok(){
    //qDebug()<<"Copy";
    int suc_count = 0;
    int fail_count = 0;

    QString old_file_name;
    QString new_file_name;

    int row_count = this->ui->tableWidget->rowCount();
    if(row_count == 0){//如果没有数据行则返回
        QMessageBox::warning(this,"警告：","没有视频文件……",QMessageBox::NoButton);
        return;
    }

    for(int i=0;i<row_count;i++){
        QCoreApplication::processEvents();//手动运行事件循环

        old_file_name = this->ui->tableWidget->item(i,0)->text();
        new_file_name = this->ui->tableWidget->item(i,1)->text();
        //qDebug()<<i<<" "<<"old_name="<<old_file_name<<"new_name:"<<new_file_name;
        if(old_file_name == new_file_name){
            continue;
        }
        if(!QFile::exists(old_file_name)){
            this->ui->tableWidget->item(i,2)->setText("原视频文件不存在！");
            this->ui->tableWidget->item(i,2)->setTextColor(QColor("red"));//设置字体颜色
            fail_count++;

        }else if(QFile::exists(new_file_name)){
            if(QMessageBox::Yes  == QMessageBox::question(this,"问题：","目的视频文件已经存在，是否删除？",QMessageBox::Yes|QMessageBox::No,QMessageBox::NoButton)){
                if(QFile::remove(new_file_name)){
                    if(QFile::copy(old_file_name,new_file_name)){//复制文件
                        suc_count++;
                        this->ui->tableWidget->item(i,2)->setText("处理成功！");
                        this->ui->tableWidget->item(i,2)->setTextColor(QColor("green"));//设置字体颜色
                    }else {
                        fail_count++;
                        this->ui->tableWidget->item(i,2)->setText("处理失败！");
                        this->ui->tableWidget->item(i,2)->setTextColor(QColor("red"));//设置字体颜色

                    }
                }else{
                    QMessageBox::about(this,"删除错误：","文件删除出错……");
                }
            }
        }else if(QFile::copy(old_file_name,new_file_name)){//复制文件
            suc_count++;
            this->ui->tableWidget->item(i,2)->setText("处理成功！");
            this->ui->tableWidget->item(i,2)->setTextColor(QColor("green"));//设置字体颜色
        }else {
            fail_count++;
            this->ui->tableWidget->item(i,2)->setText("处理失败！");
            this->ui->tableWidget->item(i,2)->setTextColor(QColor("red"));//设置字体颜色

        }
    }

    QString info_txt = tr("标准化命名成功");
    info_txt.append(QString::number(suc_count));
    info_txt.append(tr("次，失败"));
    info_txt.append(QString::number(fail_count));
    info_txt.append(tr("次，失败文件请查看文档fail.txt。"));
    QMessageBox::information(this,tr("信息"),info_txt,QMessageBox::Yes);
}

void KaoChang::on_radioButton_clicked()// 单选按钮处理
{
    if(ui->buttonGroup->checkedId() == -3){
        Common_data::one2duo = 2;
    }else if(ui->buttonGroup->checkedId() == -2){
        Common_data::one2duo = 1;
    }
}
