#ifndef VIEWDEADBODIESDIALOG_H
#define VIEWDEADBODIESDIALOG_H

#include <QDialog>
#include <QList>
#include "deadbody.h"  // Include the DeadBody class


namespace Ui {
class ViewDeadBodiesDialog;
}

class ViewDeadBodiesDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ViewDeadBodiesDialog(QWidget *parent = nullptr);
    ~ViewDeadBodiesDialog();

    void loadDeadBodies(const QList<DeadBody>& deadbodies);
    void loadDeadBodiesFromFile(const QString& filename);    // ✅ Add this line
    // Method to load dead bodies into the table

private slots:
    void on_pushButton_clicked();

private:
    Ui::ViewDeadBodiesDialog *ui;
};

#endif // VIEWDEADBODIESDIALOG_H
