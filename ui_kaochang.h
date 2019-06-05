/********************************************************************************
** Form generated from reading UI file 'kaochang.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KAOCHANG_H
#define UI_KAOCHANG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_KaoChang
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label;
    QSpacerItem *horizontalSpacer_4;
    QTableWidget *tableWidget;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_5;
    QRadioButton *one2duo1;
    QRadioButton *oen2duo2;
    QSpacerItem *horizontalSpacer_7;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer_2;
    QButtonGroup *buttonGroup;

    void setupUi(QWidget *KaoChang)
    {
        if (KaoChang->objectName().isEmpty())
            KaoChang->setObjectName(QStringLiteral("KaoChang"));
        KaoChang->resize(800, 600);
        KaoChang->setStyleSheet(QString::fromUtf8("font: 12pt \"\351\230\277\351\207\214\345\267\264\345\267\264\346\231\256\346\203\240\344\275\223 R\";"));
        verticalLayout = new QVBoxLayout(KaoChang);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(108, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        label = new QLabel(KaoChang);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QString::fromUtf8("font: 75 14pt \"\351\230\277\351\207\214\345\267\264\345\267\264\346\231\256\346\203\240\344\275\223 B\";"));

        horizontalLayout_2->addWidget(label);

        horizontalSpacer_4 = new QSpacerItem(108, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout_2);

        tableWidget = new QTableWidget(KaoChang);
        if (tableWidget->columnCount() < 3)
            tableWidget->setColumnCount(3);
        QFont font;
        font.setFamily(QString::fromUtf8("\351\230\277\351\207\214\345\267\264\345\267\264\346\231\256\346\203\240\344\275\223 B"));
        font.setPointSize(11);
        font.setBold(true);
        font.setWeight(75);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setFont(font);
        __qtablewidgetitem->setBackground(QColor(239, 239, 239));
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QFont font1;
        font1.setPointSize(11);
        font1.setBold(true);
        font1.setWeight(75);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setFont(font1);
        __qtablewidgetitem1->setBackground(QColor(239, 239, 239));
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setFont(font1);
        __qtablewidgetitem2->setBackground(QColor(239, 239, 239));
        __qtablewidgetitem2->setForeground(brush);
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tableWidget->sizePolicy().hasHeightForWidth());
        tableWidget->setSizePolicy(sizePolicy);
        tableWidget->setMaximumSize(QSize(1920, 1080));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\351\230\277\351\207\214\345\267\264\345\267\264\346\231\256\346\203\240\344\275\223 B"));
        font2.setPointSize(10);
        font2.setBold(false);
        font2.setItalic(false);
        font2.setWeight(9);
        tableWidget->setFont(font2);
        tableWidget->setStyleSheet(QString::fromUtf8("font: 75 10pt \"\351\230\277\351\207\214\345\267\264\345\267\264\346\231\256\346\203\240\344\275\223 B\";"));
        tableWidget->horizontalHeader()->setVisible(true);
        tableWidget->horizontalHeader()->setDefaultSectionSize(100);
        tableWidget->horizontalHeader()->setHighlightSections(true);
        tableWidget->horizontalHeader()->setMinimumSectionSize(50);
        tableWidget->horizontalHeader()->setStretchLastSection(true);
        tableWidget->verticalHeader()->setVisible(true);
        tableWidget->verticalHeader()->setMinimumSectionSize(30);

        verticalLayout->addWidget(tableWidget);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_6);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_2 = new QLabel(KaoChang);
        label_2->setObjectName(QStringLiteral("label_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);
        label_2->setMinimumSize(QSize(221, 25));
        label_2->setStyleSheet(QString::fromUtf8("font: 9pt \"\351\230\277\351\207\214\345\267\264\345\267\264\346\231\256\346\203\240\344\275\223 M\";"));
        label_2->setTextFormat(Qt::RichText);
        label_2->setMargin(-16);
        label_2->setIndent(5);

        horizontalLayout_3->addWidget(label_2);

        horizontalSpacer_5 = new QSpacerItem(28, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        one2duo1 = new QRadioButton(KaoChang);
        buttonGroup = new QButtonGroup(KaoChang);
        buttonGroup->setObjectName(QStringLiteral("buttonGroup"));
        buttonGroup->addButton(one2duo1);
        one2duo1->setObjectName(QStringLiteral("one2duo1"));
        one2duo1->setStyleSheet(QString::fromUtf8("font: 11pt \"\351\230\277\351\207\214\345\267\264\345\267\264\346\231\256\346\203\240\344\275\223 L\";"));

        horizontalLayout_3->addWidget(one2duo1);

        oen2duo2 = new QRadioButton(KaoChang);
        buttonGroup->addButton(oen2duo2);
        oen2duo2->setObjectName(QStringLiteral("oen2duo2"));
        oen2duo2->setStyleSheet(QString::fromUtf8("font: 11pt \"\351\230\277\351\207\214\345\267\264\345\267\264\346\231\256\346\203\240\344\275\223 L\";"));
        oen2duo2->setChecked(true);

        horizontalLayout_3->addWidget(oen2duo2);


        horizontalLayout_5->addLayout(horizontalLayout_3);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_7);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 20, -1, -1);
        horizontalSpacer = new QSpacerItem(68, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton = new QPushButton(KaoChang);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        sizePolicy1.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy1);
        pushButton->setStyleSheet(QString::fromUtf8("font: 12pt \"\351\230\277\351\207\214\345\267\264\345\267\264\346\231\256\346\203\240\344\275\223 M\";"));

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(KaoChang);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\351\230\277\351\207\214\345\267\264\345\267\264\346\231\256\346\203\240\344\275\223 R"));
        font3.setPointSize(12);
        font3.setBold(false);
        font3.setItalic(false);
        font3.setWeight(50);
        pushButton_2->setFont(font3);

        horizontalLayout->addWidget(pushButton_2);

        horizontalSpacer_2 = new QSpacerItem(88, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(KaoChang);

        QMetaObject::connectSlotsByName(KaoChang);
    } // setupUi

    void retranslateUi(QWidget *KaoChang)
    {
        KaoChang->setWindowTitle(QApplication::translate("KaoChang", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("KaoChang", "<html><head/><body><p align=\"center\">\351\200\232\351\201\223-\350\200\203\345\234\272\351\205\215\347\275\256<span style=\" color:red; vertical-align:sub;\">(\350\200\203\345\234\272\345\217\267\344\270\272\350\275\254\346\215\242\350\277\207\345\220\216\347\232\204\346\240\274\345\274\217)</span></p></body></html>", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("KaoChang", "\345\216\237\350\247\206\351\242\221\350\267\257\345\212\262", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ___qtablewidgetitem->setToolTip(QApplication::translate("KaoChang", "\345\257\271\345\272\224\347\233\270\345\272\224\351\200\232\351\201\223", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("KaoChang", "\350\200\203\345\234\272\347\274\226\345\217\267", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("KaoChang", "\345\257\271\345\272\224\350\200\203\345\234\272\345\217\267\357\274\210\350\200\203\345\234\272\345\217\267\345\220\216\344\270\211\344\275\215\357\274\211", Q_NULLPTR));
        label_2->setText(QApplication::translate("KaoChang", "<html><head/><body><p align=\"center\"><span style=\" font-size:11pt;\">\346\226\207\344\273\266\346\225\260\351\207\217</span><span style=\" font-size:12pt; color:#ff0000; vertical-align:sub;\">(\344\270\272\344\270\200\345\240\202\350\200\203\350\257\225\345\220\216\350\247\206\351\242\221\346\226\207\344\273\266\346\225\260\351\207\217)</span></p></body></html>", Q_NULLPTR));
        one2duo1->setText(QApplication::translate("KaoChang", "\345\215\225\346\226\207\344\273\266", Q_NULLPTR));
        oen2duo2->setText(QApplication::translate("KaoChang", "\345\244\232\346\226\207\344\273\266", Q_NULLPTR));
        pushButton->setText(QApplication::translate("KaoChang", "\344\277\235 \345\255\230", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("KaoChang", "\346\240\207\345\207\206\345\214\226", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class KaoChang: public Ui_KaoChang {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KAOCHANG_H
