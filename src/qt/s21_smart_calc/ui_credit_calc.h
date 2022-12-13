/********************************************************************************
** Form generated from reading UI file 'credit_calc.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREDIT_CALC_H
#define UI_CREDIT_CALC_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_credit_calc
{
public:
    QLabel *label_5;
    QRadioButton *radioButton_different;
    QSpinBox *spinBox_term;
    QLineEdit *lineEdit_overpayment;
    QTableView *tableView;
    QLabel *label;
    QLabel *label_3;
    QDoubleSpinBox *doubleSpinBox_bid;
    QLabel *label_4;
    QLabel *label_6;
    QPushButton *pushButton_calculate;
    QLineEdit *lineEdit_total;
    QLabel *label_2;
    QDoubleSpinBox *doubleSpinBox_credit_sum;
    QRadioButton *radioButton_annuity;

    void setupUi(QDialog *credit_calc)
    {
        if (credit_calc->objectName().isEmpty())
            credit_calc->setObjectName(QString::fromUtf8("credit_calc"));
        credit_calc->resize(560, 504);
        label_5 = new QLabel(credit_calc);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 115, 111, 31));
        radioButton_different = new QRadioButton(credit_calc);
        radioButton_different->setObjectName(QString::fromUtf8("radioButton_different"));
        radioButton_different->setGeometry(QRect(0, 61, 169, 20));
        spinBox_term = new QSpinBox(credit_calc);
        spinBox_term->setObjectName(QString::fromUtf8("spinBox_term"));
        spinBox_term->setGeometry(QRect(350, 45, 71, 31));
        spinBox_term->setMinimum(1);
        spinBox_term->setMaximum(360);
        spinBox_term->setValue(36);
        lineEdit_overpayment = new QLineEdit(credit_calc);
        lineEdit_overpayment->setObjectName(QString::fromUtf8("lineEdit_overpayment"));
        lineEdit_overpayment->setGeometry(QRect(430, 120, 121, 21));
        lineEdit_overpayment->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	border: 1px solid black;\n"
"	background-color: rgba(64, 65, 66, 242);\n"
"	color: white;\n"
"}"));
        tableView = new QTableView(credit_calc);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(0, 145, 561, 361));
        label = new QLabel(credit_calc);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(180, 5, 141, 31));
        label_3 = new QLabel(credit_calc);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(440, 5, 131, 31));
        doubleSpinBox_bid = new QDoubleSpinBox(credit_calc);
        doubleSpinBox_bid->setObjectName(QString::fromUtf8("doubleSpinBox_bid"));
        doubleSpinBox_bid->setGeometry(QRect(460, 45, 91, 31));
        doubleSpinBox_bid->setMinimum(0.100000000000000);
        doubleSpinBox_bid->setMaximum(99.000000000000000);
        doubleSpinBox_bid->setSingleStep(0.500000000000000);
        doubleSpinBox_bid->setValue(20.000000000000000);
        label_4 = new QLabel(credit_calc);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(30, 5, 81, 31));
        label_6 = new QLabel(credit_calc);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(270, 115, 151, 31));
        pushButton_calculate = new QPushButton(credit_calc);
        pushButton_calculate->setObjectName(QString::fromUtf8("pushButton_calculate"));
        pushButton_calculate->setGeometry(QRect(20, 85, 531, 31));
        pushButton_calculate->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border:  1px solid black;\n"
"	background-color: orange;\n"
"	color: black;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #dadbde, stop: 1 rgb(255, 138, 100));\n"
"}"));
        lineEdit_total = new QLineEdit(credit_calc);
        lineEdit_total->setObjectName(QString::fromUtf8("lineEdit_total"));
        lineEdit_total->setGeometry(QRect(122, 122, 121, 21));
        lineEdit_total->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	border: 1px solid black;\n"
"	background-color: rgba(64, 65, 66, 242);\n"
"	color: white;\n"
"}"));
        label_2 = new QLabel(credit_calc);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(350, 5, 71, 31));
        doubleSpinBox_credit_sum = new QDoubleSpinBox(credit_calc);
        doubleSpinBox_credit_sum->setObjectName(QString::fromUtf8("doubleSpinBox_credit_sum"));
        doubleSpinBox_credit_sum->setGeometry(QRect(180, 45, 141, 31));
        doubleSpinBox_credit_sum->setStyleSheet(QString::fromUtf8("QDoubleSpinBox {\n"
"	color: white;\n"
"}"));
        doubleSpinBox_credit_sum->setMinimum(1.000000000000000);
        doubleSpinBox_credit_sum->setMaximum(100000000.000000000000000);
        doubleSpinBox_credit_sum->setValue(1000000.000000000000000);
        radioButton_annuity = new QRadioButton(credit_calc);
        radioButton_annuity->setObjectName(QString::fromUtf8("radioButton_annuity"));
        radioButton_annuity->setGeometry(QRect(0, 40, 109, 20));
        radioButton_annuity->setChecked(true);

        retranslateUi(credit_calc);

        QMetaObject::connectSlotsByName(credit_calc);
    } // setupUi

    void retranslateUi(QDialog *credit_calc)
    {
        credit_calc->setWindowTitle(QCoreApplication::translate("credit_calc", "Dialog", nullptr));
        label_5->setText(QCoreApplication::translate("credit_calc", "\320\236\320\261\321\211\320\260\321\217 \320\262\321\213\320\277\320\273\320\260\321\202\320\260:", nullptr));
        radioButton_different->setText(QCoreApplication::translate("credit_calc", "\320\224\320\270\321\204\321\204\320\265\321\200\320\265\320\275\321\206\320\270\321\200\320\276\320\262\320\260\320\275\320\275\321\213\320\271", nullptr));
        label->setText(QCoreApplication::translate("credit_calc", "\320\236\320\261\321\211\320\260\321\217 \321\201\321\203\320\274\320\274\320\260 \320\272\321\200\320\265\320\264\320\270\321\202\320\260", nullptr));
        label_3->setText(QCoreApplication::translate("credit_calc", "\320\237\321\200\320\276\321\206\320\265\320\275\321\202\320\275\320\260\321\217 \321\201\321\202\320\260\320\262\320\272\320\260", nullptr));
        label_4->setText(QCoreApplication::translate("credit_calc", "\320\242\320\270\320\277 \320\277\320\273\320\260\321\202\320\265\320\266\320\260", nullptr));
        label_6->setText(QCoreApplication::translate("credit_calc", "\320\237\320\265\321\200\320\265\320\277\320\273\320\260\321\202\320\260 \320\277\320\276 \320\272\321\200\320\265\320\264\320\270\321\202\321\203:", nullptr));
        pushButton_calculate->setText(QCoreApplication::translate("credit_calc", "\320\240\320\260\321\201\321\201\321\201\321\207\320\270\321\202\320\260\321\202\321\214", nullptr));
        label_2->setText(QCoreApplication::translate("credit_calc", "\320\241\321\200\320\276\320\272, \320\274\320\265\321\201", nullptr));
        radioButton_annuity->setText(QCoreApplication::translate("credit_calc", "\320\220\320\275\320\275\321\203\320\270\321\202\320\265\321\202\320\275\321\213\320\271", nullptr));
    } // retranslateUi

};

namespace Ui {
    class credit_calc: public Ui_credit_calc {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREDIT_CALC_H
