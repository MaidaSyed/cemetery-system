#ifndef GUARDWINDOW_H
#define GUARDWINDOW_H

#include <QDialog>

namespace Ui {
class guardWindow;
}

class guardWindow : public QDialog
{
    Q_OBJECT

public:
    explicit guardWindow(QWidget *parent = nullptr);
    ~guardWindow();

private slots:
    void on_viewBodiesButton_clicked();
    void on_maintainBodiesButton_clicked();
    void on_Logout();
private:
    Ui::guardWindow *ui;
};

#endif // GUARDWINDOW_H
