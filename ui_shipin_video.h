/********************************************************************************
** Form generated from reading UI file 'shipin_video.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHIPIN_VIDEO_H
#define UI_SHIPIN_VIDEO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ShiPin_video
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QWidget *widget_controller;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_open;
    QPushButton *pushButton_play;
    QPushButton *pushButton_pause;
    QPushButton *pushButton_stop;
    QSlider *horizontalSlider;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_currenttime;
    QLabel *label_3;
    QLabel *label_totaltime;
    QListWidget *listWidget;

    void setupUi(QWidget *ShiPin_video)
    {
        if (ShiPin_video->objectName().isEmpty())
            ShiPin_video->setObjectName(QStringLiteral("ShiPin_video"));
        ShiPin_video->resize(616, 397);
        gridLayout = new QGridLayout(ShiPin_video);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        widget = new QWidget(ShiPin_video);
        widget->setObjectName(QStringLiteral("widget"));

        verticalLayout->addWidget(widget);

        widget_controller = new QWidget(ShiPin_video);
        widget_controller->setObjectName(QStringLiteral("widget_controller"));
        widget_controller->setMinimumSize(QSize(0, 32));
        widget_controller->setMaximumSize(QSize(16777215, 32));
        widget_controller->setStyleSheet(QLatin1String("QWidget#widget_controller\n"
"{\n"
"	background-color: rgba(0, 255, 0, 100);\n"
"}"));
        horizontalLayout_3 = new QHBoxLayout(widget_controller);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, 0, -1, 0);
        pushButton_open = new QPushButton(widget_controller);
        pushButton_open->setObjectName(QStringLiteral("pushButton_open"));

        horizontalLayout_3->addWidget(pushButton_open);

        pushButton_play = new QPushButton(widget_controller);
        pushButton_play->setObjectName(QStringLiteral("pushButton_play"));

        horizontalLayout_3->addWidget(pushButton_play);

        pushButton_pause = new QPushButton(widget_controller);
        pushButton_pause->setObjectName(QStringLiteral("pushButton_pause"));

        horizontalLayout_3->addWidget(pushButton_pause);

        pushButton_stop = new QPushButton(widget_controller);
        pushButton_stop->setObjectName(QStringLiteral("pushButton_stop"));

        horizontalLayout_3->addWidget(pushButton_stop);

        horizontalSlider = new QSlider(widget_controller);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_3->addWidget(horizontalSlider);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_currenttime = new QLabel(widget_controller);
        label_currenttime->setObjectName(QStringLiteral("label_currenttime"));

        horizontalLayout_4->addWidget(label_currenttime);

        label_3 = new QLabel(widget_controller);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_4->addWidget(label_3);

        label_totaltime = new QLabel(widget_controller);
        label_totaltime->setObjectName(QStringLiteral("label_totaltime"));

        horizontalLayout_4->addWidget(label_totaltime);


        horizontalLayout_3->addLayout(horizontalLayout_4);


        verticalLayout->addWidget(widget_controller);


        horizontalLayout->addLayout(verticalLayout);

        listWidget = new QListWidget(ShiPin_video);
        new QListWidgetItem(listWidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));

        horizontalLayout->addWidget(listWidget);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);


        retranslateUi(ShiPin_video);

        QMetaObject::connectSlotsByName(ShiPin_video);
    } // setupUi

    void retranslateUi(QWidget *ShiPin_video)
    {
        ShiPin_video->setWindowTitle(QApplication::translate("ShiPin_video", "Form", Q_NULLPTR));
        pushButton_open->setText(QApplication::translate("ShiPin_video", "\346\211\223\345\274\200\350\247\206\351\242\221", Q_NULLPTR));
        pushButton_play->setText(QApplication::translate("ShiPin_video", "\346\222\255\346\224\276", Q_NULLPTR));
        pushButton_pause->setText(QApplication::translate("ShiPin_video", "\346\232\202\345\201\234", Q_NULLPTR));
        pushButton_stop->setText(QApplication::translate("ShiPin_video", "\345\201\234\346\255\242", Q_NULLPTR));
        label_currenttime->setText(QApplication::translate("ShiPin_video", "00:00:00", Q_NULLPTR));
        label_3->setText(QApplication::translate("ShiPin_video", "/", Q_NULLPTR));
        label_totaltime->setText(QApplication::translate("ShiPin_video", "00:00:00", Q_NULLPTR));

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("ShiPin_video", "\346\226\207\344\273\266\345\210\227\350\241\250", Q_NULLPTR));
        listWidget->setSortingEnabled(__sortingEnabled);

    } // retranslateUi

};

namespace Ui {
    class ShiPin_video: public Ui_ShiPin_video {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHIPIN_VIDEO_H
