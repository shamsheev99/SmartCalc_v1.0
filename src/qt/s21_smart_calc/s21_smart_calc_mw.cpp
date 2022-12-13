#include "s21_smart_calc_mw.h"
#include "ui_s21_smart_calc_mw.h"
#include "QMessageBox"
#include "QString"


extern "C" {
#include "../../s21_smart_calc.h"
#include "credit_calc.h"
#include "s21_plot_print.h"
}

s21_smart_calc_MW::s21_smart_calc_MW(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::s21_smart_calc_MW)
{
    ui->setupUi(this);
    connect(ui->pushButton_num0, SIGNAL(clicked()), this, SLOT(key_numbers()));
    connect(ui->pushButton_num1, SIGNAL(clicked()), this, SLOT(key_numbers()));
    connect(ui->pushButton_num2, SIGNAL(clicked()), this, SLOT(key_numbers()));
    connect(ui->pushButton_num3, SIGNAL(clicked()), this, SLOT(key_numbers()));
    connect(ui->pushButton_num4, SIGNAL(clicked()), this, SLOT(key_numbers()));
    connect(ui->pushButton_num5, SIGNAL(clicked()), this, SLOT(key_numbers()));
    connect(ui->pushButton_num6, SIGNAL(clicked()), this, SLOT(key_numbers()));
    connect(ui->pushButton_num7, SIGNAL(clicked()), this, SLOT(key_numbers()));
    connect(ui->pushButton_num8, SIGNAL(clicked()), this, SLOT(key_numbers()));
    connect(ui->pushButton_num9, SIGNAL(clicked()), this, SLOT(key_numbers()));

    connect(ui->pushButton_plus,    SIGNAL(clicked()), this, SLOT(key_operations()));
    connect(ui->pushButton_minus,   SIGNAL(clicked()), this, SLOT(key_operations()));
    connect(ui->pushButton_div,     SIGNAL(clicked()), this, SLOT(key_operations()));
    connect(ui->pushButton_mult,    SIGNAL(clicked()), this, SLOT(key_operations()));
    connect(ui->pushButton_mod,     SIGNAL(clicked()), this, SLOT(key_operations()));
    connect(ui->pushButton_braceO,  SIGNAL(clicked()), this, SLOT(key_operations()));
    connect(ui->pushButton_braceC,  SIGNAL(clicked()), this, SLOT(key_operations()));
    connect(ui->pushButton_pow,     SIGNAL(clicked()), this, SLOT(key_operations()));
    connect(ui->pushButton_x,       SIGNAL(clicked()), this, SLOT(key_operations()));

    connect(ui->pushButton_sin,     SIGNAL(clicked()), this, SLOT(key_functions()));
    connect(ui->pushButton_cos,     SIGNAL(clicked()), this, SLOT(key_functions()));
    connect(ui->pushButton_tan,     SIGNAL(clicked()), this, SLOT(key_functions()));
    connect(ui->pushButton_asin,    SIGNAL(clicked()), this, SLOT(key_functions()));
    connect(ui->pushButton_acos,    SIGNAL(clicked()), this, SLOT(key_functions()));
    connect(ui->pushButton_atan,    SIGNAL(clicked()), this, SLOT(key_functions()));
    connect(ui->pushButton_log,     SIGNAL(clicked()), this, SLOT(key_functions()));
    connect(ui->pushButton_ln,      SIGNAL(clicked()), this, SLOT(key_functions()));
    connect(ui->pushButton_sqrt,    SIGNAL(clicked()), this, SLOT(key_functions()));

}

s21_smart_calc_MW::~s21_smart_calc_MW()
{
    delete ui;
}


void s21_smart_calc_MW::on_pushButton_ans_clicked()
{
    QByteArray ba = ui->label->text().toLocal8Bit();
    char *str = ba.data();
    char input_str[256] = {0};
    int i;
    for (i = 0; i < 255 && *str; i++) {
      input_str[i] = *str;
      str++;
    }
    input_str[i] = '\n';
    input_str[i + 1] = '\0';
    double x = ui->doubleSpinBox->value();
    double d = get_result(input_str, x);
    if (isnan(d)) {
        ui->statusbar->showMessage("Error", 2000);
        ui->label->clear();
    }
    else
    {
        if (ui->radioButton->isChecked() == true) {
            plot_window = new s21_plot_print(this);
            connect(this, &s21_smart_calc_MW::signal, plot_window, &s21_plot_print::slot);
            emit signal(ui->label->text());
            plot_window->setModal(true);
            plot_window->exec();
        }
        ui->label->setText( QString::number(d,'g', 7)  );
    }
}

void s21_smart_calc_MW::key_numbers()
{
    QPushButton *key = (QPushButton *)sender();

        ui->label->setText(ui->label->text()+key->text());

}

void s21_smart_calc_MW::key_operations()
{
    QPushButton *key = (QPushButton *)sender();
    if (key->text().contains("%")) {
        ui->label->setText(ui->label->text()+" mod ");
    } else {
        ui->label->setText(ui->label->text()+key->text()); }
}

void s21_smart_calc_MW::key_functions()
{
    QPushButton *key = (QPushButton *)sender();
    if (key->text().contains("√")) {
        ui->label->setText(ui->label->text()+"sqrt"+'(');
    } else {
    ui->label->setText(ui->label->text()+key->text()+'(');
    }
}


void s21_smart_calc_MW::on_pushButton_dot_clicked()
{
    ui->label->setText(ui->label->text() + ".");
}


void s21_smart_calc_MW::on_pushButton_clear_clicked()
{
    ui->label->clear();
}


void s21_smart_calc_MW::on_pushButton_backspace_clicked()
{
    QString str = ui->label->text();
    str.chop(1);
    ui->label->setText(str);
}


void s21_smart_calc_MW::on_pushButton_credit_clicked()
{
    credit_window = new credit_calc(this);
    credit_window->setModal(true);
    credit_window->exec();
}

