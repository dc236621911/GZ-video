#ifndef COMMON_DATA_H
#define COMMON_DATA_H

class QString;
class Common_data{
public:
    Common_data();

    static QString school_name;
    static QString kaodian_bianhao;
    static QString yuan_lujing;
    static QString xin_lujing;
    static QString login_url;
    static QString username;

    static int one2duo ;//单文件或者多文件，1为单文件一个文件，2为多文件一个小时一个包
};

#endif // COMMON_DATA_H
