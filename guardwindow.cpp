#include "guardWindow.h"
#include "ui_guardWindow.h"
#include "viewdeadbodiesdialog.h"
#include "searchdeadbody.h"

guardWindow::guardWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::guardWindow)
{
    ui->setupUi(this);

    connect(ui->pushButton, &QPushButton::clicked, this, &guardWindow::on_viewBodiesButton_clicked);
    connect(ui->pushButton_2, &QPushButton::clicked, this, &guardWindow::on_maintainBodiesButton_clicked);
    connect(ui->logoutBtn, &QPushButton::clicked, this, &guardWindow::on_Logout);
}

void guardWindow::on_viewBodiesButton_clicked()
{
    ViewDeadBodiesDialog dialog(this);
    dialog.loadDeadBodiesFromFile("deadbody.txt");
    dialog.exec();
}

void guardWindow::on_maintainBodiesButton_clicked()
{
    searchDeadBody visitDialog(this);
    visitDialog.exec();
}

void guardWindow::on_Logout()
{
    this->close();
}

guardWindow::~guardWindow()
{
    delete ui;
}
