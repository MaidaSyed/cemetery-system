#include "AssignGraveDialog.h"
#include <QFile>
#include <QMessageBox>
#include <QTextStream>
#include "ui_AssignGraveDialog.h"

AssignGraveDialog::AssignGraveDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::AssignGraveDialog)
{
    ui->setupUi(this);
}

AssignGraveDialog::~AssignGraveDialog()
{
    delete ui;
}

void AssignGraveDialog::on_saveButton_clicked()
{
    QString graveNo = ui->graveNoLineEdit->text().trimmed();
    QString location = ui->locationLineEdit->text().trimmed();
    int height = ui->heightLineEdit->text().toInt();

    if (graveNo.isEmpty() || location.isEmpty() || height <= 0) {
        QMessageBox::warning(this, "Input Error", "Please fill all fields with valid data.");
        return;
    }

    saveGrave(graveNo, location, height);
    QMessageBox::information(this, "Success", "Grave added successfully.");
    this->accept();
}

void AssignGraveDialog::saveGrave(const QString &graveNo, const QString &location, int height)
{
    QFile file("grave.txt");
    if (!file.open(QIODevice::Append | QIODevice::Text)) {
        QMessageBox::warning(this, "File Error", "Unable to open grave.txt");
        return;
    }

    QTextStream out(&file);
    out << graveNo << "," << location << "," << height << "\n";
    file.close();
}
