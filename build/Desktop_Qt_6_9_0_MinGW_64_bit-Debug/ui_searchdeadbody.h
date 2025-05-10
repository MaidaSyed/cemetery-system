/********************************************************************************
** Form generated from reading UI file 'searchdeadbody.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHDEADBODY_H
#define UI_SEARCHDEADBODY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_searchDeadBody
{
public:
    QStackedWidget *stackedWidget;
    QWidget *page_2;
    QLineEdit *searchLineEdit;
    QPushButton *searchButton;
    QTableWidget *graveTable;
    QPushButton *cleanButton;
    QPushButton *waterButton;
    QPushButton *flowerButton;
    QPushButton *back;

    void setupUi(QDialog *searchDeadBody)
    {
        if (searchDeadBody->objectName().isEmpty())
            searchDeadBody->setObjectName("searchDeadBody");
        searchDeadBody->resize(1920, 1080);
        searchDeadBody->setMinimumSize(QSize(1920, 1080));
        searchDeadBody->setStyleSheet(QString::fromUtf8("background-color:rgb(0, 77, 56);\n"
"color: rgb(255, 255, 255);"));
        stackedWidget = new QStackedWidget(searchDeadBody);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(420, 160, 481, 421));
        stackedWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
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
        cleanButton->setStyleSheet(QString::fromUtf8("background-color: rgb(0,77,56);\n"
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
        back = new QPushButton(page_2);
        back->setObjectName("back");
        back->setGeometry(QRect(120, 360, 231, 41));
        back->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 112, 82);\n"
"color: rgb(255, 255, 255);\n"
"font: 14pt \"Segoe UI\";"));
        stackedWidget->addWidget(page_2);

        retranslateUi(searchDeadBody);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(searchDeadBody);
    } // setupUi

    void retranslateUi(QDialog *searchDeadBody)
    {
        searchDeadBody->setWindowTitle(QCoreApplication::translate("searchDeadBody", "Dialog", nullptr));
        searchButton->setText(QCoreApplication::translate("searchDeadBody", "Search Grave", nullptr));
        cleanButton->setText(QCoreApplication::translate("searchDeadBody", "clean grave", nullptr));
        waterButton->setText(QCoreApplication::translate("searchDeadBody", "give water", nullptr));
        flowerButton->setText(QCoreApplication::translate("searchDeadBody", "add flower", nullptr));
        back->setText(QCoreApplication::translate("searchDeadBody", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class searchDeadBody: public Ui_searchDeadBody {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHDEADBODY_H
