/********************************************************************************
** Form generated from reading UI file 'guardwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUARDWINDOW_H
#define UI_GUARDWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_guardWindow
{
public:
    QFrame *frame;
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *logoutBtn;

    void setupUi(QDialog *guardWindow)
    {
        if (guardWindow->objectName().isEmpty())
            guardWindow->setObjectName("guardWindow");
        guardWindow->resize(1920, 1080);
        guardWindow->setMinimumSize(QSize(1920, 1080));
        guardWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 77, 56);\n"
"color: rgb(255, 255, 255);"));
        frame = new QFrame(guardWindow);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(410, 250, 511, 301));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        label = new QLabel(frame);
        label->setObjectName("label");
        label->setGeometry(QRect(100, 20, 401, 51));
        label->setStyleSheet(QString::fromUtf8("font: 20pt \"Segoe UI\";\n"
"color: rgb(0, 0, 0);"));
        pushButton = new QPushButton(frame);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(70, 90, 371, 51));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 77, 56);\n"
"font: 14pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);"));
        pushButton_2 = new QPushButton(frame);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(70, 150, 371, 51));
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 77, 56);\n"
"color: rgb(255, 255, 255);\n"
"font: 14pt \"Segoe UI\";"));
        logoutBtn = new QPushButton(frame);
        logoutBtn->setObjectName("logoutBtn");
        logoutBtn->setGeometry(QRect(70, 230, 371, 51));
        logoutBtn->setStyleSheet(QString::fromUtf8("background-color: rgb(176, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
"font: 600 14pt \"Segoe UI\";"));

        retranslateUi(guardWindow);

        QMetaObject::connectSlotsByName(guardWindow);
    } // setupUi

    void retranslateUi(QDialog *guardWindow)
    {
        guardWindow->setWindowTitle(QCoreApplication::translate("guardWindow", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("guardWindow", "Guard Management Panel", nullptr));
        pushButton->setText(QCoreApplication::translate("guardWindow", "View All Dead Bodies", nullptr));
        pushButton_2->setText(QCoreApplication::translate("guardWindow", "Maintain Dead Body", nullptr));
        logoutBtn->setText(QCoreApplication::translate("guardWindow", "Logout", nullptr));
    } // retranslateUi

};

namespace Ui {
    class guardWindow: public Ui_guardWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUARDWINDOW_H
