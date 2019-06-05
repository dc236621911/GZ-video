#-------------------------------------------------
#
# Project created by QtCreator 2017-03-31T21:17:07
#
#-------------------------------------------------

QT       += core gui
QT       += core xml
QT       += network
QT       += script

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = shipin1
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    logindialog.cpp \
    config.cpp \
    common_data.cpp \
    kaochang.cpp \
    url_config_dialog.cpp \
    help.cpp \
    banquan.cpp \
    zuozhe.cpp \
    s_thread.cpp \
    shi_information.cpp


HEADERS  += mainwindow.h \
    logindialog.h \
    config.h \
    common_data.h \
    kaochang.h \
    url_config_dialog.h \
    help.h \
    banquan.h \
    zuozhe.h \
    s_thread.h \
    shi_information.h


FORMS    += mainwindow.ui \
    logindialog.ui \
    config.ui \
    kaochang.ui \
    shi_information.ui \
    shipin_video.ui \
    url_config_dialog.ui \
    help.ui \
    banquan.ui \
    zuozhe.ui \
    shi_information.ui

RESOURCES += \
    myicon.qrc \
    myimage.qrc \
    help.qrc \
    ico.qrc

DISTFILES += \
    ico.png

#ffmpeg配置

INCLUDEPATH += $$PWD/ffmpeg1/include

LIBS += $$PWD/ffmpeg1/lib/avcodec.lib \
        $$PWD/ffmpeg1/lib/avdevice.lib \
        $$PWD/ffmpeg1/lib/avfilter.lib \
        $$PWD/ffmpeg1/lib/avformat.lib \
        $$PWD/ffmpeg1/lib/avutil.lib \
        $$PWD/ffmpeg1/lib/postproc.lib \
        $$PWD/ffmpeg1/lib/swresample.lib \
        $$PWD/ffmpeg1/lib/swscale.lib
