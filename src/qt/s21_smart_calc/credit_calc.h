#ifndef CREDIT_CALC_H
#define CREDIT_CALC_H

#include <QDialog>
#include <QtMath>
#include <QStandardItemModel>

namespace Ui {
class credit_calc;
}

class credit_calc : public QDialog
{
    Q_OBJECT

public:
    explicit credit_calc(QWidget *parent = nullptr);
    ~credit_calc();

private:
    Ui::credit_calc *ui;
private slots:
     void on_pushButton_calculate_clicked();
};

#endif // CREDIT_CALC_H
