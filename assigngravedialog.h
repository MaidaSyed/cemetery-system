#ifndef ASSIGNGRAVEDIALOG_H
#define ASSIGNGRAVEDIALOG_H

#include <QDialog>

namespace Ui {
class AssignGraveDialog;
}

class AssignGraveDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AssignGraveDialog(QWidget *parent = nullptr);
    ~AssignGraveDialog();

private slots:
    void on_saveButton_clicked();

private:
    Ui::AssignGraveDialog *ui;
    void saveGrave(const QString &graveNo, const QString &location, int height);
};

#endif // ASSIGNGRAVEDIALOG_H
