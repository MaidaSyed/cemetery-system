#include "visitor.h"
#include "ui_visitor.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <QTableWidgetItem>
#include <QDateTime>

visitor::visitor(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::visitor)
{
    ui->setupUi(this);
    connect(ui->nextButton, &QPushButton::clicked, this, &visitor::on_nextButton_clicked);
    connect(ui->searchButton, &QPushButton::clicked, this, &visitor::on_searchButton_clicked);
    connect(ui->backButton_2, &QPushButton::clicked, this, &visitor::on_back);

    // Set up table headers
    ui->graveTable->setColumnCount(5);
    QStringList headers;
    headers << "Name" << "Date of Death" << "Cause of Death" << "Grave Location" << "Age";
    ui->graveTable->setHorizontalHeaderLabels(headers);
    ui->graveTable->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
    // Start on page 0 (visitor info)
    ui->stackedWidget->setCurrentIndex(0);
}

visitor::~visitor()
{
    delete ui;
}

void visitor::on_nextButton_clicked()
{
    visitorName = ui->visitorNameLineEdit->text().trimmed();
    relation = ui->relationLineEdit->text().trimmed();

    if (visitorName.isEmpty() || relation.isEmpty()) {
        QMessageBox::warning(this, "Input Error", "Please enter both name and relation.");
        return;
    }

    entryTime = QDateTime::currentDateTime();
    ui->stackedWidget->setCurrentIndex(1);  // Move to search page
}

void visitor::loadBodies()
{
    bodies.clear(); // avoid duplicates

    QFile file("deadbody.txt");  // make sure the filename matches
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QMessageBox::warning(this, "Error", "Could not open deadbody.txt");
        return;
    }

    QTextStream in(&file);
    while (!in.atEnd()) {
        QString line = in.readLine().trimmed();
        if (line.isEmpty()) continue;

        QStringList parts = line.split(",");
        if (parts.size() == 8) {
            bool ok;
            int age = parts[1].toInt(&ok);
            if (!ok) age = 0;

            // name, dateOfDeath, cause, graveLocation, age
            DeadBody body(parts[0], parts[3], parts[2], parts[6], age);
            bodies.append(body);
        }
    }
    file.close();
}

void visitor::on_searchButton_clicked()
{
    loadBodies();
    QString query = ui->searchLineEdit->text().toLower().trimmed();
    displayResults(query);
}

void visitor::displayResults(const QString &query)
{
    ui->graveTable->clearContents();
    ui->graveTable->setRowCount(0);

    for (const DeadBody &body : bodies) {
        if (body.getName().toLower().contains(query)) {
            int row = ui->graveTable->rowCount();
            ui->graveTable->insertRow(row);
            ui->graveTable->setItem(row, 0, new QTableWidgetItem(body.getName()));
            ui->graveTable->setItem(row, 1, new QTableWidgetItem(body.getDateOfDeath()));
            ui->graveTable->setItem(row, 2, new QTableWidgetItem(body.getCauseOfDeath()));
            ui->graveTable->setItem(row, 3, new QTableWidgetItem(body.getGraveLocation()));
            ui->graveTable->setItem(row, 4, new QTableWidgetItem(QString::number(body.getAge())));
        }
    }

    if (ui->graveTable->rowCount() == 0) {
        QMessageBox::information(this, "No Results", "No matching graves found.");
    }
}

void visitor::on_waterButton_clicked()
{
    int row = ui->graveTable->currentRow();
    if (row < 0) {
        QMessageBox::warning(this, "No Selection", "Please select a grave first.");
        return;
    }

    QString name = ui->graveTable->item(row, 0)->text();
    QMessageBox::information(this, "Action", "You watered " + name + "'s grave. 💧");
}

void visitor::on_flowerButton_clicked()
{
    int row = ui->graveTable->currentRow();
    if (row < 0) {
        QMessageBox::warning(this, "No Selection", "Please select a grave first.");
        return;
    }

    QString name = ui->graveTable->item(row, 0)->text();
    QMessageBox::information(this, "Action", "You placed flowers on " + name + "'s grave. 🌸");
}

void visitor::on_cleanButton_clicked()
{
    int row = ui->graveTable->currentRow();
    if (row < 0) {
        QMessageBox::warning(this, "No Selection", "Please select a grave first.");
        return;
    }

    QString name = ui->graveTable->item(row, 0)->text();
    QMessageBox::information(this, "Action", "You cleaned " + name + "'s grave. 🧹");
}

void visitor::on_backButton_clicked()
{
    saveVisitorLog();
    this->close();
}

void visitor::saveVisitorLog()
{
    QFile file("visitorlog.txt");
    if (!file.open(QIODevice::Append | QIODevice::Text)) {
        return;
    }

    QTextStream out(&file);
    QString exitTime = QDateTime::currentDateTime().toString("yyyy-MM-dd HH:mm:ss");
    out << visitorName << "," << relation << ","
        << entryTime.toString("yyyy-MM-dd HH:mm:ss") << "," << exitTime << "\n";
    file.close();
}

void visitor::on_back()
{
    this->close();
}
