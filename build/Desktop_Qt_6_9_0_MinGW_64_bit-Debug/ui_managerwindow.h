/********************************************************************************
** Form generated from reading UI file 'managerwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANAGERWINDOW_H
#define UI_MANAGERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_managerWindow
{
public:
    QPushButton *addDeadBodyButton;
    QPushButton *viewDeadBodiesButton;
    QLabel *label;
    QLabel *label_2;
    QPushButton *searchDeadBodyButton;
    QPushButton *eidtDeadBodyButton;
    QPushButton *deleteDeadBodyButton;
    QPushButton *LogoutBtn;
    QPushButton *viewVisitorButton;
    QPushButton *addGraveButton;

    void setupUi(QDialog *managerWindow)
    {
        if (managerWindow->objectName().isEmpty())
            managerWindow->setObjectName("managerWindow");
        managerWindow->resize(1920, 1080);
        managerWindow->setMinimumSize(QSize(1920, 1080));
        managerWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 77, 56);"));
        addDeadBodyButton = new QPushButton(managerWindow);
        addDeadBodyButton->setObjectName("addDeadBodyButton");
        addDeadBodyButton->setGeometry(QRect(420, 230, 461, 41));
        addDeadBodyButton->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 12pt \"Segoe UI\";\n"
"background-color: rgb(0, 77, 56);"));
        viewDeadBodiesButton = new QPushButton(managerWindow);
        viewDeadBodiesButton->setObjectName("viewDeadBodiesButton");
        viewDeadBodiesButton->setGeometry(QRect(420, 280, 461, 41));
        viewDeadBodiesButton->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 12pt \"Segoe UI\";\n"
"background-color: rgb(0, 77, 56);"));
        label = new QLabel(managerWindow);
        label->setObjectName("label");
        label->setGeometry(QRect(390, 90, 521, 541));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_2 = new QLabel(managerWindow);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(450, 110, 411, 41));
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(0,0,0,0);\n"
"color: rgb(0, 77, 56);\n"
"font: 24pt \"Segoe MDL2 Assets\";"));
        searchDeadBodyButton = new QPushButton(managerWindow);
        searchDeadBodyButton->setObjectName("searchDeadBodyButton");
        searchDeadBodyButton->setGeometry(QRect(420, 330, 461, 41));
        searchDeadBodyButton->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 77, 56);\n"
"color: rgb(255, 255, 255);\n"
"font: 12pt \"Segoe UI\";"));
        eidtDeadBodyButton = new QPushButton(managerWindow);
        eidtDeadBodyButton->setObjectName("eidtDeadBodyButton");
        eidtDeadBodyButton->setGeometry(QRect(420, 380, 461, 41));
        eidtDeadBodyButton->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 77, 56);\n"
"color: rgb(255, 255, 255);\n"
"font: 12pt \"Segoe UI\";"));
        deleteDeadBodyButton = new QPushButton(managerWindow);
        deleteDeadBodyButton->setObjectName("deleteDeadBodyButton");
        deleteDeadBodyButton->setGeometry(QRect(420, 430, 461, 41));
        deleteDeadBodyButton->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 12pt \"Segoe UI\";\n"
"background-color: rgb(0, 77, 56);"));
        LogoutBtn = new QPushButton(managerWindow);
        LogoutBtn->setObjectName("LogoutBtn");
        LogoutBtn->setGeometry(QRect(420, 550, 461, 51));
        LogoutBtn->setStyleSheet(QString::fromUtf8("background-color: rgb(176, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
"font: 600 14pt \"Segoe UI\";"));
        viewVisitorButton = new QPushButton(managerWindow);
        viewVisitorButton->setObjectName("viewVisitorButton");
        viewVisitorButton->setGeometry(QRect(420, 480, 461, 41));
        viewVisitorButton->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 12pt \"Segoe UI\";\n"
"background-color: rgb(0, 77, 56);"));
        addGraveButton = new QPushButton(managerWindow);
        addGraveButton->setObjectName("addGraveButton");
        addGraveButton->setGeometry(QRect(420, 180, 461, 41));
        addGraveButton->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 12pt \"Segoe UI\";\n"
"background-color: rgb(0, 77, 56);"));
        label->raise();
        viewDeadBodiesButton->raise();
        addDeadBodyButton->raise();
        label_2->raise();
        searchDeadBodyButton->raise();
        eidtDeadBodyButton->raise();
        deleteDeadBodyButton->raise();
        LogoutBtn->raise();
        viewVisitorButton->raise();
        addGraveButton->raise();

        retranslateUi(managerWindow);

        QMetaObject::connectSlotsByName(managerWindow);
    } // setupUi

    void retranslateUi(QDialog *managerWindow)
    {
        managerWindow->setWindowTitle(QCoreApplication::translate("managerWindow", "Dialog", nullptr));
        addDeadBodyButton->setText(QCoreApplication::translate("managerWindow", "Add dead body", nullptr));
        viewDeadBodiesButton->setText(QCoreApplication::translate("managerWindow", "View Dead Bodies", nullptr));
        label->setText(QString());
        label_2->setText(QCoreApplication::translate("managerWindow", "Manger Management Panel", nullptr));
        searchDeadBodyButton->setText(QCoreApplication::translate("managerWindow", "Search Dead Body", nullptr));
        eidtDeadBodyButton->setText(QCoreApplication::translate("managerWindow", "Edit Dead Body", nullptr));
        deleteDeadBodyButton->setText(QCoreApplication::translate("managerWindow", "Delete dead body", nullptr));
        LogoutBtn->setText(QCoreApplication::translate("managerWindow", "Logout", nullptr));
        viewVisitorButton->setText(QCoreApplication::translate("managerWindow", "View Visitors", nullptr));
        addGraveButton->setText(QCoreApplication::translate("managerWindow", "Add Grave", nullptr));
    } // retranslateUi

};

namespace Ui {
    class managerWindow: public Ui_managerWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGERWINDOW_H
