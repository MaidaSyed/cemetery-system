#include "viewVisitor.h"
#include "ui_viewVisitor.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <QTableWidgetItem>

viewVisitor::viewVisitor(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::viewVisitor)
{
    ui->setupUi(this);

    connect(ui->back, &QPushButton::clicked, this, &viewVisitor::on_back);

    // Setup table
    ui->visitorTable->setColumnCount(4);
    QStringList headers;
    headers << "Name" << "Relation" << "In-Time" << "Out-Time";
    ui->visitorTable->setHorizontalHeaderLabels(headers);

    // Get header and set resize modes
    QHeaderView* header = ui->visitorTable->horizontalHeader();
    header->setSectionResizeMode(0, QHeaderView::Stretch);  // Name
    header->setSectionResizeMode(1, QHeaderView::Stretch);  // Relation
    header->setSectionResizeMode(2, QHeaderView::ResizeToContents);  // In-Time
    header->setSectionResizeMode(3, QHeaderView::ResizeToContents);  // Out-Time

    loadVisitorData();
}

viewVisitor::~viewVisitor()
{
    delete ui;
}

void viewVisitor::loadVisitorData()
{
    QFile file("visitorlog.txt");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QMessageBox::warning(this, "Error", "Could not open visitors.txt");
        return;
    }

    QTextStream in(&file);
    int row = 0;
    while (!in.atEnd()) {
        QString line = in.readLine().trimmed();
        if (line.isEmpty()) continue;

        QStringList parts = line.split(",");
        if (parts.size() == 4) {
            ui->visitorTable->insertRow(row);
            for (int col = 0; col < 4; ++col) {
                ui->visitorTable->setItem(row, col, new QTableWidgetItem(parts[col].trimmed()));
            }
            ++row;
        }
    }

    file.close();
}

void viewVisitor::on_back()
{
    this->close();
}
