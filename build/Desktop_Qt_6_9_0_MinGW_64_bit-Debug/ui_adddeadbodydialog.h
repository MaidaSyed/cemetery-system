/********************************************************************************
** Form generated from reading UI file 'adddeadbodydialog.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDDEADBODYDIALOG_H
#define UI_ADDDEADBODYDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_AddDeadBodyDialog
{
public:
    QLineEdit *nameLineEdit;
    QSpinBox *ageLineEdit;
    QLineEdit *causeLineEdit;
    QDateEdit *dateLineEdit;
    QLineEdit *heightLineEdit;
    QPushButton *assigngrave;
    QLabel *name;
    QPushButton *backButton;
    QLabel *label;
    QLabel *label_2;
    QLabel *name_2;
    QLabel *name_3;
    QLabel *name_4;
    QLabel *name_5;

    void setupUi(QDialog *AddDeadBodyDialog)
    {
        if (AddDeadBodyDialog->objectName().isEmpty())
            AddDeadBodyDialog->setObjectName("AddDeadBodyDialog");
        AddDeadBodyDialog->resize(1920, 1080);
        AddDeadBodyDialog->setMinimumSize(QSize(1920, 1080));
        AddDeadBodyDialog->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 77, 56);\n"
"color: rgb(255, 255, 255);"));
        nameLineEdit = new QLineEdit(AddDeadBodyDialog);
        nameLineEdit->setObjectName("nameLineEdit");
        nameLineEdit->setGeometry(QRect(440, 280, 391, 41));
        nameLineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        ageLineEdit = new QSpinBox(AddDeadBodyDialog);
        ageLineEdit->setObjectName("ageLineEdit");
        ageLineEdit->setGeometry(QRect(440, 370, 151, 41));
        ageLineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"font: 11pt \"Segoe UI\";"));
        causeLineEdit = new QLineEdit(AddDeadBodyDialog);
        causeLineEdit->setObjectName("causeLineEdit");
        causeLineEdit->setGeometry(QRect(440, 460, 261, 41));
        causeLineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"font: 11pt \"Segoe UI\";"));
        dateLineEdit = new QDateEdit(AddDeadBodyDialog);
        dateLineEdit->setObjectName("dateLineEdit");
        dateLineEdit->setGeometry(QRect(630, 370, 201, 41));
        dateLineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"font: 11pt \"Segoe UI\";"));
        heightLineEdit = new QLineEdit(AddDeadBodyDialog);
        heightLineEdit->setObjectName("heightLineEdit");
        heightLineEdit->setGeometry(QRect(720, 460, 111, 41));
        heightLineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"font: 11pt \"Segoe UI\";"));
        assigngrave = new QPushButton(AddDeadBodyDialog);
        assigngrave->setObjectName("assigngrave");
        assigngrave->setGeometry(QRect(440, 520, 191, 41));
        assigngrave->setStyleSheet(QString::fromUtf8("font: 14pt \"Segoe UI\";\n"
"background-color: rgb(0, 77, 56);\n"
"color: rgb(255, 255, 255);"));
        name = new QLabel(AddDeadBodyDialog);
        name->setObjectName("name");
        name->setGeometry(QRect(450, 250, 81, 16));
        name->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"font: 13pt \"Segoe UI\";"));
        backButton = new QPushButton(AddDeadBodyDialog);
        backButton->setObjectName("backButton");
        backButton->setGeometry(QRect(640, 520, 191, 41));
        backButton->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 77, 56);\n"
"font: 14pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);"));
        label = new QLabel(AddDeadBodyDialog);
        label->setObjectName("label");
        label->setGeometry(QRect(400, 180, 471, 411));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_2 = new QLabel(AddDeadBodyDialog);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(530, 200, 251, 41));
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(0,0,0,0);\n"
"font: 22pt \"Segoe UI\";\n"
"color: rgb(0, 77, 56);"));
        name_2 = new QLabel(AddDeadBodyDialog);
        name_2->setObjectName("name_2");
        name_2->setGeometry(QRect(450, 330, 81, 31));
        name_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"font: 13pt \"Segoe UI\";"));
        name_3 = new QLabel(AddDeadBodyDialog);
        name_3->setObjectName("name_3");
        name_3->setGeometry(QRect(640, 340, 121, 16));
        name_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"font: 13pt \"Segoe UI\";"));
        name_4 = new QLabel(AddDeadBodyDialog);
        name_4->setObjectName("name_4");
        name_4->setGeometry(QRect(450, 430, 141, 16));
        name_4->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"font: 13pt \"Segoe UI\";"));
        name_5 = new QLabel(AddDeadBodyDialog);
        name_5->setObjectName("name_5");
        name_5->setGeometry(QRect(720, 420, 101, 31));
        name_5->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"font: 13pt \"Segoe UI\";"));
        label->raise();
        nameLineEdit->raise();
        ageLineEdit->raise();
        causeLineEdit->raise();
        dateLineEdit->raise();
        heightLineEdit->raise();
        assigngrave->raise();
        name->raise();
        backButton->raise();
        label_2->raise();
        name_2->raise();
        name_3->raise();
        name_4->raise();
        name_5->raise();

        retranslateUi(AddDeadBodyDialog);

        QMetaObject::connectSlotsByName(AddDeadBodyDialog);
    } // setupUi

    void retranslateUi(QDialog *AddDeadBodyDialog)
    {
        AddDeadBodyDialog->setWindowTitle(QCoreApplication::translate("AddDeadBodyDialog", "Dialog", nullptr));
        assigngrave->setText(QCoreApplication::translate("AddDeadBodyDialog", "Add body", nullptr));
        name->setText(QCoreApplication::translate("AddDeadBodyDialog", "Name:", nullptr));
        backButton->setText(QCoreApplication::translate("AddDeadBodyDialog", "back", nullptr));
        label->setText(QString());
        label_2->setText(QCoreApplication::translate("AddDeadBodyDialog", "Add Dead Body", nullptr));
        name_2->setText(QCoreApplication::translate("AddDeadBodyDialog", "Age:", nullptr));
        name_3->setText(QCoreApplication::translate("AddDeadBodyDialog", "Date of Death:", nullptr));
        name_4->setText(QCoreApplication::translate("AddDeadBodyDialog", "Cause of death:", nullptr));
        name_5->setText(QCoreApplication::translate("AddDeadBodyDialog", "Height in cm:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddDeadBodyDialog: public Ui_AddDeadBodyDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDDEADBODYDIALOG_H
