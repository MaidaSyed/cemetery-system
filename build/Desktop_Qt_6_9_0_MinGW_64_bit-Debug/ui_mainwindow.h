/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label_5;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QPushButton *login;
    QPushButton *pushButton;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1920, 1080);
        MainWindow->setMinimumSize(QSize(1920, 1080));
        MainWindow->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 77, 56);\n"
"\n"
"\n"
""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(410, 90, 471, 541));
        label_5->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        label_5->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_5->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_5->setWordWrap(false);
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(490, 110, 321, 51));
        label->setStyleSheet(QString::fromUtf8("background-color: rgba(0, 0, 0, 0);\n"
"color: rgb(0, 77, 56);\n"
"font: 26pt \"Segoe MDL2 Assets\";"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(450, 180, 151, 41));
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0,0);\n"
"\n"
"background-color: rgba(0, 0, 0, 0);\n"
"font: 15pt \"Segoe UI\";"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(450, 280, 131, 41));
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(0, 0,0);\n"
"\n"
"background-color: rgba(0, 0, 0, 0);\n"
"font: 15pt \"Segoe UI\";"));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(450, 380, 161, 41));
        label_4->setStyleSheet(QString::fromUtf8("background-color: rgba(0, 0, 0, 0);\n"
"color: rgb(0,0,0);\n"
"\n"
"font: 15pt \"Segoe UI\";"));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(450, 220, 391, 41));
        lineEdit->setStyleSheet(QString::fromUtf8("border-color:rgb(0, 77, 56);\n"
"color: rgb(0, 0, 0);\n"
"background-color: rgb(0,0,0,0);\n"
"font: 12pt \"Segoe UI\";"));
        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(450, 320, 391, 41));
        lineEdit_2->setStyleSheet(QString::fromUtf8("border-color: rgb(170,170,255);\n"
"color: rgb(0, 0, 0);\n"
"background-color: rgb(0,0,0,0);\n"
"font: 12pt \"Segoe UI\";\n"
""));
        lineEdit_3 = new QLineEdit(centralwidget);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setGeometry(QRect(450, 420, 391, 41));
        lineEdit_3->setStyleSheet(QString::fromUtf8("border-color: rgb(0, 77, 56);\n"
"color: rgb(0, 0, 0);\n"
"background-color: rgb(0,0,0,0);\n"
"font: 12pt \"Segoe UI\";"));
        login = new QPushButton(centralwidget);
        login->setObjectName("login");
        login->setGeometry(QRect(450, 480, 391, 51));
        login->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 77, 56);\n"
"color: rgb(255, 255, 255);\n"
"font: 15pt \"Segoe MDL2 Assets\";\n"
""));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(450, 550, 391, 51));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 77, 56);\n"
"color: rgb(255, 255, 255);\n"
"font: 14pt \"Segoe MDL2 Assets\";\n"
""));
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_5->setText(QString());
        label->setText(QCoreApplication::translate("MainWindow", " AUTHORITY LOGIN", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", " Enter Role: ", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", " Enter Email: ", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", " Enter Password: ", nullptr));
        login->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Visit as User", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
