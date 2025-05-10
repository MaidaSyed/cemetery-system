#ifndef EDITDEADBODYDIALOG_H
#define EDITDEADBODYDIALOG_H

#include <QDialog>

namespace Ui {
class EditDeadBodyDialog;
}

class EditDeadBodyDialog : public QDialog
{
    Q_OBJECT

public:
    explicit EditDeadBodyDialog(QWidget *parent = nullptr);
    ~EditDeadBodyDialog();

    void setDeadBodyDetails(const QString &name, int age, const QString &cause, const QString &grave, double height);
    QString getName() const;
    int getAge() const;
    QString getCause() const;


private slots:
    void on_submitButton_clicked();
    void on_back();


private:
    Ui::EditDeadBodyDialog *ui;
};

#endif // EDITDEADBODYDIALOG_H
