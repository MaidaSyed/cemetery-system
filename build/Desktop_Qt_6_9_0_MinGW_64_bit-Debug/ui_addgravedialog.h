/********************************************************************************
** Form generated from reading UI file 'addgravedialog.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDGRAVEDIALOG_H
#define UI_ADDGRAVEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_addGraveDialog
{
public:
    QLineEdit *graveNoLineEdit;
    QLineEdit *locationLineEdit;
    QLineEdit *heightLineEdit;
    QPushButton *addButton;
    QPushButton *backButton;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;

    void setupUi(QDialog *addGraveDialog)
    {
        if (addGraveDialog->objectName().isEmpty())
            addGraveDialog->setObjectName("addGraveDialog");
        addGraveDialog->resize(1920, 1080);
        addGraveDialog->setMinimumSize(QSize(1920, 1080));
        addGraveDialog->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 77, 56);"));
        graveNoLineEdit = new QLineEdit(addGraveDialog);
        graveNoLineEdit->setObjectName("graveNoLineEdit");
        graveNoLineEdit->setGeometry(QRect(590, 330, 231, 41));
        graveNoLineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        locationLineEdit = new QLineEdit(addGraveDialog);
        locationLineEdit->setObjectName("locationLineEdit");
        locationLineEdit->setGeometry(QRect(590, 380, 231, 41));
        locationLineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        heightLineEdit = new QLineEdit(addGraveDialog);
        heightLineEdit->setObjectName("heightLineEdit");
        heightLineEdit->setGeometry(QRect(590, 430, 231, 41));
        heightLineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        addButton = new QPushButton(addGraveDialog);
        addButton->setObjectName("addButton");
        addButton->setGeometry(QRect(470, 490, 161, 41));
        addButton->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 77, 56);\n"
"font: 14pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);"));
        backButton = new QPushButton(addGraveDialog);
        backButton->setObjectName("backButton");
        backButton->setGeometry(QRect(660, 490, 161, 41));
        backButton->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 77, 56);\n"
"font: 14pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);"));
        label = new QLabel(addGraveDialog);
        label->setObjectName("label");
        label->setGeometry(QRect(440, 250, 411, 301));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        label_2 = new QLabel(addGraveDialog);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(570, 270, 141, 41));
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 77, 56);\n"
"font: italic 22pt \"Segoe UI\";\n"
"font: 600 22pt \"Segoe UI\";"));
        label_3 = new QLabel(addGraveDialog);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(470, 330, 91, 31));
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"font: 12pt \"Segoe UI\";"));
        label_4 = new QLabel(addGraveDialog);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(470, 380, 91, 31));
        label_4->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"font: 12pt \"Segoe UI\";"));
        label_5 = new QLabel(addGraveDialog);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(470, 430, 101, 31));
        label_5->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"font: 12pt \"Segoe UI\";"));
        label->raise();
        graveNoLineEdit->raise();
        locationLineEdit->raise();
        heightLineEdit->raise();
        addButton->raise();
        backButton->raise();
        label_2->raise();
        label_3->raise();
        label_4->raise();
        label_5->raise();

        retranslateUi(addGraveDialog);

        QMetaObject::connectSlotsByName(addGraveDialog);
    } // setupUi

    void retranslateUi(QDialog *addGraveDialog)
    {
        addGraveDialog->setWindowTitle(QCoreApplication::translate("addGraveDialog", "Dialog", nullptr));
        addButton->setText(QCoreApplication::translate("addGraveDialog", "Add Grave", nullptr));
        backButton->setText(QCoreApplication::translate("addGraveDialog", "Back", nullptr));
        label->setText(QString());
        label_2->setText(QCoreApplication::translate("addGraveDialog", "Add Grave", nullptr));
        label_3->setText(QCoreApplication::translate("addGraveDialog", "Grave No:", nullptr));
        label_4->setText(QCoreApplication::translate("addGraveDialog", "Location:", nullptr));
        label_5->setText(QCoreApplication::translate("addGraveDialog", "Grave Height:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addGraveDialog: public Ui_addGraveDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDGRAVEDIALOG_H
