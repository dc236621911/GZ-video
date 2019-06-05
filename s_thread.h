#ifndef S_THREAD_H
#define S_THREAD_H

#include <QThread>

class S_Thread : public QThread
{
    Q_OBJECT
public:
    explicit S_Thread(QObject *parent);

    QString duration_time;//总时间
    QString avFrameRate;//平均帧速
    QString f_bianlv;//视频分辨率

    void thread_play();
  ~S_Thread(){
          quit();
          wait();//
      }
signals:
    void send_file_info(int xin,QString file_name,int file_size,QString duration,QString acFrame,QString f);
protected:
    void run();
};

#endif // S_THREAD_H
