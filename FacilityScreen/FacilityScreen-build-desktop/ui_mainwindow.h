/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Fri Jan 21 16:54:51 2011
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
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QPushButton *btn_Bed;
    QSpacerItem *verticalSpacer;
    QPushButton *btn_Waiting;
    QSpacerItem *verticalSpacer_3;
    QPushButton *pushButton_4;
    QSpacerItem *verticalSpacer_2;
    QPushButton *pushButton_7;
    QSpacerItem *verticalSpacer_4;
    QPushButton *pushButton_6;
    QSpacerItem *verticalSpacer_5;
    QPushButton *pushButton_5;
    QLineEdit *text_numberBed;
    QLineEdit *text_Assign;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_2;
    QLabel *lb_Name;
    QLabel *lb_Addr;
    QLabel *lb_Phone;
    QWidget *widget2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_5;
    QPushButton *btn_Occu;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(666, 496);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(340, 90, 167, 314));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        btn_Bed = new QPushButton(widget);
        btn_Bed->setObjectName(QString::fromUtf8("btn_Bed"));

        verticalLayout->addWidget(btn_Bed);

        verticalSpacer = new QSpacerItem(20, 18, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        btn_Waiting = new QPushButton(widget);
        btn_Waiting->setObjectName(QString::fromUtf8("btn_Waiting"));

        verticalLayout->addWidget(btn_Waiting);

        verticalSpacer_3 = new QSpacerItem(20, 18, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        pushButton_4 = new QPushButton(widget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        verticalLayout->addWidget(pushButton_4);

        verticalSpacer_2 = new QSpacerItem(20, 18, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        pushButton_7 = new QPushButton(widget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));

        verticalLayout->addWidget(pushButton_7);

        verticalSpacer_4 = new QSpacerItem(20, 18, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);

        pushButton_6 = new QPushButton(widget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));

        verticalLayout->addWidget(pushButton_6);

        verticalSpacer_5 = new QSpacerItem(20, 18, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_5);

        pushButton_5 = new QPushButton(widget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));

        verticalLayout->addWidget(pushButton_5);

        text_numberBed = new QLineEdit(centralWidget);
        text_numberBed->setObjectName(QString::fromUtf8("text_numberBed"));
        text_numberBed->setGeometry(QRect(530, 90, 113, 27));
        text_Assign = new QLineEdit(centralWidget);
        text_Assign->setObjectName(QString::fromUtf8("text_Assign"));
        text_Assign->setGeometry(QRect(530, 210, 113, 27));
        widget1 = new QWidget(centralWidget);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(10, 20, 96, 161));
        verticalLayout_2 = new QVBoxLayout(widget1);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        lb_Name = new QLabel(widget1);
        lb_Name->setObjectName(QString::fromUtf8("lb_Name"));
        QFont font;
        font.setFamily(QString::fromUtf8("AlArabiya"));
        font.setPointSize(22);
        lb_Name->setFont(font);

        verticalLayout_2->addWidget(lb_Name);

        lb_Addr = new QLabel(widget1);
        lb_Addr->setObjectName(QString::fromUtf8("lb_Addr"));

        verticalLayout_2->addWidget(lb_Addr);

        lb_Phone = new QLabel(widget1);
        lb_Phone->setObjectName(QString::fromUtf8("lb_Phone"));

        verticalLayout_2->addWidget(lb_Phone);

        widget2 = new QWidget(centralWidget);
        widget2->setObjectName(QString::fromUtf8("widget2"));
        widget2->setGeometry(QRect(228, 10, 141, 29));
        horizontalLayout = new QHBoxLayout(widget2);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(widget2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout->addWidget(label_5);

        btn_Occu = new QPushButton(widget2);
        btn_Occu->setObjectName(QString::fromUtf8("btn_Occu"));

        horizontalLayout->addWidget(btn_Occu);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 666, 25));
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
        btn_Bed->setText(QApplication::translate("MainWindow", "Add Bed", 0, QApplication::UnicodeUTF8));
        btn_Waiting->setText(QApplication::translate("MainWindow", "Add waiting list", 0, QApplication::UnicodeUTF8));
        pushButton_4->setText(QApplication::translate("MainWindow", "Assign Patient to a bed", 0, QApplication::UnicodeUTF8));
        pushButton_7->setText(QApplication::translate("MainWindow", "PushButton", 0, QApplication::UnicodeUTF8));
        pushButton_6->setText(QApplication::translate("MainWindow", "PushButton", 0, QApplication::UnicodeUTF8));
        pushButton_5->setText(QApplication::translate("MainWindow", "PushButton", 0, QApplication::UnicodeUTF8));
        text_numberBed->setText(QApplication::translate("MainWindow", "1", 0, QApplication::UnicodeUTF8));
        text_Assign->setText(QApplication::translate("MainWindow", "1", 0, QApplication::UnicodeUTF8));
        lb_Name->setText(QApplication::translate("MainWindow", "Facility", 0, QApplication::UnicodeUTF8));
        lb_Addr->setText(QApplication::translate("MainWindow", "Address", 0, QApplication::UnicodeUTF8));
        lb_Phone->setText(QApplication::translate("MainWindow", "Phone number", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("MainWindow", "Occupa", 0, QApplication::UnicodeUTF8));
        btn_Occu->setText(QApplication::translate("MainWindow", "200/300", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
