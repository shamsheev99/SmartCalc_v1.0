#include "s21_plot_print.h"
#include "ui_s21_plot_print.h"

extern "C" {
#include "../../s21_smart_calc.h"
#include "s21_plot_print.h"
}


s21_plot_print::s21_plot_print(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::s21_plot_print)
{
    ui->setupUi(this);
}

s21_plot_print::~s21_plot_print()
{
    delete ui;
}


void s21_plot_print::get_str(char *input_str, QString src) {
    QByteArray ba = src.toLocal8Bit();
    char *str = ba.data();
    int i;
    for (i = 0; i < 255 && *str; i++) {
      *input_str = *str;
      str++;
      input_str++;
    }
    *input_str = '\n';
    *(++input_str) = '\0';
}

void s21_plot_print::calc_graph(double minX, double maxX, double minY, double maxY
                      ) {
  QVector<double> x,y;
  char input_str[256];
  get_str(input_str, str);
  double X = minX;
  double step = (maxX-minX)/100000;
  double min = 1000000;
  double max = -10000000;
  while (X < maxX) {
    x.push_back(X);
    double result = get_result(input_str, X);
    y.push_back(result);

  if (min > result && !isinf(result)) min = result;
  if (max < result && !isinf(result)) max = result;
    X += step;
  }
  if (min < -1000000) min = -1000000;
  if (max > 1000000) max = 1000000;
  ui->widget->xAxis->setRange(minX * 1.005, maxX * 1.005);
  if (ui->checkBox_autoscale->isChecked()) {
      ui->widget->yAxis->setRange(min * 1.005, max * 1.005);
      ui->doubleSpinBox_maxY->setValue(max* 1.005);
      ui->doubleSpinBox_minY->setValue(min* 1.005);
  } else {
      ui->doubleSpinBox_maxY->update();
      ui->doubleSpinBox_minY->update();
      ui->widget->yAxis->setRange(minY * 1.005, maxY * 1.005);
  }
  qDebug() << min << " " << max;
  ui->widget->addGraph();
  ui->widget->graph(0)->addData(x, y);
  ui->widget->graph(0)->setLineStyle(QCPGraph::lsNone);
  ui->widget->graph(0)->setScatterStyle(
      QCPScatterStyle(QCPScatterStyle::ssCircle, 1));
  ui->widget->replot();
}

void s21_plot_print::slot(QString str) {
    this->str = str;
    char input_str[256];
    get_str(input_str, str);
    ui->label->setText(str);
    calc_graph(-M_PI, M_PI,  -5,  5);
    ui->doubleSpinBox_maxX->setValue(M_PI* 1.005);
    ui->doubleSpinBox_minX->setValue(-M_PI* 1.005);
}

void s21_plot_print::on_pushButton_resize_clicked() {
  if (ui->doubleSpinBox_minX->value() >= ui->doubleSpinBox_maxX->value() || (ui->doubleSpinBox_minY->value() >= ui->doubleSpinBox_maxY->value() && !ui->checkBox_autoscale->isChecked())) {
      ui->label->setText("ERROR");
  } else {
      ui->label->setText(str);
      ui->widget->removeGraph(0);
      calc_graph(ui->doubleSpinBox_minX->value(), ui->doubleSpinBox_maxX->value(),
                 ui->doubleSpinBox_minY->value(), ui->doubleSpinBox_maxY->value());
  }

}


