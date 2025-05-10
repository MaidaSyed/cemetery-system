/********************************************************************************
** Form generated from reading UI file 'viewvisitor.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWVISITOR_H
#define UI_VIEWVISITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_viewVisitor
{
public:
    QTableWidget *visitorTable;
    QPushButton *back;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QDialog *viewVisitor)
    {
        if (viewVisitor->objectName().isEmpty())
            viewVisitor->setObjectName("viewVisitor");
        viewVisitor->resize(1920, 1080);
        viewVisitor->setMinimumSize(QSize(1920, 1080));
        viewVisitor->setStyleSheet(QString::fromUtf8("background-color: rgb(0,77,56);\n"
"color: rgb(255, 255, 255);"));
        visitorTable = new QTableWidget(viewVisitor);
        visitorTable->setObjectName("visitorTable");
        visitorTable->setGeometry(QRect(400, 210, 501, 331));
        visitorTable->setStyleSheet(QString::fromUtf8("QTableWidget {\n"
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
        back = new QPushButton(viewVisitor);
        back->setObjectName("back");
        back->setGeometry(QRect(760, 560, 141, 41));
        back->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(0,77,56);\n"
"color: rgb(255, 255, 255);\n"
"font: 350 16pt \"Segoe UI\";"));
        label = new QLabel(viewVisitor);
        label->setObjectName("label");
        label->setGeometry(QRect(360, 130, 581, 501));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_2 = new QLabel(viewVisitor);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(560, 150, 231, 41));
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0,77,56);\n"
"font: 600 22pt \"Segoe UI\";"));
        label->raise();
        visitorTable->raise();
        back->raise();
        label_2->raise();

        retranslateUi(viewVisitor);

        QMetaObject::connectSlotsByName(viewVisitor);
    } // setupUi

    void retranslateUi(QDialog *viewVisitor)
    {
        viewVisitor->setWindowTitle(QCoreApplication::translate("viewVisitor", "Dialog", nullptr));
        back->setText(QCoreApplication::translate("viewVisitor", "Back", nullptr));
        label->setText(QString());
        label_2->setText(QCoreApplication::translate("viewVisitor", "VISITORS INFO", nullptr));
    } // retranslateUi

};

namespace Ui {
    class viewVisitor: public Ui_viewVisitor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWVISITOR_H
