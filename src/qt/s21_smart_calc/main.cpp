#include "s21_smart_calc_mw.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    s21_smart_calc_MW w;
    w.show();
    return a.exec();
}
