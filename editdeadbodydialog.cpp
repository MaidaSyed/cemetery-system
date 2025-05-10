#include "editdeadbodydialog.h"
#include "ui_editdeadbodydialog.h"

EditDeadBodyDialog::EditDeadBodyDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::EditDeadBodyDialog)
{
    ui->setupUi(this);
    connect(ui->back, &QPushButton::clicked, this, &EditDeadBodyDialog::on_back);
}

EditDeadBodyDialog::~EditDeadBodyDialog()
{
    delete ui;
}

void EditDeadBodyDialog::setDeadBodyDetails(const QString &name, int age, const QString &cause, const QString &grave, double height) {
    ui->nameEdit->setText(name);
    ui->ageEdit->setText(QString::number(age));
    ui->causeEdit->setText(cause);
    // ui->graveLabel->setText(grave);
    // ui->heightLabel->setText(QString::number(height));
}

QString EditDeadBodyDialog::getName() const {
    return ui->nameEdit->text();
}

int EditDeadBodyDialog::getAge() const {
    return ui->ageEdit->text().toInt();
}

QString EditDeadBodyDialog::getCause() const {
    return ui->causeEdit->text();
}

void EditDeadBodyDialog::on_submitButton_clicked()
{
    accept();
}

void EditDeadBodyDialog::on_back()
{
    this->close();
}
