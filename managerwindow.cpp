#include "managerwindow.h"
#include "deadbody.h"
#include "qimage.h"
#include "qpicture.h"
#include "ui_managerwindow.h"
#include <QMessageBox>
#include "adddeadbodydialog.h"
#include <QFile>
#include <QTextStream>
#include "viewdeadbodiesdialog.h"
#include "searchdeadbody.h"
#include "viewvisitor.h"
#include "addgravedialog.h"
#include "editdeadbodydialog.h"
#include "QInputDialog"

// If you also use QTextStream to read/write the file


managerWindow::managerWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::managerWindow)
{
    ui->setupUi(this);
    connect(ui->addDeadBodyButton, &QPushButton::clicked, this, &managerWindow::on_addDeadBodyButton_clicked);
    connect(ui->viewDeadBodiesButton, &QPushButton::clicked, this, &managerWindow::showDeadBodiesDialog);
    connect(ui->searchDeadBodyButton, &QPushButton::clicked, this, &managerWindow::on_searchDeadBody_clicked);
    connect(ui->LogoutBtn, &QPushButton::clicked, this, &managerWindow::on_Logout);
    connect(ui->viewVisitorButton, &QPushButton::clicked, this, &managerWindow::on_viewVisitors_clicked);
    connect(ui->addGraveButton, &QPushButton::clicked, this, &managerWindow::on_buttonBox_accepted);
    connect(ui->eidtDeadBodyButton, &QPushButton::clicked, this, &managerWindow::on_EditDeadBody_clicked);
    connect(ui->deleteDeadBodyButton, &QPushButton::clicked, this, &managerWindow::on_deleteDeadBodyButton_clicked);
    //  DeadBody body("John Doe", "2025-05-01", "Heart Attack", "Grave 101");
    //  deadBodiesList.append(body);
    // ui->deadBodyTable->setColumnCount(5);
    QStringList headers;
    headers << "Name" << "Age" << "Cause of Death" << "Date of Death" << "Grave Number";
    //  ui->deadBodyTable->setHorizontalHeaderLabels(headers);
    // loadDeadBodies(); // ✅ still needed
}
void managerWindow::showDeadBodiesDialog() {
    ViewDeadBodiesDialog dialog(this);
    dialog.loadDeadBodiesFromFile("deadbodies.txt");
    dialog.exec();
}


managerWindow::~managerWindow()
{
    delete ui;
}

bool managerWindow::isGraveNumberUsed(const QString &graveNumber) {
    QFile file("deadbodies.txt");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) return false;

    QTextStream in(&file);
    while (!in.atEnd()) {
        QString line = in.readLine();
        QStringList fields = line.split(",");
        if (fields.size() >= 5 && fields[4].trimmed() == graveNumber.trimmed()) {
            return true;
        }
    }
    return false;
}
void managerWindow::on_addDeadBodyButton_clicked()
{
    AddDeadBodyDialog visitDialog(this);
    visitDialog.exec();
    // if (dialog.exec() == QDialog::Accepted) {
    //     QString name = dialog.getName();
    //     int age = dialog.getAge();
    //     QString cause = dialog.getCauseOfDeath();
    //     QString date = dialog.getDateOfDeath();
    //     QString grave = dialog.getGraveNumber();

    //     // ✅ Check if any field is empty or invalid
    //     if (name.isEmpty() || cause.isEmpty() || date.isEmpty() || grave.isEmpty() || age <= 0) {
    //         QMessageBox::warning(this, "Incomplete Data", "Please fill all fields with valid information.");
    //         return;
    //     }

    //     // ✅ Check for duplicate grave number
    //     if (isGraveNumberUsed(grave)) {
    //         QMessageBox::warning(this, "Duplicate Grave", "This grave number is already assigned. Please choose another.");
    //         return;
    //     }

    //     // ✅ Save to file if everything is valid
    //     QFile file("deadbodies.txt");
    //     if (file.open(QIODevice::Append | QIODevice::Text)) {
    //         QTextStream out(&file);
    //         out << name << "," << age << "," << cause << "," << date << "," << grave << "\n";
    //         file.close();
    //         QMessageBox::information(this, "Saved", "Dead Body Details Saved Successfully!");
    //     } else {
    //         QMessageBox::warning(this, "Error", "Could not open file to save details.");
    //     }
    // }
}

void managerWindow::on_viewDeadBodiesButton_clicked()
{
    ViewDeadBodiesDialog dialog(this);
    dialog.loadDeadBodiesFromFile("deadbody.txt");
    dialog.exec();
}

void managerWindow::on_searchDeadBody_clicked()
{
    searchDeadBody visitDialog(this);
    visitDialog.exec();
}

void managerWindow::on_Logout()
{
    this->close();
}

void managerWindow::on_viewVisitors_clicked()
{
    viewVisitor visitDialog(this);
    visitDialog.exec();
}

void managerWindow::on_buttonBox_accepted()
{
    addGraveDialog visitDialog(this);
    visitDialog.exec();
}

void managerWindow::on_EditDeadBody_clicked() {
    QFile file("deadbody.txt");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) return;

    QList<QStringList> allLines;
    QTextStream in(&file);
    while (!in.atEnd()) {
        QString line = in.readLine();
        allLines.append(line.split(","));
    }
    file.close();

    // Custom resizable input dialog
    QInputDialog inputDialog(this);
    inputDialog.setWindowTitle("Edit Dead Body");
    inputDialog.setLabelText("Enter name to edit:");
    inputDialog.resize(400, 200);

    if (inputDialog.exec() != QDialog::Accepted) return;
    QString searchName = inputDialog.textValue().trimmed();
    if (searchName.isEmpty()) return;

    for (int i = 0; i < allLines.size(); ++i) {
        if (allLines[i][0].compare(searchName, Qt::CaseInsensitive) == 0) {
            EditDeadBodyDialog dialog(this);
            dialog.setDeadBodyDetails(allLines[i][0], allLines[i][1].toInt(), allLines[i][2], allLines[i][4], allLines[i][5].toDouble());

            if (dialog.exec() == QDialog::Accepted) {
                allLines[i][0] = dialog.getName();
                allLines[i][1] = QString::number(dialog.getAge());
                allLines[i][2] = dialog.getCause();

                QFile outFile("deadbody.txt");
                if (outFile.open(QIODevice::WriteOnly | QIODevice::Text)) {
                    QTextStream out(&outFile);
                    for (const auto& line : allLines)
                        out << line.join(",") << "\n";
                    outFile.close();
                    QMessageBox::information(this, "Updated", "Dead Body Updated Successfully.");
                }
            }
            return;
        }
    }

    QMessageBox::warning(this, "Not Found", "Dead Body with that name not found.");
}

void managerWindow::on_deleteDeadBodyButton_clicked() {
    QFile file("deadbody.txt");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QMessageBox::warning(this, "Error", "Could not open file.");
        return;
    }

    QList<QStringList> allLines;
    QStringList names;
    QTextStream in(&file);
    while (!in.atEnd()) {
        QString line = in.readLine();
        QStringList fields = line.split(",");
        if (fields.size() >= 5) {
            allLines.append(fields);
            names << fields[0];
        }
    }
    file.close();

    if (names.isEmpty()) {
        QMessageBox::information(this, "No Records", "No dead bodies to delete.");
        return;
    }

    // Resizable QInputDialog for selecting name
    QInputDialog inputDialog(this);
    inputDialog.setWindowTitle("Delete Dead Body");
    inputDialog.setLabelText("Select name to delete:");
    inputDialog.setComboBoxItems(names);
    inputDialog.resize(400, 200);

    if (inputDialog.exec() != QDialog::Accepted) return;
    QString selectedName = inputDialog.textValue().trimmed();
    if (selectedName.isEmpty()) return;

    bool found = false;
    for (int i = 0; i < allLines.size(); ++i) {
        if (allLines[i][0].compare(selectedName, Qt::CaseInsensitive) == 0) {
            allLines.removeAt(i);
            found = true;
            break;
        }
    }

    if (!found) {
        QMessageBox::warning(this, "Not Found", "Dead body not found.");
        return;
    }

    QFile outFile("deadbody.txt");
    if (!outFile.open(QIODevice::WriteOnly | QIODevice::Text)) {
        QMessageBox::warning(this, "Error", "Could not write to file.");
        return;
    }

    QTextStream out(&outFile);
    for (const auto& line : allLines)
        out << line.join(",") << "\n";

    outFile.close();
    QMessageBox::information(this, "Deleted", "Dead body deleted successfully.");
}
