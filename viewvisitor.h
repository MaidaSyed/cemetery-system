#ifndef VIEWVISITOR_H
#define VIEWVISITOR_H

#include <QDialog>

namespace Ui {
class viewVisitor;
}

class viewVisitor : public QDialog
{
    Q_OBJECT

public:
    explicit viewVisitor(QWidget *parent = nullptr);
    ~viewVisitor();

private slots:
    void on_back();

private:
    Ui::viewVisitor *ui;
    void loadVisitorData();
};

#endif // VIEWVISITOR_H
