#ifndef MANAGERWINDOW_H
#define MANAGERWINDOW_H

#include "deadbody.h"
#include "viewdeadbodiesdialog.h"

#include <QDialog>

namespace Ui {
class managerWindow;  // ✅ Forward declaration of the UI class
}

class managerWindow : public QDialog
{
    Q_OBJECT

public:
    explicit managerWindow(QWidget *parent = nullptr);
    ~managerWindow();
    bool isGraveNumberUsed(const QString &graveNumber);

private slots:
    void on_addDeadBodyButton_clicked();
    void showDeadBodiesDialog();
    void on_viewDeadBodiesButton_clicked();
    void on_searchDeadBody_clicked();
    void on_Logout();
    void on_viewVisitors_clicked();
    void on_buttonBox_accepted();
    void on_EditDeadBody_clicked();
    void on_deleteDeadBodyButton_clicked();

 private:
    Ui::managerWindow *ui;
    QList<DeadBody> deadBodiesList;
    // ✅ use the correct Ui namespace and class
};

#endif // MANAGERWINDOW_H
