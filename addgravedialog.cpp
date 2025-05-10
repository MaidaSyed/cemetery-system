#include "addgravedialog.h"
#include "ui_addgravedialog.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>

addGraveDialog::addGraveDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addGraveDialog)
{
    ui->setupUi(this);
    connect(ui->backButton, &QPushButton::clicked, this, &addGraveDialog::on_cancelButton_clicked);
}

addGraveDialog::~addGraveDialog()
{
    delete ui;
}

void addGraveDialog::on_addButton_clicked()
{
    QString graveNo = ui->graveNoLineEdit->text();
    QString location = ui->locationLineEdit->text();
    QString height = ui->heightLineEdit->text();

    if (graveNo.isEmpty() || location.isEmpty() || height.isEmpty()) {
        QMessageBox::warning(this, "Input Error", "Please fill in all fields.");
        return;
    }

    QFile file("grave.txt");
    if (file.open(QIODevice::Append | QIODevice::Text)) {
        QTextStream out(&file);
        out << graveNo << "," << location << "," << height << "\n";
        file.close();
        QMessageBox::information(this, "Success", "Grave added successfully.");
        this->accept();
    } else {
        QMessageBox::critical(this, "Error", "Unable to open grave.txt");
    }
}

void addGraveDialog::on_cancelButton_clicked()
{
    this->close();
}
