/********************************************************************************
** Form generated from reading UI file 's21_plot_print.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_S21_PLOT_PRINT_H
#define UI_S21_PLOT_PRINT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_s21_plot_print
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_6;
    QDoubleSpinBox *doubleSpinBox_minX;
    QLabel *label_7;
    QDoubleSpinBox *doubleSpinBox_maxX;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QDoubleSpinBox *doubleSpinBox_minY;
    QLabel *label_3;
    QDoubleSpinBox *doubleSpinBox_maxY;
    QPushButton *pushButton_resize;
    QCustomPlot *widget;
    QLabel *label;
    QCheckBox *checkBox_autoscale;

    void setupUi(QDialog *s21_plot_print)
    {
        if (s21_plot_print->objectName().isEmpty())
            s21_plot_print->setObjectName(QString::fromUtf8("s21_plot_print"));
        s21_plot_print->resize(768, 518);
        layoutWidget = new QWidget(s21_plot_print);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 370, 581, 133));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_3->addWidget(label_6);

        doubleSpinBox_minX = new QDoubleSpinBox(layoutWidget);
        doubleSpinBox_minX->setObjectName(QString::fromUtf8("doubleSpinBox_minX"));
        doubleSpinBox_minX->setMinimum(-1000000.000000000000000);
        doubleSpinBox_minX->setMaximum(1000000.000000000000000);
        doubleSpinBox_minX->setSingleStep(1.000000000000000);
        doubleSpinBox_minX->setValue(-1.000000000000000);

        horizontalLayout_3->addWidget(doubleSpinBox_minX);

        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_3->addWidget(label_7);

        doubleSpinBox_maxX = new QDoubleSpinBox(layoutWidget);
        doubleSpinBox_maxX->setObjectName(QString::fromUtf8("doubleSpinBox_maxX"));
        doubleSpinBox_maxX->setMinimum(-1000000.000000000000000);
        doubleSpinBox_maxX->setMaximum(1000000.000000000000000);
        doubleSpinBox_maxX->setValue(1.000000000000000);

        horizontalLayout_3->addWidget(doubleSpinBox_maxX);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        doubleSpinBox_minY = new QDoubleSpinBox(layoutWidget);
        doubleSpinBox_minY->setObjectName(QString::fromUtf8("doubleSpinBox_minY"));
        doubleSpinBox_minY->setMinimum(-1000000.000000000000000);
        doubleSpinBox_minY->setMaximum(1000000.000000000000000);
        doubleSpinBox_minY->setValue(-1.000000000000000);

        horizontalLayout->addWidget(doubleSpinBox_minY);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout->addWidget(label_3);

        doubleSpinBox_maxY = new QDoubleSpinBox(layoutWidget);
        doubleSpinBox_maxY->setObjectName(QString::fromUtf8("doubleSpinBox_maxY"));
        doubleSpinBox_maxY->setMinimum(-1000000.000000000000000);
        doubleSpinBox_maxY->setMaximum(1000000.000000000000000);
        doubleSpinBox_maxY->setValue(1.000000000000000);

        horizontalLayout->addWidget(doubleSpinBox_maxY);


        verticalLayout->addLayout(horizontalLayout);

        pushButton_resize = new QPushButton(layoutWidget);
        pushButton_resize->setObjectName(QString::fromUtf8("pushButton_resize"));
        pushButton_resize->setMinimumSize(QSize(0, 30));
        pushButton_resize->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border:  1px solid black;\n"
"	background-color: orange;\n"
"	color: black;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #dadbde, stop: 1 rgb(255, 138, 100));\n"
"}"));

        verticalLayout->addWidget(pushButton_resize);

        widget = new QCustomPlot(s21_plot_print);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 0, 741, 361));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        widget->setMaximumSize(QSize(16777215, 16777215));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(290, -10, 141, 31));
        label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color: black;\n"
"}"));
        label->setAlignment(Qt::AlignCenter);
        checkBox_autoscale = new QCheckBox(s21_plot_print);
        checkBox_autoscale->setObjectName(QString::fromUtf8("checkBox_autoscale"));
        checkBox_autoscale->setGeometry(QRect(600, 380, 101, 20));

        retranslateUi(s21_plot_print);

        QMetaObject::connectSlotsByName(s21_plot_print);
    } // setupUi

    void retranslateUi(QDialog *s21_plot_print)
    {
        s21_plot_print->setWindowTitle(QCoreApplication::translate("s21_plot_print", "Dialog", nullptr));
        label_6->setText(QCoreApplication::translate("s21_plot_print", "minimum X", nullptr));
        label_7->setText(QCoreApplication::translate("s21_plot_print", "maximux X", nullptr));
        label_2->setText(QCoreApplication::translate("s21_plot_print", "minimum Y", nullptr));
        label_3->setText(QCoreApplication::translate("s21_plot_print", "maximum Y", nullptr));
        pushButton_resize->setText(QCoreApplication::translate("s21_plot_print", "Resize", nullptr));
        label->setText(QCoreApplication::translate("s21_plot_print", "TextLabel", nullptr));
        checkBox_autoscale->setText(QCoreApplication::translate("s21_plot_print", "Autoscale Y", nullptr));
    } // retranslateUi

};

namespace Ui {
    class s21_plot_print: public Ui_s21_plot_print {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_S21_PLOT_PRINT_H
