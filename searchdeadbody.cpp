#include "searchdeadbody.h"
#include "ui_searchdeadbody.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <QTableWidgetItem>

searchDeadBody::searchDeadBody(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::searchDeadBody)
{
    ui->setupUi(this);
    connect(ui->back, &QPushButton::clicked, this, &searchDeadBody::on_backButton_clicked);

    ui->graveTable->setColumnCount(5);
    QStringList headers = {"Name", "Date of Death", "Cause of Death", "Grave Location", "Age"};
    ui->graveTable->setHorizontalHeaderLabels(headers);
    // ui->graveTable->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->graveTable->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
}

searchDeadBody::~searchDeadBody()
{
    delete ui;
}

void searchDeadBody::loadBodies()
{
    QFile file("deadbody.txt");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QMessageBox::warning(this, "Error", "Could not open deadbodies.txt");
        return;
    }

    bodies.clear();
    QTextStream in(&file);
    while (!in.atEnd()) {
        QString line = in.readLine().trimmed();
        if (line.isEmpty()) continue;

        QStringList parts = line.split(",");
        if (parts.size() == 8) {
            bool ok;
            int age = parts[1].toInt(&ok);
            if (!ok) age = 0;
            DeadBody body(parts[0], parts[3], parts[2], parts[6], age);
            // Name, Date of Death, Cause, Grave Location, Age
            bodies.append(body);
        }
    }
    file.close();
}

void searchDeadBody::on_searchButton_clicked()
{
    loadBodies();
    QString query = ui->searchLineEdit->text().toLower();
    displayResults(query);
}

void searchDeadBody::displayResults(const QString &query)
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
}

void searchDeadBody::on_waterButton_clicked()
{
    int row = ui->graveTable->currentRow();
    if (row < 0) {
        QMessageBox::warning(this, "No Selection", "Please select a grave first.");
        return;
    }

    QString name = ui->graveTable->item(row, 0)->text();
    QMessageBox::information(this, "Action", "You watered " + name + "'s grave. 💧");
}

void searchDeadBody::on_flowerButton_clicked()
{
    int row = ui->graveTable->currentRow();
    if (row < 0) {
        QMessageBox::warning(this, "No Selection", "Please select a grave first.");
        return;
    }

    QString name = ui->graveTable->item(row, 0)->text();
    QMessageBox::information(this, "Action", "You placed flowers on " + name + "'s grave. 🌸");
}

void searchDeadBody::on_cleanButton_clicked()
{
    int row = ui->graveTable->currentRow();
    if (row < 0) {
        QMessageBox::warning(this, "No Selection", "Please select a grave first.");
        return;
    }

    QString name = ui->graveTable->item(row, 0)->text();
    QMessageBox::information(this, "Action", "You cleaned " + name + "'s grave. 🧹");
}

void searchDeadBody::on_backButton_clicked()
{
    this->close();
}
