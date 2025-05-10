#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "person.h"
#include "guard.h"
#include "manager.h"
#include "managerWindow.h"
#include "guardWindow.h"
#include "visitor.h"

#include <QFile>
#include <QTextStream>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->login, &QPushButton::clicked, this, &MainWindow::on_loginButton_clicked);
    connect(ui->pushButton, &QPushButton::clicked, this, &MainWindow::on_userVisitButton_clicked);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_loginButton_clicked()
{
    // Get the email and password from the input fields
    QString email = ui->lineEdit_2->text().trimmed();
    QString password = ui->lineEdit_3->text().trimmed();

    // Create staff.txt with the sample data if it doesn't already exist
    QFile file("staff.txt");

    // if (!file.exists()) {
    //     // If the file doesn't exist, create and write sample data to it
    //     if (file.open(QIODevice::WriteOnly | QIODevice::Text)) {
    //         QTextStream out(&file);
    //         out << "morning guard,mGuard@gmail.com,mGuard@123\n";
    //         out << "after noon guard,anGuard@gmail.com,anGuard@123\n";
    //         out << "night guard,nGuard@gmail.com,nGuard@123\n";
    //         out << "senior manager,sManager@gmail.com,sManager@123\n";
    //         out << "junior manager,jManager@gmail.com,jManager@123\n";
    //         file.close();
    //     } else {
    //         QMessageBox::warning(this, "Error", "Could not create staff.txt");
    //         return;
    //     }
    // }

    // Now open the file for reading
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QMessageBox::warning(this, "Error", "Could not open staff.txt");
        return;
    }

    QTextStream in(&file);
    Person* user = nullptr;

    // Check each line for matching email and password
    while (!in.atEnd()) {
        QString line = in.readLine().trimmed();
        QStringList parts = line.split(',');

        if (parts.size() != 3) continue;

        QString role = parts[0].trimmed();
        QString fileEmail = parts[1].trimmed();
        QString filePass = parts[2].trimmed();

        // Compare the email and password from UI with the file content
        if (email == fileEmail && password == filePass) {
            if (role.contains("guard", Qt::CaseInsensitive)) {
                user = new Guard(fileEmail, filePass, role);  // role goes last
            } else if (role.contains("manager", Qt::CaseInsensitive)) {
                user = new Manager(fileEmail, filePass, role);
            }
            break;
        }
    }

    file.close();

    if (user) {
        if (!user->canLogin()) {
            QMessageBox::warning(this, "Access Denied", "You are not allowed to log in at this time.");
            delete user;
            return;
        }

        QMessageBox::information(this, "Login", "Welcome: " + user->getRole());

        this->hide();

        if (user->getRole().contains("manager", Qt::CaseInsensitive)) {
            managerWindow *mw = new managerWindow(this);
            mw->show();
        } else {
            guardWindow *gw = new guardWindow(this);
            gw->show();
        }

        delete user;
    } else {
        QMessageBox::warning(this, "Login Failed", "Invalid credentials");
    }
}

void MainWindow::on_userVisitButton_clicked(){
    qDebug() << "Visitor button clicked";
    visitor *v = new visitor(this);
    v->setAttribute(Qt::WA_DeleteOnClose);
    v->setWindowTitle("Visitor Portal");
    v->show();
}



