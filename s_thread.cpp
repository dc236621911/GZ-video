#include "s_thread.h"
#include <QDebug>
#include <QDir>
#include <QFile>
#include <QDebug>
#include <QMessageBox>
#include <QTextCodec>
#include "common_data.h"
#include <QColor>
#include <QFont>
#include <QByteArray>

extern "C"
{
    #include "libavcodec/avcodec.h"
    #include "libavformat/avformat.h"
    #include "libswscale/swscale.h"
    #include "libavdevice/avdevice.h"
}
S_Thread::S_Thread(QObject *parent = 0): QThread(parent)
{
    //ffmpeg初始化
    //av_register_all();
    this->avFrameRate.append("0pts");
    this->duration_time.append("0:0:0");
    this->f_bianlv.append('0*0');
}

void S_Thread::thread_play()
{
    this->start();
}

void S_Thread::run()
{
    QDir shipin_dir(Common_data::xin_lujing);
    //shipin_dir.setFilter(QDir::Files);
    shipin_dir.setFilter(QDir::Dirs);

    //QTextCodec *codec = QTextCodec::codecForName("GBK");
    QTextCodec *codec_utf8 = QTextCodec::codecForName("UTF-8");
    int file_count=1;

    if(shipin_dir.exists()){
        int videoStream = -1;

        unsigned int hour = 0;
        unsigned int minute = 0;
        unsigned int second = 0;
        unsigned int pts = 0;

        QFileInfoList file_a = shipin_dir.entryInfoList();
        //qDebug()<<file_a;

        //注册ffmpeg所有解码器
//        av_register_all();
//        avformat_network_init();
//        avdevice_register_all();

        for(int i=0;i<file_a.size();i++){
            QFileInfo fileinfo_ = file_a.at(i);

            if(fileinfo_.isDir()){
                if(fileinfo_.fileName()=="."||fileinfo_.fileName()==".."){
                    continue;
                }

                //获取二级目录下的文件
                QDir new_two_dir(fileinfo_.filePath());
                new_two_dir.setFilter(QDir::Files);
                QFileInfoList file_a_two = new_two_dir.entryInfoList();
                for(int ii=0;ii<file_a_two.size();ii++){
                    QFileInfo fileinfo = file_a_two.at(ii);

                    //qDebug()<<fileinfo.filePath();
                    //QString file_name_ = Common_data::xin_lujing+"/"+codec->toUnicode(fileinfo.fileName().toLocal8Bit().constData());

                    QString file_name_ = fileinfo.filePath();

                    //获取文件大小
                    int file_size = fileinfo.size();
                    file_size = file_size/1024/1024;
                    //视频分辨率
                    int srcWidth = 0;
                    int srcHeight = 0;
                    //文件名转为utf8编码
                    QByteArray bbb = codec_utf8->fromUnicode(file_name_);
                    char *file_path = bbb.data();
                    //获取视频总时长
                    AVFormatContext *pFormatCtx = avformat_alloc_context();

                    if(avformat_open_input(&pFormatCtx,file_path,NULL,NULL) >= 0){
                        pFormatCtx->flags |= AVFMT_FLAG_NOBUFFER;
                        if(avformat_find_stream_info(pFormatCtx,NULL)>=0){
                           for(unsigned int i0=0;i0<pFormatCtx->nb_streams;i0++){
                                AVCodecContext *pCodeCtx = pFormatCtx->streams[i0]->codec;//解码器上下文
                                if(pFormatCtx->streams[i0]->codec->codec_type == AVMEDIA_TYPE_VIDEO){//视频通道
                                    videoStream = i0;
                                    //break;
                                    //视频宽，高
                                    srcWidth = pCodeCtx->width;
                                    srcHeight = pCodeCtx->height;

                                }
                           }
                           // 帧速
                           pts = pFormatCtx->streams[videoStream]->avg_frame_rate.num ? pFormatCtx->streams[videoStream]->avg_frame_rate.num : 0;//该码流总帧数
                           //时间转换为标准格式时间
                           unsigned int all_second;
                           if(pFormatCtx->streams[videoStream]->duration>0){
                               all_second = pFormatCtx->streams[videoStream]->duration / pFormatCtx->streams[videoStream]->avg_frame_rate.num;//该码流总帧数
                           }else{
                               all_second = 0;
                           }
        //                   qDebug()<<pFormatCtx->streams[videoStream]->duration;
        //                   qDebug()<<all_second;
                           if(all_second >= 3600){
                               hour = all_second / 3600;
                               minute = (all_second-3600) / 60;
                               second = (all_second -3600)% 60;
                           }else{
                               hour = 0;
                               minute = all_second / 60;
                               second = all_second % 60;
                           }

                        }
                    }else{
                        pts = 0;
                        hour = 0;
                        minute = 0;
                        second = 0;
                    }
                    this->avFrameRate = QString::number(pts).append("pts");
                    this->duration_time = QString::number(hour).append(":").append(QString::number(minute)).append(":").append(QString::number(second));
                    this->f_bianlv = QString::number(srcWidth).append('*').append(QString::number(srcHeight));
                    avformat_close_input(&pFormatCtx);
                    //qDebug()<<this->avFrameRate;
                    //qDebug()<<this->duration_time;
                    emit send_file_info(file_count,file_name_,file_size,this->duration_time,this->avFrameRate,this->f_bianlv);
                    file_count = file_count + 1;
                }
            }

        }
    }
}
