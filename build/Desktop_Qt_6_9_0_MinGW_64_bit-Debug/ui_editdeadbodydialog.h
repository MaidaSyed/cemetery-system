/********************************************************************************
** Form generated from reading UI file 'editdeadbodydialog.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITDEADBODYDIALOG_H
#define UI_EDITDEADBODYDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_EditDeadBodyDialog
{
public:
    QLineEdit *nameEdit;
    QLineEdit *causeEdit;
    QLabel *label_3;
    QLineEdit *ageEdit;
    QPushButton *submitButton;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QPushButton *back;

    void setupUi(QDialog *EditDeadBodyDialog)
    {
        if (EditDeadBodyDialog->objectName().isEmpty())
            EditDeadBodyDialog->setObjectName("EditDeadBodyDialog");
        EditDeadBodyDialog->resize(1920, 1080);
        EditDeadBodyDialog->setMinimumSize(QSize(1920, 1080));
        EditDeadBodyDialog->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 77,56);\n"
"color: rgb(255, 255, 255);"));
        nameEdit = new QLineEdit(EditDeadBodyDialog);
        nameEdit->setObjectName("nameEdit");
        nameEdit->setGeometry(QRect(650, 290, 221, 41));
        nameEdit->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(0,0,0,0);"));
        causeEdit = new QLineEdit(EditDeadBodyDialog);
        causeEdit->setObjectName("causeEdit");
        causeEdit->setGeometry(QRect(650, 410, 221, 41));
        causeEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(0,0,0,0);\n"
"color: rgb(0, 0, 0);"));
        label_3 = new QLabel(EditDeadBodyDialog);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(510, 420, 121, 21));
        label_3->setStyleSheet(QString::fromUtf8("font: 12pt \"Segoe UI\";\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        ageEdit = new QLineEdit(EditDeadBodyDialog);
        ageEdit->setObjectName("ageEdit");
        ageEdit->setGeometry(QRect(650, 350, 221, 41));
        ageEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(0,0,0,0);\n"
"color: rgb(0, 0, 0);"));
        submitButton = new QPushButton(EditDeadBodyDialog);
        submitButton->setObjectName("submitButton");
        submitButton->setGeometry(QRect(510, 480, 161, 41));
        submitButton->setStyleSheet(QString::fromUtf8("background-color: rgb(0,77,56);\n"
"color: rgb(255, 255, 255);\n"
"font: 600 14pt \"Segoe UI\";"));
        label_4 = new QLabel(EditDeadBodyDialog);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(470, 210, 441, 331));
        label_4->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
""));
        label_5 = new QLabel(EditDeadBodyDialog);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(630, 230, 161, 31));
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);\n"
"font: 600 22pt \"Segoe UI\";"));
        label_6 = new QLabel(EditDeadBodyDialog);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(510, 360, 121, 21));
        label_6->setStyleSheet(QString::fromUtf8("font: 12pt \"Segoe UI\";\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        label_7 = new QLabel(EditDeadBodyDialog);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(510, 290, 121, 21));
        label_7->setStyleSheet(QString::fromUtf8("font: 12pt \"Segoe UI\";\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        back = new QPushButton(EditDeadBodyDialog);
        back->setObjectName("back");
        back->setGeometry(QRect(710, 480, 161, 41));
        back->setStyleSheet(QString::fromUtf8("background-color: rgb(0,77,56);\n"
"color: rgb(255, 255, 255);\n"
"font: 600 14pt \"Segoe UI\";"));
        label_4->raise();
        nameEdit->raise();
        causeEdit->raise();
        label_3->raise();
        ageEdit->raise();
        submitButton->raise();
        label_5->raise();
        label_6->raise();
        label_7->raise();
        back->raise();

        retranslateUi(EditDeadBodyDialog);

        QMetaObject::connectSlotsByName(EditDeadBodyDialog);
    } // setupUi

    void retranslateUi(QDialog *EditDeadBodyDialog)
    {
        EditDeadBodyDialog->setWindowTitle(QCoreApplication::translate("EditDeadBodyDialog", "Dialog", nullptr));
        label_3->setText(QCoreApplication::translate("EditDeadBodyDialog", "cause of death:", nullptr));
        submitButton->setText(QCoreApplication::translate("EditDeadBodyDialog", "Submit", nullptr));
        label_4->setText(QString());
        label_5->setText(QCoreApplication::translate("EditDeadBodyDialog", "Edit Panel", nullptr));
        label_6->setText(QCoreApplication::translate("EditDeadBodyDialog", "Age:", nullptr));
        label_7->setText(QCoreApplication::translate("EditDeadBodyDialog", "Name: ", nullptr));
        back->setText(QCoreApplication::translate("EditDeadBodyDialog", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditDeadBodyDialog: public Ui_EditDeadBodyDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITDEADBODYDIALOG_H
