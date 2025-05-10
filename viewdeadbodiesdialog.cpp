#include "viewdeadbodiesdialog.h"
#include "ui_viewdeadbodiesdialog.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <QTableWidgetItem>

ViewDeadBodiesDialog::ViewDeadBodiesDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ViewDeadBodiesDialog)
{
    ui->setupUi(this);
    connect(ui->backButton, &QPushButton::clicked, this, &ViewDeadBodiesDialog::on_pushButton_clicked);
}

void ViewDeadBodiesDialog::loadDeadBodiesFromFile(const QString& filename)
{
    QFile file(filename);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QMessageBox::warning(this, "File Error", "Could not open dead bodies file.");
        return;
    }

    ui->tableWidget->setRowCount(0);
    ui->tableWidget->setColumnCount(8);

    QStringList headers;
    headers << "Name" << "Age" << "Cause of Death" << "Date of Death"
            << "Person Height" << "Grave No" << "Grave Location" << "Grave Height";
    ui->tableWidget->setHorizontalHeaderLabels(headers);

    QTextStream in(&file);
    int row = 0;

    while (!in.atEnd()) {
        QString line = in.readLine().trimmed();
        if (line.isEmpty()) continue;

        QStringList parts = line.split(",");
        if (parts.size() == 8) {
            ui->tableWidget->insertRow(row);
            for (int col = 0; col < 8; ++col) {
                ui->tableWidget->setItem(row, col, new QTableWidgetItem(parts[col].trimmed()));
            }
            row++;
        }
    }

    file.close();
}

void ViewDeadBodiesDialog::on_pushButton_clicked()
{
    this->close();
}

ViewDeadBodiesDialog::~ViewDeadBodiesDialog()
{
    delete ui;
}
