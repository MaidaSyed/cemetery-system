#ifndef VISITOR_H
#define VISITOR_H

#include <QDialog>
#include <QDateTime>
#include "deadbody.h"

namespace Ui {
class visitor;
}

class visitor : public QDialog
{
    Q_OBJECT

public:
    explicit visitor(QWidget *parent = nullptr);
    ~visitor();

private slots:
    void on_nextButton_clicked();
    void on_searchButton_clicked();
    void on_waterButton_clicked();
    void on_flowerButton_clicked();
    void on_cleanButton_clicked();
    void on_backButton_clicked();
    void on_back();

private:
    Ui::visitor *ui;
    QList<DeadBody> bodies;
    QString visitorName, relation;
    QDateTime entryTime;

    void loadBodies();
    void displayResults(const QString &query);
    void saveVisitorLog();
};

#endif // VISITOR_H
