/********************************************************************************
** Form generated from reading UI file 'viewdeadbodiesdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWDEADBODIESDIALOG_H
#define UI_VIEWDEADBODIESDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_ViewDeadBodiesDialog
{
public:
    QTableWidget *tableWidget;
    QPushButton *backButton;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QDialog *ViewDeadBodiesDialog)
    {
        if (ViewDeadBodiesDialog->objectName().isEmpty())
            ViewDeadBodiesDialog->setObjectName("ViewDeadBodiesDialog");
        ViewDeadBodiesDialog->resize(1920, 1080);
        ViewDeadBodiesDialog->setMinimumSize(QSize(1920, 1080));
        ViewDeadBodiesDialog->setStyleSheet(QString::fromUtf8("background-color: rgb(0,77,56);"));
        tableWidget = new QTableWidget(ViewDeadBodiesDialog);
        if (tableWidget->columnCount() < 5)
            tableWidget->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(390, 210, 511, 391));
        tableWidget->setMaximumSize(QSize(531, 391));
        tableWidget->setStyleSheet(QString::fromUtf8("QTableWidget {\n"
"    background-color: rgb(240, 255, 252); /* soft mint background for contrast */\n"
"    color: rgb(0, 50, 40); /* dark green text */\n"
"    gridline-color: rgb(180, 220, 210); /* soft line */\n"
"    border: 1px solid rgb(0, 112, 82);\n"
"    selection-background-color: rgb(0, 112, 82); /* selected row */\n"
"    selection-color: white;\n"
"    alternate-background-color: rgb(225, 245, 238); /* subtle alt row */\n"
"}\n"
"\n"
"QTableWidget::item:hover {\n"
"    background-color: rgb(0, 112, 82);\n"
"    color: white;\n"
"}\n"
"\n"
"QHeaderView::section {\n"
"    background-color: rgb(0, 112, 82);\n"
"    color: white;\n"
"    font-weight: bold;\n"
"    padding: 6px;\n"
"    border: 1px solid rgb(180, 220, 210);\n"
"}\n"
"\n"
"QScrollBar:vertical, QScrollBar:horizontal {\n"
"    background: rgb(240, 255, 252);\n"
"    border: none;\n"
"    width: 12px;\n"
"    margin: 0px;\n"
"}\n"
"\n"
"QScrollBar::handle:vertical, QScrollBar::handle:horizontal {\n"
"    background: rgb(0, 112, 82);\n"
" "
                        "   border-radius: 6px;\n"
"    min-height: 20px;\n"
"}\n"
"\n"
"QScrollBar::add-line:vertical, QScrollBar::sub-line:vertical,\n"
"QScrollBar::add-line:horizontal, QScrollBar::sub-line:horizontal {\n"
"    background: none;\n"
"    border: none;\n"
"}\n"
"\n"
"QScrollBar:horizontal {\n"
"    background: rgb(240, 255, 252);\n"
"    border: none;\n"
"    height: 12px;  /* \342\234\205 Corrected for horizontal */\n"
"    margin: 0px;\n"
"}"));
        backButton = new QPushButton(ViewDeadBodiesDialog);
        backButton->setObjectName("backButton");
        backButton->setGeometry(QRect(730, 610, 171, 41));
        backButton->setStyleSheet(QString::fromUtf8("background-color: rgb(0,77,56);\n"
"color: rgb(255, 255, 255);\n"
"font: 15pt \"Segoe UI\";"));
        label = new QLabel(ViewDeadBodiesDialog);
        label->setObjectName("label");
        label->setGeometry(QRect(360, 120, 571, 551));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_2 = new QLabel(ViewDeadBodiesDialog);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(530, 150, 261, 31));
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0,77,56);\n"
"font: 600 22pt \"Segoe UI\";"));
        label->raise();
        tableWidget->raise();
        backButton->raise();
        label_2->raise();

        retranslateUi(ViewDeadBodiesDialog);

        QMetaObject::connectSlotsByName(ViewDeadBodiesDialog);
    } // setupUi

    void retranslateUi(QDialog *ViewDeadBodiesDialog)
    {
        ViewDeadBodiesDialog->setWindowTitle(QCoreApplication::translate("ViewDeadBodiesDialog", "Dialog", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("ViewDeadBodiesDialog", "Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("ViewDeadBodiesDialog", "Age", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("ViewDeadBodiesDialog", "Date of Death", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("ViewDeadBodiesDialog", "New Column", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("ViewDeadBodiesDialog", "Grave Location", nullptr));
        backButton->setText(QCoreApplication::translate("ViewDeadBodiesDialog", "Back", nullptr));
        label->setText(QString());
        label_2->setText(QCoreApplication::translate("ViewDeadBodiesDialog", "Dead Bodies Info", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ViewDeadBodiesDialog: public Ui_ViewDeadBodiesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWDEADBODIESDIALOG_H
