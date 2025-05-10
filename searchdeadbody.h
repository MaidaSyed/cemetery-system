#ifndef SEARCHDEADBODY_H
#define SEARCHDEADBODY_H

#include <QDialog>
#include "deadbody.h"

namespace Ui {
class searchDeadBody;
}

class searchDeadBody : public QDialog
{
    Q_OBJECT

public:
    explicit searchDeadBody(QWidget *parent = nullptr);
    ~searchDeadBody();

private slots:
    void on_searchButton_clicked();
    void on_waterButton_clicked();
    void on_flowerButton_clicked();
    void on_cleanButton_clicked();
    void loadBodies();
    void displayResults(const QString &query);
    void on_backButton_clicked();

private:
    Ui::searchDeadBody *ui;
    QList<DeadBody> bodies;
};

#endif // SEARCHDEADBODY_H
