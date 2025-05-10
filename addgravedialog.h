#ifndef ADDGRAVEDIALOG_H
#define ADDGRAVEDIALOG_H

#include <QDialog>

namespace Ui {
class addGraveDialog;
}

class addGraveDialog : public QDialog
{
    Q_OBJECT

public:
    explicit addGraveDialog(QWidget *parent = nullptr);
    ~addGraveDialog();

private slots:
    void on_addButton_clicked();
    void on_cancelButton_clicked();

private:
    Ui::addGraveDialog *ui;
};

#endif // ADDGRAVEDIALOG_H
