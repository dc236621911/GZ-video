/********************************************************************************
** Form generated from reading UI file 'url_config_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_URL_CONFIG_DIALOG_H
#define UI_URL_CONFIG_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Url_Config_Dialog
{
public:
    QPushButton *pushButton;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;

    void setupUi(QDialog *Url_Config_Dialog)
    {
        if (Url_Config_Dialog->objectName().isEmpty())
            Url_Config_Dialog->setObjectName(QStringLiteral("Url_Config_Dialog"));
        Url_Config_Dialog->resize(400, 100);
        pushButton = new QPushButton(Url_Config_Dialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(160, 70, 75, 23));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(10);
        pushButton->setFont(font);
        layoutWidget = new QWidget(Url_Config_Dialog);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 16, 341, 41));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(12);
        label->setFont(font1);

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setFont(font);

        horizontalLayout->addWidget(lineEdit);


        retranslateUi(Url_Config_Dialog);

        QMetaObject::connectSlotsByName(Url_Config_Dialog);
    } // setupUi

    void retranslateUi(QDialog *Url_Config_Dialog)
    {
        Url_Config_Dialog->setWindowTitle(QApplication::translate("Url_Config_Dialog", "\347\231\273\351\231\206url\351\205\215\347\275\256", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Url_Config_Dialog", "\344\277\235 \345\255\230", Q_NULLPTR));
        label->setText(QApplication::translate("Url_Config_Dialog", "\347\231\273\351\231\206URL\357\274\232", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Url_Config_Dialog: public Ui_Url_Config_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_URL_CONFIG_DIALOG_H
