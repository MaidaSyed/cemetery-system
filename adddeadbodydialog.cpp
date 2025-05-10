#include "adddeadbodydialog.h"
#include "ui_adddeadbodydialog.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>

AddDeadBodyDialog::AddDeadBodyDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddDeadBodyDialog)
{
    ui->setupUi(this);
    connect(ui->backButton, &QPushButton::clicked, this, &AddDeadBodyDialog::on_cancelButton_clicked);
    connect(ui->assigngrave, &QPushButton::clicked, this, &AddDeadBodyDialog::on_addButton_clicked);
}

AddDeadBodyDialog::~AddDeadBodyDialog()
{
    delete ui;
}

void AddDeadBodyDialog::on_addButton_clicked()
{
    QString name = ui->nameLineEdit->text();
    QString age = ui->ageLineEdit->text();
    QString cause = ui->causeLineEdit->text();
    QString date = ui->dateLineEdit->text();
    QString height = ui->heightLineEdit->text();

    if (name.isEmpty() || age.isEmpty() || cause.isEmpty() || date.isEmpty() || height.isEmpty()) {
        QMessageBox::warning(this, "Input Error", "Please fill in all fields.");
        return;
    }

    QStringList graves = readGraves();
    QString assignedGrave;

    for (const QString &grave : graves) {
        QStringList parts = grave.split(",");
        if (parts.size() == 3) {
            bool ok1, ok2;
            int graveHeight = parts[2].toInt(&ok1);
            int bodyHeight = height.toInt(&ok2);

            if (ok1 && ok2 && graveHeight >= bodyHeight && (graveHeight - bodyHeight) <= 5) {
                assignedGrave = grave;
                break;
            }

        }

    }

    if (assignedGrave.isEmpty()) {
        QMessageBox::warning(this, "No Grave", "No matching grave found for this height.");
        return;
    }

    // Save deadbody with grave details
    QFile file("deadbody.txt");
    if (file.open(QIODevice::Append | QIODevice::Text)) {
        QTextStream out(&file);
        out << name << "," << age << "," << cause << "," << date << "," << height << "," << assignedGrave << "\n";
        file.close();
    }

    // Remove grave from file
    removeAssignedGrave(assignedGrave);

    QStringList graveParts = assignedGrave.split(",");
    QString graveNumber = (graveParts.size() >= 1) ? graveParts[0] : "Unknown";

    QMessageBox::information(this, "Success",
                             "Dead body added and assigned to Grave No: " + graveNumber);
    this->accept();

}

void AddDeadBodyDialog::on_cancelButton_clicked()
{
    this->close();
}

QStringList AddDeadBodyDialog::readGraves()
{
    QStringList graves;
    QFile file("grave.txt");
    if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QTextStream in(&file);
        while (!in.atEnd()) {
            QString line = in.readLine();
            if (!line.trimmed().isEmpty())
                graves << line;
        }
        file.close();
    }
    return graves;
}

void AddDeadBodyDialog::removeAssignedGrave(const QString &graveLine)
{
    QFile file("grave.txt");
    QStringList allGraves;

    if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QTextStream in(&file);
        while (!in.atEnd()) {
            QString line = in.readLine();
            if (line.trimmed() != graveLine.trimmed()) {
                allGraves << line;
            }
        }
        file.close();
    }

    if (file.open(QIODevice::WriteOnly | QIODevice::Text | QIODevice::Truncate)) {
        QTextStream out(&file);
        for (const QString &line : allGraves) {
            out << line << "\n";
        }
        file.close();
    }
}
