/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Fri Jan 21 13:05:11 2011
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *lb_Login;
    QLineEdit *text_Login;
    QLabel *lb_Pw;
    QLineEdit *text_Pw;
    QPushButton *btn_Login;
    QPushButton *btn_Cancel;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(400, 300);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(61, 71, 222, 95));
        gridLayout = new QGridLayout(widget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        lb_Login = new QLabel(widget);
        lb_Login->setObjectName(QString::fromUtf8("lb_Login"));

        gridLayout->addWidget(lb_Login, 0, 0, 1, 1);

        text_Login = new QLineEdit(widget);
        text_Login->setObjectName(QString::fromUtf8("text_Login"));

        gridLayout->addWidget(text_Login, 0, 1, 1, 1);

        lb_Pw = new QLabel(widget);
        lb_Pw->setObjectName(QString::fromUtf8("lb_Pw"));

        gridLayout->addWidget(lb_Pw, 1, 0, 1, 1);

        text_Pw = new QLineEdit(widget);
        text_Pw->setObjectName(QString::fromUtf8("text_Pw"));
        text_Pw->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(text_Pw, 1, 1, 1, 1);

        btn_Login = new QPushButton(widget);
        btn_Login->setObjectName(QString::fromUtf8("btn_Login"));

        gridLayout->addWidget(btn_Login, 2, 0, 1, 1);

        btn_Cancel = new QPushButton(widget);
        btn_Cancel->setObjectName(QString::fromUtf8("btn_Cancel"));

        gridLayout->addWidget(btn_Cancel, 2, 1, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 25));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        lb_Login->setText(QApplication::translate("MainWindow", "Login", 0, QApplication::UnicodeUTF8));
        lb_Pw->setText(QApplication::translate("MainWindow", "Password", 0, QApplication::UnicodeUTF8));
        text_Pw->setInputMask(QString());
        text_Pw->setText(QString());
        btn_Login->setText(QApplication::translate("MainWindow", "Login", 0, QApplication::UnicodeUTF8));
        btn_Cancel->setText(QApplication::translate("MainWindow", "Cancel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
