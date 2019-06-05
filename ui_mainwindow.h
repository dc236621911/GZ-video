/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_N;
    QAction *action_T;
    QAction *action_H;
    QAction *action_L;
    QAction *action_B;
    QAction *action_Q;
    QAction *action_I;
    QAction *action_P;
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer_3;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QSpacerItem *verticalSpacer;
    QTextBrowser *textBrowser;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_2;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *horizontalSpacer_2;
    QMenuBar *menuBar;
    QMenu *menu_F;
    QMenu *menu_S;
    QMenu *menu_H;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(800, 600);
        QIcon icon;
        icon.addFile(QStringLiteral(":/ico.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setStyleSheet(QString::fromUtf8("font: 12pt \"\351\230\277\351\207\214\345\267\264\345\267\264\346\231\256\346\203\240\344\275\223 M\";"));
        action_N = new QAction(MainWindow);
        action_N->setObjectName(QStringLiteral("action_N"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/myicon/icon/configure-2.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_N->setIcon(icon1);
        action_T = new QAction(MainWindow);
        action_T->setObjectName(QStringLiteral("action_T"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/myicon/icon/edit-find-user.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_T->setIcon(icon2);
        action_H = new QAction(MainWindow);
        action_H->setObjectName(QStringLiteral("action_H"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/myicon/icon/help.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_H->setIcon(icon3);
        action_L = new QAction(MainWindow);
        action_L->setObjectName(QStringLiteral("action_L"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/myicon/icon/call-start.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_L->setIcon(icon4);
        action_B = new QAction(MainWindow);
        action_B->setObjectName(QStringLiteral("action_B"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/myicon/icon/contact-new-3.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_B->setIcon(icon5);
        action_Q = new QAction(MainWindow);
        action_Q->setObjectName(QStringLiteral("action_Q"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/myicon/icon/application-exit-2.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Q->setIcon(icon6);
        action_I = new QAction(MainWindow);
        action_I->setObjectName(QStringLiteral("action_I"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/myicon/icon/document-preview-archive.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_I->setIcon(icon7);
        action_P = new QAction(MainWindow);
        action_P->setObjectName(QStringLiteral("action_P"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/myicon/icon/media-eject-2.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_P->setIcon(icon8);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayout_2 = new QHBoxLayout(centralWidget);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(138, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalSpacer_3 = new QSpacerItem(20, 108, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QString::fromUtf8("font: 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(0, 170, 255);\n"
""));

        verticalLayout->addWidget(label);

        verticalSpacer = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        textBrowser = new QTextBrowser(centralWidget);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setMinimumSize(QSize(511, 120));
        textBrowser->setStyleSheet(QString::fromUtf8("background-color: rgb(240, 240, 240);\n"
"font: 9pt \"\351\230\277\351\207\214\345\267\264\345\267\264\346\231\256\346\203\240\344\275\223 M\";\n"
"border:0px;\n"
""));

        verticalLayout->addWidget(textBrowser);

        verticalSpacer_2 = new QSpacerItem(20, 18, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);


        verticalLayout_2->addLayout(verticalLayout);

        verticalSpacer_4 = new QSpacerItem(20, 118, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_4);


        horizontalLayout->addLayout(verticalLayout_2);

        horizontalSpacer_2 = new QSpacerItem(138, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        horizontalLayout_2->addLayout(horizontalLayout);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 800, 28));
        menu_F = new QMenu(menuBar);
        menu_F->setObjectName(QStringLiteral("menu_F"));
        menu_S = new QMenu(menuBar);
        menu_S->setObjectName(QStringLiteral("menu_S"));
        menu_H = new QMenu(menuBar);
        menu_H->setObjectName(QStringLiteral("menu_H"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu_F->menuAction());
        menuBar->addAction(menu_S->menuAction());
        menuBar->addAction(menu_H->menuAction());
        menu_F->addAction(action_N);
        menu_F->addAction(action_T);
        menu_F->addAction(action_Q);
        menu_S->addAction(action_I);
        menu_S->addAction(action_P);
        menu_H->addAction(action_H);
        menu_H->addAction(action_L);
        menu_H->addAction(action_B);
        mainToolBar->addAction(action_N);
        mainToolBar->addAction(action_T);
        mainToolBar->addSeparator();
        mainToolBar->addAction(action_I);
        mainToolBar->addAction(action_P);
        mainToolBar->addSeparator();
        mainToolBar->addAction(action_H);
        mainToolBar->addAction(action_L);
        mainToolBar->addAction(action_B);
        mainToolBar->addSeparator();
        mainToolBar->addAction(action_Q);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\351\253\230\350\200\203\350\247\206\351\242\221\345\244\204\347\220\206\350\275\257\344\273\2662019\347\211\210", Q_NULLPTR));
        action_N->setText(QApplication::translate("MainWindow", "\351\205\215\347\275\256(&N)", Q_NULLPTR));
#ifndef QT_NO_STATUSTIP
        action_N->setStatusTip(QApplication::translate("MainWindow", "\350\247\206\351\242\221\345\255\230\345\202\250\351\205\215\347\275\256", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_SHORTCUT
        action_N->setShortcut(QApplication::translate("MainWindow", "Ctrl+N", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        action_T->setText(QApplication::translate("MainWindow", "\351\200\232\351\201\223(&T)", Q_NULLPTR));
#ifndef QT_NO_STATUSTIP
        action_T->setStatusTip(QApplication::translate("MainWindow", "\351\200\232\351\201\223-\350\200\203\345\234\272\351\205\215\347\275\256", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_SHORTCUT
        action_T->setShortcut(QApplication::translate("MainWindow", "Ctrl+T", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        action_H->setText(QApplication::translate("MainWindow", "\344\275\277\347\224\250\345\270\256\345\212\251(&H)", Q_NULLPTR));
#ifndef QT_NO_STATUSTIP
        action_H->setStatusTip(QApplication::translate("MainWindow", "\344\275\277\347\224\250\345\270\256\345\212\251", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_SHORTCUT
        action_H->setShortcut(QApplication::translate("MainWindow", "Ctrl+H", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        action_L->setText(QApplication::translate("MainWindow", "\350\201\224\347\263\273\344\275\234\350\200\205", Q_NULLPTR));
#ifndef QT_NO_STATUSTIP
        action_L->setStatusTip(QApplication::translate("MainWindow", "\350\201\224\347\263\273\344\275\234\350\200\205", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_SHORTCUT
        action_L->setShortcut(QApplication::translate("MainWindow", "Ctrl+L", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        action_B->setText(QApplication::translate("MainWindow", "\347\211\210\346\235\203\344\277\241\346\201\257(&B)", Q_NULLPTR));
#ifndef QT_NO_STATUSTIP
        action_B->setStatusTip(QApplication::translate("MainWindow", "\347\211\210\346\235\203\344\277\241\346\201\257", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_SHORTCUT
        action_B->setShortcut(QApplication::translate("MainWindow", "Ctrl+B", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        action_Q->setText(QApplication::translate("MainWindow", "\351\200\200\345\207\272(&Q)", Q_NULLPTR));
#ifndef QT_NO_STATUSTIP
        action_Q->setStatusTip(QApplication::translate("MainWindow", "\351\200\200\345\207\272", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_SHORTCUT
        action_Q->setShortcut(QApplication::translate("MainWindow", "Ctrl+Q", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        action_I->setText(QApplication::translate("MainWindow", "\350\247\206\351\242\221\344\277\241\346\201\257(&I)", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        action_I->setToolTip(QApplication::translate("MainWindow", "\350\247\206\351\242\221\344\277\241\346\201\257(I)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        action_I->setStatusTip(QApplication::translate("MainWindow", "\350\247\206\351\242\221\350\257\246\347\273\206\344\277\241\346\201\257", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_SHORTCUT
        action_I->setShortcut(QApplication::translate("MainWindow", "Ctrl+I", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        action_P->setText(QApplication::translate("MainWindow", "\346\222\255\346\224\276\351\252\214\350\257\201(&P)", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        action_P->setToolTip(QApplication::translate("MainWindow", "\346\222\255\346\224\276\351\252\214\350\257\201(P)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        action_P->setStatusTip(QApplication::translate("MainWindow", "\350\207\252\345\212\250\345\276\252\347\216\257\346\222\255\346\224\276\351\252\214\350\257\201", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_SHORTCUT
        action_P->setShortcut(QApplication::translate("MainWindow", "Ctrl+P", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        label->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-weight:600;\">\346\254\242\350\277\216\344\275\277\347\224\250\351\253\230\350\200\203\347\233\221\346\216\247\350\247\206\351\242\221\345\244\204\347\220\206\350\275\257\344\273\266\357\274\201</span></p></body></html>", Q_NULLPTR));
        textBrowser->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\351\230\277\351\207\214\345\267\264\345\267\264\346\231\256\346\203\240\344\275\223 M'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:5px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun'; font-size:10pt; font-weight:600; color:#ff0000;\">\346\263\250\346\204\217\357\274\232</span></p>\n"
"<p style=\" margin-top:5px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun';\">     1\343\200\201\346\234\254\350\275\257\344\273\266\345\237\272\344\272\216\345\216\237\346\234\211\350\247\206\351\242\221\346\226\207\344\273\266\345\220\215\345\222\214\347\233\256\345\275"
                        "\225\347\273\223\346\236\204\357\274\210\347\233\256\345\275\225\345\220\215\357\274\211\357\274\214\345\216\237\346\234\211\347\273\223\346\236\204\345\277\205\351\241\273\347\254\246\345\220\210\346\234\254\350\275\257\344\273\266\350\247\204\345\210\231\343\200\202</span></p>\n"
"<p style=\" margin-top:5px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun';\">     2\343\200\201\346\234\254\350\275\257\344\273\266\346\240\207\345\207\206\345\214\226\345\221\275\345\220\215\346\230\257\345\234\250\345\216\237\346\234\211\347\273\223\346\236\204\344\270\212\346\226\260\345\273\272\347\233\256\345\275\225\345\222\214\351\207\215\345\221\275\345\220\215\357\274\214\346\211\200\344\273\245\345\234\250\346\223\215\344\275\234\344\271\213\351\227\264\350\257\267\345\244\207\344\273\275\343\200\202</span></p>\n"
"<p style=\" margin-top:5px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span "
                        "style=\" font-family:'SimSun';\">     3\343\200\201\351\207\215\345\221\275\345\220\215\346\230\257\345\260\206\345\216\237\346\234\211\346\226\207\344\273\266\346\224\271\344\270\272\346\240\207\345\207\206\345\220\215\347\247\260\345\271\266\347\247\273\345\212\250\345\210\260\346\226\260\345\273\272\347\233\256\345\275\225\343\200\202</span></p>\n"
"<p style=\" margin-top:5px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun';\">     4\343\200\201\346\234\254\350\275\257\344\273\266\351\200\202\347\224\250\344\272\216\345\244\251\345\234\260\344\274\237\344\270\232\346\240\207\345\207\206\345\214\226\350\200\203\347\202\271\350\256\276\345\244\207\346\211\200\345\275\225\350\247\206\351\242\221\343\200\202</span></p>\n"
"<p style=\" margin-top:5px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun';\">    </span><span style=\" font-family:'SimSun'; font"
                        "-weight:600;\"> 5\343\200\201\344\275\277\347\224\250\345\211\215\350\257\267\350\256\244\347\234\237\351\230\205\350\257\273\345\270\256\345\212\251\346\226\207\346\241\243\343\200\202</span></p>\n"
"<p style=\" margin-top:5px; margin-bottom:0px; margin-left:3px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun'; font-weight:600;\">    </span><span style=\" font-family:'SimSun';\">6\343\200\201\346\234\254\350\275\257\344\273\266\344\270\273\350\246\201\345\212\237\350\203\275\345\234\250\344\272\216</span><span style=\" font-family:'SimSun'; font-weight:600;\">\350\247\206\351\242\221\346\226\207\344\273\266\345\256\214\346\225\264\346\200\247</span><span style=\" font-family:'SimSun';\">\347\232\204\346\243\200\346\265\213\343\200\202</span></p></body></html>", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt;\">\347\211\210\346\235\203\346\211\200\346\234\211\357\274\214\347\233\227\347\211\210\345\277\205\347\251\266\357\274\201</span></p></body></html>", Q_NULLPTR));
        menu_F->setTitle(QApplication::translate("MainWindow", "\346\226\207\344\273\266(&F)", Q_NULLPTR));
        menu_S->setTitle(QApplication::translate("MainWindow", "\350\247\206\351\242\221(&S)", Q_NULLPTR));
        menu_H->setTitle(QApplication::translate("MainWindow", "\345\270\256\345\212\251(&H)", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
