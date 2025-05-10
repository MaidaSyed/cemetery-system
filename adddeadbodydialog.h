#ifndef ADDDEADBODYDIALOG_H
#define ADDDEADBODYDIALOG_H

#include <QDialog>
#include <QStringList>

namespace Ui {
class AddDeadBodyDialog;
}

class AddDeadBodyDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AddDeadBodyDialog(QWidget *parent = nullptr);
    ~AddDeadBodyDialog();

private slots:
    void on_addButton_clicked();
    void on_cancelButton_clicked();

private:
    Ui::AddDeadBodyDialog *ui;

    QStringList readGraves();
    void removeAssignedGrave(const QString &graveLine);
};

#endif // ADDDEADBODYDIALOG_H
