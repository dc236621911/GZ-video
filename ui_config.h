/********************************************************************************
** Form generated from reading UI file 'config.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIG_H
#define UI_CONFIG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_config
{
public:
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QGridLayout *gridLayout_3;
    QLabel *label_6;
    QGridLayout *gridLayout;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *line_kaodian_daima;
    QLineEdit *line_kaodian_name;
    QLabel *label_3;
    QLabel *label_2;
    QSplitter *splitter;
    QLineEdit *line_yuanshipin;
    QPushButton *Button_l2;
    QSplitter *splitter_2;
    QLineEdit *line_mudishipin;
    QPushButton *Button_l1;
    QGridLayout *gridLayout_2;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer;
    QLabel *label;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *config)
    {
        if (config->objectName().isEmpty())
            config->setObjectName(QStringLiteral("config"));
        config->resize(543, 387);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(10);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        config->setFont(font);
        config->setStyleSheet(QString::fromUtf8("font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"\n"
""));
        horizontalLayout_2 = new QHBoxLayout(config);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(58, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setSizeConstraint(QLayout::SetFixedSize);
        label_6 = new QLabel(config);
        label_6->setObjectName(QStringLiteral("label_6"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy);
        label_6->setMinimumSize(QSize(0, 40));
        label_6->setStyleSheet(QStringLiteral("font: 75 8pt \"Adobe Arabic\";"));

        gridLayout_3->addWidget(label_6, 4, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(-1, 0, -1, 10);
        label_4 = new QLabel(config);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        gridLayout->addWidget(label_4, 2, 0, 1, 1);

        label_5 = new QLabel(config);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        gridLayout->addWidget(label_5, 3, 0, 1, 1);

        line_kaodian_daima = new QLineEdit(config);
        line_kaodian_daima->setObjectName(QStringLiteral("line_kaodian_daima"));
        line_kaodian_daima->setMinimumSize(QSize(0, 30));
        line_kaodian_daima->setStyleSheet(QString::fromUtf8("font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"border-color: rgb(238, 238, 238);\n"
""));
        line_kaodian_daima->setReadOnly(false);

        gridLayout->addWidget(line_kaodian_daima, 1, 1, 1, 1);

        line_kaodian_name = new QLineEdit(config);
        line_kaodian_name->setObjectName(QStringLiteral("line_kaodian_name"));
        sizePolicy.setHeightForWidth(line_kaodian_name->sizePolicy().hasHeightForWidth());
        line_kaodian_name->setSizePolicy(sizePolicy);
        line_kaodian_name->setMinimumSize(QSize(0, 30));
        line_kaodian_name->setStyleSheet(QString::fromUtf8("font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        gridLayout->addWidget(line_kaodian_name, 0, 1, 1, 1);

        label_3 = new QLabel(config);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        label_2 = new QLabel(config);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        splitter = new QSplitter(config);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        line_yuanshipin = new QLineEdit(splitter);
        line_yuanshipin->setObjectName(QStringLiteral("line_yuanshipin"));
        line_yuanshipin->setMinimumSize(QSize(0, 30));
        line_yuanshipin->setFont(font);
        line_yuanshipin->setStyleSheet(QString::fromUtf8("font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        splitter->addWidget(line_yuanshipin);
        Button_l2 = new QPushButton(splitter);
        Button_l2->setObjectName(QStringLiteral("Button_l2"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Button_l2->sizePolicy().hasHeightForWidth());
        Button_l2->setSizePolicy(sizePolicy1);
        Button_l2->setMaximumSize(QSize(40, 27));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(8);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        Button_l2->setFont(font1);
        Button_l2->setStyleSheet(QString::fromUtf8("font: 8pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        Button_l2->setAutoRepeatDelay(293);
        splitter->addWidget(Button_l2);

        gridLayout->addWidget(splitter, 2, 1, 1, 1);

        splitter_2 = new QSplitter(config);
        splitter_2->setObjectName(QStringLiteral("splitter_2"));
        splitter_2->setOrientation(Qt::Horizontal);
        line_mudishipin = new QLineEdit(splitter_2);
        line_mudishipin->setObjectName(QStringLiteral("line_mudishipin"));
        line_mudishipin->setMinimumSize(QSize(0, 30));
        line_mudishipin->setFont(font);
        line_mudishipin->setStyleSheet(QString::fromUtf8("font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        splitter_2->addWidget(line_mudishipin);
        Button_l1 = new QPushButton(splitter_2);
        Button_l1->setObjectName(QStringLiteral("Button_l1"));
        sizePolicy1.setHeightForWidth(Button_l1->sizePolicy().hasHeightForWidth());
        Button_l1->setSizePolicy(sizePolicy1);
        Button_l1->setMaximumSize(QSize(40, 27));
        Button_l1->setStyleSheet(QString::fromUtf8("font: 8pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        splitter_2->addWidget(Button_l1);

        gridLayout->addWidget(splitter_2, 3, 1, 1, 1);


        gridLayout_3->addLayout(gridLayout, 2, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(-1, 10, -1, 10);
        pushButton = new QPushButton(config);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy2);
        pushButton->setMaximumSize(QSize(75, 29));
        pushButton->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        gridLayout_2->addWidget(pushButton, 0, 0, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 3, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer, 0, 0, 1, 1);

        label = new QLabel(config);
        label->setObjectName(QStringLiteral("label"));
        sizePolicy2.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy2);
        label->setMaximumSize(QSize(16777215, 80));

        gridLayout_3->addWidget(label, 1, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_2, 5, 0, 1, 1);


        horizontalLayout->addLayout(gridLayout_3);

        horizontalSpacer_2 = new QSpacerItem(48, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        horizontalLayout_2->addLayout(horizontalLayout);


        retranslateUi(config);

        QMetaObject::connectSlotsByName(config);
    } // setupUi

    void retranslateUi(QWidget *config)
    {
        config->setWindowTitle(QApplication::translate("config", "\350\200\203\347\202\271\351\205\215\347\275\256", Q_NULLPTR));
        label_6->setText(QApplication::translate("config", "<html><head/><body><p><span style=\" font-size:9pt; font-weight:600; color:#ff0000;\">\346\263\250\357\274\232</span><span style=\" font-size:9pt; font-weight:400; color:#000000;\">\345\273\272\350\256\256\345\260\206</span><span style=\" font-size:9pt; font-weight:600; color:#ff55ff;\">\345\216\237\350\247\206\351\242\221\347\233\256\345\275\225</span><span style=\" font-size:9pt; font-weight:400; color:#000000;\">\345\222\214</span><span style=\" font-size:9pt; font-weight:600; color:#ff55ff;\">\346\240\207\345\207\206\350\247\206\351\242\221\347\233\256\345\275\225</span><span style=\" font-size:9pt; font-weight:400; color:#000000;\">\346\224\276\345\234\250\345\220\214\344\270\200\347\233\230\347\254\246\344\270\213\343\200\202</span></p></body></html>", Q_NULLPTR));
        label_4->setText(QApplication::translate("config", "<html><head/><body><p align=\"right\">\345\216\237\350\247\206\351\242\221\347\233\256\345\275\225\357\274\232</p></body></html>", Q_NULLPTR));
        label_5->setText(QApplication::translate("config", "<html><head/><body><p align=\"right\">\346\240\207\345\207\206\350\247\206\351\242\221\347\233\256\345\275\225\357\274\232</p></body></html>", Q_NULLPTR));
        line_kaodian_daima->setPlaceholderText(QApplication::translate("config", "\350\200\203\345\234\272\345\217\267\345\211\2154\344\275\215", Q_NULLPTR));
        line_kaodian_name->setPlaceholderText(QApplication::translate("config", "\350\200\203\347\202\271\345\220\215\347\247\260", Q_NULLPTR));
        label_3->setText(QApplication::translate("config", "<html><head/><body><p align=\"right\">\350\200\203\347\202\271\345\220\215\347\247\260\357\274\232</p></body></html>", Q_NULLPTR));
        label_2->setText(QApplication::translate("config", "<html><head/><body><p align=\"right\">\350\200\203\345\234\272\345\217\267\345\211\2154\344\275\215\357\274\232</p></body></html>", Q_NULLPTR));
        line_yuanshipin->setPlaceholderText(QApplication::translate("config", "\345\216\237\345\247\213\350\247\206\351\242\221\345\255\230\346\224\276\347\233\256\345\275\225", Q_NULLPTR));
        Button_l2->setText(QApplication::translate("config", "\346\265\217\350\247\210...", Q_NULLPTR));
        line_mudishipin->setPlaceholderText(QApplication::translate("config", "\346\240\207\345\207\206\345\221\275\345\220\215\350\247\206\351\242\221\345\255\230\346\224\276\347\233\256\345\275\225", Q_NULLPTR));
        Button_l1->setText(QApplication::translate("config", "\346\265\217\350\247\210...", Q_NULLPTR));
        pushButton->setText(QApplication::translate("config", "\344\277\235  \345\255\230", Q_NULLPTR));
        label->setText(QApplication::translate("config", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:600; color:#333333;\">\350\200\203\347\202\271\347\233\270\345\205\263\351\205\215\347\275\256</span></p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class config: public Ui_config {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIG_H
