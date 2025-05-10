/********************************************************************************
** Form generated from reading UI file 'visitor.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VISITOR_H
#define UI_VISITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_visitor
{
public:
    QStackedWidget *stackedWidget;
    QWidget *page;
    QLineEdit *relationLineEdit;
    QLineEdit *visitorNameLineEdit;
    QPushButton *nextButton;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_5;
    QPushButton *backButton_2;
    QWidget *page_2;
    QLineEdit *searchLineEdit;
    QPushButton *searchButton;
    QTableWidget *graveTable;
    QPushButton *cleanButton;
    QPushButton *waterButton;
    QPushButton *flowerButton;
    QPushButton *backButton;

    void setupUi(QDialog *visitor)
    {
        if (visitor->objectName().isEmpty())
            visitor->setObjectName("visitor");
        visitor->resize(1920, 1080);
        visitor->setMinimumSize(QSize(1920, 1080));
        visitor->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 77, 56);\n"
"color: rgb(255, 255, 255);\n"
"font: 12pt \"Segoe UI\";"));
        stackedWidget = new QStackedWidget(visitor);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(410, 160, 481, 431));
        stackedWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        page = new QWidget();
        page->setObjectName("page");
        relationLineEdit = new QLineEdit(page);
        relationLineEdit->setObjectName("relationLineEdit");
        relationLineEdit->setGeometry(QRect(50, 230, 381, 41));
        relationLineEdit->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        visitorNameLineEdit = new QLineEdit(page);
        visitorNameLineEdit->setObjectName("visitorNameLineEdit");
        visitorNameLineEdit->setGeometry(QRect(50, 130, 381, 41));
        visitorNameLineEdit->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        nextButton = new QPushButton(page);
        nextButton->setObjectName("nextButton");
        nextButton->setGeometry(QRect(50, 290, 381, 51));
        nextButton->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 77, 56);\n"
"color: rgb(255, 255, 255);\n"
"font: 16pt \"Segoe UI\";"));
        label = new QLabel(page);
        label->setObjectName("label");
        label->setGeometry(QRect(140, 30, 241, 51));
        label->setStyleSheet(QString::fromUtf8("color: rgb(0, 77, 56);\n"
"font: 22pt \"Segoe UI\";"));
        label_2 = new QLabel(page);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(50, 90, 111, 31));
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 12pt \"Segoe UI\";"));
        label_5 = new QLabel(page);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(50, 190, 111, 31));
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 12pt \"Segoe UI\";"));
        backButton_2 = new QPushButton(page);
        backButton_2->setObjectName("backButton_2");
        backButton_2->setGeometry(QRect(50, 360, 381, 51));
        backButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 77, 56);\n"
"color: rgb(255, 255, 255);\n"
"font: 16pt \"Segoe UI\";"));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        searchLineEdit = new QLineEdit(page_2);
        searchLineEdit->setObjectName("searchLineEdit");
        searchLineEdit->setGeometry(QRect(40, 30, 251, 41));
        searchLineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"font: 11pt \"Segoe UI\";"));
        searchButton = new QPushButton(page_2);
        searchButton->setObjectName("searchButton");
        searchButton->setGeometry(QRect(320, 30, 121, 41));
        searchButton->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 77, 56);\n"
"font: 600 12pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);"));
        graveTable = new QTableWidget(page_2);
        graveTable->setObjectName("graveTable");
        graveTable->setGeometry(QRect(45, 90, 391, 192));
        graveTable->setStyleSheet(QString::fromUtf8("QTableWidget {\n"
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
"QTableWidget {\n"
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
"QScroll"
                        "Bar:vertical, QScrollBar:horizontal {\n"
"    background: rgb(240, 255, 252);\n"
"    border: none;\n"
"    width: 12px;\n"
"    margin: 0px;\n"
"}\n"
"\n"
"QScrollBar::handle:vertical, QScrollBar::handle:horizontal {\n"
"    background: rgb(0, 112, 82);\n"
"    border-radius: 6px;\n"
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
        cleanButton = new QPushButton(page_2);
        cleanButton->setObjectName("cleanButton");
        cleanButton->setGeometry(QRect(50, 310, 111, 41));
        cleanButton->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 77, 56);\n"
"color: rgb(255, 255, 255);\n"
"font: 12pt \"Segoe UI\";"));
        waterButton = new QPushButton(page_2);
        waterButton->setObjectName("waterButton");
        waterButton->setGeometry(QRect(190, 310, 111, 41));
        waterButton->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 77, 56);\n"
"font: 12pt \"Segoe UI\";"));
        flowerButton = new QPushButton(page_2);
        flowerButton->setObjectName("flowerButton");
        flowerButton->setGeometry(QRect(320, 310, 111, 41));
        flowerButton->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 77, 56);\n"
"font: 12pt \"Segoe UI\";"));
        backButton = new QPushButton(page_2);
        backButton->setObjectName("backButton");
        backButton->setGeometry(QRect(120, 360, 231, 41));
        backButton->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 112, 82);\n"
"color: rgb(255, 255, 255);\n"
"font: 14pt \"Segoe UI\";"));
        stackedWidget->addWidget(page_2);

        retranslateUi(visitor);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(visitor);
    } // setupUi

    void retranslateUi(QDialog *visitor)
    {
        visitor->setWindowTitle(QCoreApplication::translate("visitor", "Dialog", nullptr));
        nextButton->setText(QCoreApplication::translate("visitor", "Next", nullptr));
        label->setText(QCoreApplication::translate("visitor", "Visitor Info Panel", nullptr));
        label_2->setText(QCoreApplication::translate("visitor", "Enter Name:", nullptr));
        label_5->setText(QCoreApplication::translate("visitor", "Enter Relation:", nullptr));
        backButton_2->setText(QCoreApplication::translate("visitor", "Back", nullptr));
        searchButton->setText(QCoreApplication::translate("visitor", "Search Grave", nullptr));
        cleanButton->setText(QCoreApplication::translate("visitor", "clean grave", nullptr));
        waterButton->setText(QCoreApplication::translate("visitor", "give water", nullptr));
        flowerButton->setText(QCoreApplication::translate("visitor", "add flower", nullptr));
        backButton->setText(QCoreApplication::translate("visitor", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class visitor: public Ui_visitor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VISITOR_H
