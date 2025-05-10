/********************************************************************************
** Form generated from reading UI file 'assigngravedialog.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ASSIGNGRAVEDIALOG_H
#define UI_ASSIGNGRAVEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_graveComboBox
{
public:
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QPushButton *pushButton;

    void setupUi(QDialog *graveComboBox)
    {
        if (graveComboBox->objectName().isEmpty())
            graveComboBox->setObjectName("graveComboBox");
        graveComboBox->resize(1920, 1080);
        graveComboBox->setMinimumSize(QSize(1920, 1080));
        lineEdit = new QLineEdit(graveComboBox);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(190, 100, 113, 22));
        lineEdit_2 = new QLineEdit(graveComboBox);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(190, 150, 113, 22));
        lineEdit_3 = new QLineEdit(graveComboBox);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setGeometry(QRect(200, 190, 113, 22));
        pushButton = new QPushButton(graveComboBox);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(300, 270, 75, 24));

        retranslateUi(graveComboBox);

        QMetaObject::connectSlotsByName(graveComboBox);
    } // setupUi

    void retranslateUi(QDialog *graveComboBox)
    {
        graveComboBox->setWindowTitle(QCoreApplication::translate("graveComboBox", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("graveComboBox", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class graveComboBox: public Ui_graveComboBox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ASSIGNGRAVEDIALOG_H
