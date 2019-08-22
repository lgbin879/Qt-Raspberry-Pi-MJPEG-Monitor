/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *serverIpLabel1;
    QLineEdit *serverIpEdit1;
    QLineEdit *serverIpEdit2;
    QLabel *serverIpLable2;
    QLineEdit *serverPortEdit1;
    QLabel *serverPortLable1;
    QLabel *serverPortLable2;
    QLineEdit *serverPortEdit2;
    QPushButton *connectBtn1;
    QPushButton *connectBtn2;
    QPushButton *snapBtn1;
    QPushButton *snapBtn2;
    QPushButton *swapBtn;
    QLabel *imgLable1;
    QLabel *imgLable2;
    QPushButton *rmBtn1;
    QPushButton *rmBtn2;
    QPushButton *imgLeft1;
    QPushButton *imgRight1;
    QPushButton *imgLeft2;
    QPushButton *imgRight2;
    QLineEdit *duEdit1;
    QPushButton *recordBtn1;
    QLabel *duLable1;
    QLabel *duLable2;
    QPushButton *recordBtn2;
    QLineEdit *duEdit2;
    QLabel *statusLable2;
    QLabel *imgLable3;
    QLabel *statusLable1;
    QPushButton *diffBtn1;
    QPushButton *diffBtn2;
    QPushButton *openBtn;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1340, 764);
        MainWindow->setMinimumSize(QSize(640, 480));
        MainWindow->setMaximumSize(QSize(65536, 65536));
        MainWindow->setBaseSize(QSize(1340, 750));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        serverIpLabel1 = new QLabel(centralWidget);
        serverIpLabel1->setObjectName(QStringLiteral("serverIpLabel1"));
        serverIpLabel1->setGeometry(QRect(20, 530, 71, 17));
        serverIpEdit1 = new QLineEdit(centralWidget);
        serverIpEdit1->setObjectName(QStringLiteral("serverIpEdit1"));
        serverIpEdit1->setGeometry(QRect(100, 530, 113, 25));
        serverIpEdit2 = new QLineEdit(centralWidget);
        serverIpEdit2->setObjectName(QStringLiteral("serverIpEdit2"));
        serverIpEdit2->setGeometry(QRect(1100, 530, 113, 25));
        serverIpLable2 = new QLabel(centralWidget);
        serverIpLable2->setObjectName(QStringLiteral("serverIpLable2"));
        serverIpLable2->setGeometry(QRect(1020, 530, 71, 17));
        serverPortEdit1 = new QLineEdit(centralWidget);
        serverPortEdit1->setObjectName(QStringLiteral("serverPortEdit1"));
        serverPortEdit1->setGeometry(QRect(100, 560, 113, 25));
        serverPortLable1 = new QLabel(centralWidget);
        serverPortLable1->setObjectName(QStringLiteral("serverPortLable1"));
        serverPortLable1->setGeometry(QRect(50, 560, 41, 17));
        serverPortLable2 = new QLabel(centralWidget);
        serverPortLable2->setObjectName(QStringLiteral("serverPortLable2"));
        serverPortLable2->setGeometry(QRect(1050, 560, 41, 17));
        serverPortEdit2 = new QLineEdit(centralWidget);
        serverPortEdit2->setObjectName(QStringLiteral("serverPortEdit2"));
        serverPortEdit2->setGeometry(QRect(1100, 560, 113, 25));
        connectBtn1 = new QPushButton(centralWidget);
        connectBtn1->setObjectName(QStringLiteral("connectBtn1"));
        connectBtn1->setGeometry(QRect(240, 520, 89, 25));
        connectBtn2 = new QPushButton(centralWidget);
        connectBtn2->setObjectName(QStringLiteral("connectBtn2"));
        connectBtn2->setGeometry(QRect(1230, 520, 89, 25));
        snapBtn1 = new QPushButton(centralWidget);
        snapBtn1->setObjectName(QStringLiteral("snapBtn1"));
        snapBtn1->setGeometry(QRect(240, 550, 89, 25));
        snapBtn2 = new QPushButton(centralWidget);
        snapBtn2->setObjectName(QStringLiteral("snapBtn2"));
        snapBtn2->setGeometry(QRect(1230, 550, 89, 25));
        swapBtn = new QPushButton(centralWidget);
        swapBtn->setObjectName(QStringLiteral("swapBtn"));
        swapBtn->setGeometry(QRect(630, 660, 89, 25));
        imgLable1 = new QLabel(centralWidget);
        imgLable1->setObjectName(QStringLiteral("imgLable1"));
        imgLable1->setGeometry(QRect(380, 500, 160, 120));
        imgLable2 = new QLabel(centralWidget);
        imgLable2->setObjectName(QStringLiteral("imgLable2"));
        imgLable2->setGeometry(QRect(810, 500, 160, 120));
        rmBtn1 = new QPushButton(centralWidget);
        rmBtn1->setObjectName(QStringLiteral("rmBtn1"));
        rmBtn1->setGeometry(QRect(240, 610, 91, 25));
        rmBtn2 = new QPushButton(centralWidget);
        rmBtn2->setObjectName(QStringLiteral("rmBtn2"));
        rmBtn2->setGeometry(QRect(1230, 610, 91, 25));
        imgLeft1 = new QPushButton(centralWidget);
        imgLeft1->setObjectName(QStringLiteral("imgLeft1"));
        imgLeft1->setGeometry(QRect(400, 630, 21, 25));
        imgRight1 = new QPushButton(centralWidget);
        imgRight1->setObjectName(QStringLiteral("imgRight1"));
        imgRight1->setGeometry(QRect(500, 630, 21, 25));
        imgLeft2 = new QPushButton(centralWidget);
        imgLeft2->setObjectName(QStringLiteral("imgLeft2"));
        imgLeft2->setGeometry(QRect(830, 630, 21, 25));
        imgRight2 = new QPushButton(centralWidget);
        imgRight2->setObjectName(QStringLiteral("imgRight2"));
        imgRight2->setGeometry(QRect(930, 630, 21, 25));
        duEdit1 = new QLineEdit(centralWidget);
        duEdit1->setObjectName(QStringLiteral("duEdit1"));
        duEdit1->setGeometry(QRect(102, 590, 111, 25));
        recordBtn1 = new QPushButton(centralWidget);
        recordBtn1->setObjectName(QStringLiteral("recordBtn1"));
        recordBtn1->setGeometry(QRect(240, 580, 89, 25));
        duLable1 = new QLabel(centralWidget);
        duLable1->setObjectName(QStringLiteral("duLable1"));
        duLable1->setGeometry(QRect(10, 590, 81, 20));
        duLable2 = new QLabel(centralWidget);
        duLable2->setObjectName(QStringLiteral("duLable2"));
        duLable2->setGeometry(QRect(1008, 590, 81, 20));
        recordBtn2 = new QPushButton(centralWidget);
        recordBtn2->setObjectName(QStringLiteral("recordBtn2"));
        recordBtn2->setGeometry(QRect(1230, 580, 89, 25));
        duEdit2 = new QLineEdit(centralWidget);
        duEdit2->setObjectName(QStringLiteral("duEdit2"));
        duEdit2->setGeometry(QRect(1100, 590, 111, 25));
        statusLable2 = new QLabel(centralWidget);
        statusLable2->setObjectName(QStringLiteral("statusLable2"));
        statusLable2->setGeometry(QRect(930, 660, 391, 20));
        statusLable2->setStyleSheet(QLatin1String("gridline-color: rgb(136, 138, 133);\n"
"gridline-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));"));
        statusLable2->setWordWrap(false);
        statusLable2->setTextInteractionFlags(Qt::LinksAccessibleByKeyboard);
        imgLable3 = new QLabel(centralWidget);
        imgLable3->setObjectName(QStringLiteral("imgLable3"));
        imgLable3->setGeometry(QRect(600, 500, 160, 120));
        statusLable1 = new QLabel(centralWidget);
        statusLable1->setObjectName(QStringLiteral("statusLable1"));
        statusLable1->setGeometry(QRect(10, 660, 391, 20));
        statusLable1->setStyleSheet(QLatin1String("gridline-color: rgb(136, 138, 133);\n"
"gridline-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));"));
        statusLable1->setWordWrap(false);
        statusLable1->setTextInteractionFlags(Qt::LinksAccessibleByKeyboard);
        diffBtn1 = new QPushButton(centralWidget);
        diffBtn1->setObjectName(QStringLiteral("diffBtn1"));
        diffBtn1->setGeometry(QRect(430, 630, 61, 25));
        diffBtn2 = new QPushButton(centralWidget);
        diffBtn2->setObjectName(QStringLiteral("diffBtn2"));
        diffBtn2->setGeometry(QRect(860, 630, 61, 25));
        openBtn = new QPushButton(centralWidget);
        openBtn->setObjectName(QStringLiteral("openBtn"));
        openBtn->setGeometry(QRect(630, 630, 89, 25));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1340, 28));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        serverIpLabel1->setText(QApplication::translate("MainWindow", "server1 ip:", nullptr));
        serverIpEdit1->setText(QApplication::translate("MainWindow", "192.168.1.61", nullptr));
        serverIpEdit2->setInputMask(QString());
        serverIpEdit2->setText(QApplication::translate("MainWindow", "192.168.1.8", nullptr));
        serverIpLable2->setText(QApplication::translate("MainWindow", "server2 ip:", nullptr));
        serverPortEdit1->setText(QApplication::translate("MainWindow", "8090", nullptr));
        serverPortLable1->setText(QApplication::translate("MainWindow", "port:", nullptr));
        serverPortLable2->setText(QApplication::translate("MainWindow", "port:", nullptr));
        serverPortEdit2->setText(QApplication::translate("MainWindow", "8099", nullptr));
        connectBtn1->setText(QApplication::translate("MainWindow", "connect", nullptr));
        connectBtn2->setText(QApplication::translate("MainWindow", "connect", nullptr));
        snapBtn1->setText(QApplication::translate("MainWindow", "snap", nullptr));
        snapBtn2->setText(QApplication::translate("MainWindow", "snap", nullptr));
        swapBtn->setText(QApplication::translate("MainWindow", "swap", nullptr));
        imgLable1->setText(QString());
        imgLable2->setText(QString());
        rmBtn1->setText(QApplication::translate("MainWindow", "delete", nullptr));
        rmBtn2->setText(QApplication::translate("MainWindow", "delete", nullptr));
        imgLeft1->setText(QApplication::translate("MainWindow", "<", nullptr));
        imgRight1->setText(QApplication::translate("MainWindow", ">", nullptr));
        imgLeft2->setText(QApplication::translate("MainWindow", "<", nullptr));
        imgRight2->setText(QApplication::translate("MainWindow", ">", nullptr));
        duEdit1->setText(QApplication::translate("MainWindow", "30", nullptr));
        recordBtn1->setText(QApplication::translate("MainWindow", "record", nullptr));
        duLable1->setText(QApplication::translate("MainWindow", "duration(s):", nullptr));
        duLable2->setText(QApplication::translate("MainWindow", "duration(s):", nullptr));
        recordBtn2->setText(QApplication::translate("MainWindow", "record", nullptr));
        duEdit2->setText(QApplication::translate("MainWindow", "30", nullptr));
        statusLable2->setText(QString());
        imgLable3->setText(QString());
        statusLable1->setText(QString());
        diffBtn1->setText(QApplication::translate("MainWindow", "diff", nullptr));
        diffBtn2->setText(QApplication::translate("MainWindow", "diff", nullptr));
        openBtn->setText(QApplication::translate("MainWindow", "open", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
