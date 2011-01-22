/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Sat Jan 22 11:35:19 2011
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
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QScrollBar>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLineEdit *text_Search;
    QPushButton *btn_Search;
    QListWidget *listWidget;
    QScrollBar *verticalScrollBar;
    QLabel *lb_Title;
    QPushButton *btn_add;
    QPushButton *btn_Cancel;
    QPushButton *btn_Create;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(641, 471);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        text_Search = new QLineEdit(centralWidget);
        text_Search->setObjectName(QString::fromUtf8("text_Search"));
        text_Search->setGeometry(QRect(60, 60, 361, 31));
        btn_Search = new QPushButton(centralWidget);
        btn_Search->setObjectName(QString::fromUtf8("btn_Search"));
        btn_Search->setGeometry(QRect(462, 63, 85, 27));
        listWidget = new QListWidget(centralWidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(60, 110, 341, 271));
        verticalScrollBar = new QScrollBar(centralWidget);
        verticalScrollBar->setObjectName(QString::fromUtf8("verticalScrollBar"));
        verticalScrollBar->setGeometry(QRect(390, 110, 16, 271));
        verticalScrollBar->setOrientation(Qt::Vertical);
        lb_Title = new QLabel(centralWidget);
        lb_Title->setObjectName(QString::fromUtf8("lb_Title"));
        lb_Title->setGeometry(QRect(60, 20, 171, 21));
        btn_add = new QPushButton(centralWidget);
        btn_add->setObjectName(QString::fromUtf8("btn_add"));
        btn_add->setGeometry(QRect(460, 110, 91, 27));
        btn_Cancel = new QPushButton(centralWidget);
        btn_Cancel->setObjectName(QString::fromUtf8("btn_Cancel"));
        btn_Cancel->setGeometry(QRect(460, 210, 85, 27));
        btn_Create = new QPushButton(centralWidget);
        btn_Create->setObjectName(QString::fromUtf8("btn_Create"));
        btn_Create->setGeometry(QRect(460, 150, 85, 27));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 641, 25));
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
        btn_Search->setText(QApplication::translate("MainWindow", "Search", 0, QApplication::UnicodeUTF8));
        lb_Title->setText(QApplication::translate("MainWindow", "Add Waiting List", 0, QApplication::UnicodeUTF8));
        btn_add->setText(QApplication::translate("MainWindow", "Add Patient", 0, QApplication::UnicodeUTF8));
        btn_Cancel->setText(QApplication::translate("MainWindow", "Cancel", 0, QApplication::UnicodeUTF8));
        btn_Create->setText(QApplication::translate("MainWindow", "Create new", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
