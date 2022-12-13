/********************************************************************************
** Form generated from reading UI file 's21_smart_calc_mw.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_S21_SMART_CALC_MW_H
#define UI_S21_SMART_CALC_MW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_s21_smart_calc_MW
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QGridLayout *gridLayout;
    QPushButton *pushButton_acos;
    QPushButton *pushButton_ans;
    QPushButton *pushButton_plus;
    QPushButton *pushButton_sqrt;
    QPushButton *pushButton_backspace;
    QPushButton *pushButton_num2;
    QPushButton *pushButton_num9;
    QPushButton *pushButton_num4;
    QPushButton *pushButton_tan;
    QPushButton *pushButton_atan;
    QPushButton *pushButton_credit;
    QPushButton *pushButton_ln;
    QPushButton *pushButton_num7;
    QPushButton *pushButton_num5;
    QPushButton *pushButton_num1;
    QPushButton *pushButton_num3;
    QPushButton *pushButton_clear;
    QPushButton *pushButton_num8;
    QPushButton *pushButton_minus;
    QPushButton *pushButton_sin;
    QPushButton *pushButton_x;
    QPushButton *pushButton_braceC;
    QPushButton *pushButton_log;
    QPushButton *pushButton_cos;
    QRadioButton *radioButton_2;
    QPushButton *pushButton_pow;
    QPushButton *pushButton_num6;
    QPushButton *pushButton_asin;
    QPushButton *pushButton_mod;
    QPushButton *pushButton_div;
    QPushButton *pushButton_mult;
    QPushButton *pushButton_num0;
    QDoubleSpinBox *doubleSpinBox;
    QPushButton *pushButton_braceO;
    QRadioButton *radioButton;
    QPushButton *pushButton_dot;
    QLabel *label;
    QStatusBar *statusbar;
    QButtonGroup *buttonGroup;

    void setupUi(QMainWindow *s21_smart_calc_MW)
    {
        if (s21_smart_calc_MW->objectName().isEmpty())
            s21_smart_calc_MW->setObjectName(QString::fromUtf8("s21_smart_calc_MW"));
        s21_smart_calc_MW->resize(361, 449);
        s21_smart_calc_MW->setMinimumSize(QSize(40, 40));
        s21_smart_calc_MW->setMaximumSize(QSize(16777215, 16777215));
        s21_smart_calc_MW->setBaseSize(QSize(40, 40));
        centralwidget = new QWidget(s21_smart_calc_MW);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 0, 361, 431));
        gridLayout = new QGridLayout(widget);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_acos = new QPushButton(widget);
        pushButton_acos->setObjectName(QString::fromUtf8("pushButton_acos"));
        pushButton_acos->setMinimumSize(QSize(60, 60));
        pushButton_acos->setMaximumSize(QSize(60, 60));
        pushButton_acos->setBaseSize(QSize(60, 60));
        pushButton_acos->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border:  1px solid black;\n"
"	background-color: rgba(46, 47, 48, 243);\n"
"	color: white;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #dadbde, stop: 1 white);\n"
"}"));

        gridLayout->addWidget(pushButton_acos, 3, 0, 1, 1);

        pushButton_ans = new QPushButton(widget);
        pushButton_ans->setObjectName(QString::fromUtf8("pushButton_ans"));
        pushButton_ans->setMinimumSize(QSize(60, 60));
        pushButton_ans->setMaximumSize(QSize(60, 60));
        pushButton_ans->setBaseSize(QSize(100, 100));
        pushButton_ans->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border:  1px solid black;\n"
"	background-color: orange;\n"
"	color: black;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #dadbde, stop: 1 rgb(255, 138, 100));\n"
"}"));

        gridLayout->addWidget(pushButton_ans, 6, 4, 1, 1);

        pushButton_plus = new QPushButton(widget);
        pushButton_plus->setObjectName(QString::fromUtf8("pushButton_plus"));
        pushButton_plus->setMinimumSize(QSize(60, 60));
        pushButton_plus->setMaximumSize(QSize(60, 60));
        pushButton_plus->setBaseSize(QSize(100, 100));
        pushButton_plus->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border:  1px solid black;\n"
"	background-color: orange;\n"
"	color: black;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #dadbde, stop: 1 rgb(255, 138, 100));\n"
"}"));

        gridLayout->addWidget(pushButton_plus, 4, 5, 1, 1);

        pushButton_sqrt = new QPushButton(widget);
        pushButton_sqrt->setObjectName(QString::fromUtf8("pushButton_sqrt"));
        pushButton_sqrt->setMinimumSize(QSize(60, 60));
        pushButton_sqrt->setMaximumSize(QSize(60, 60));
        pushButton_sqrt->setBaseSize(QSize(100, 100));
        QFont font;
        font.setPointSize(13);
        pushButton_sqrt->setFont(font);
        pushButton_sqrt->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border:  1px solid black;\n"
"	background-color: rgba(46, 47, 48, 243);\n"
"	color: white;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #dadbde, stop: 1 white);\n"
"}"));

        gridLayout->addWidget(pushButton_sqrt, 6, 1, 1, 1);

        pushButton_backspace = new QPushButton(widget);
        pushButton_backspace->setObjectName(QString::fromUtf8("pushButton_backspace"));
        pushButton_backspace->setMinimumSize(QSize(60, 60));
        pushButton_backspace->setMaximumSize(QSize(60, 60));
        pushButton_backspace->setBaseSize(QSize(100, 100));
        QFont font1;
        font1.setPointSize(20);
        pushButton_backspace->setFont(font1);
        pushButton_backspace->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border:  1px solid black;\n"
"	background-color: orange;\n"
"	color: black;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #dadbde, stop: 1 rgb(255, 138, 100));\n"
"}"));

        gridLayout->addWidget(pushButton_backspace, 2, 3, 1, 1);

        pushButton_num2 = new QPushButton(widget);
        pushButton_num2->setObjectName(QString::fromUtf8("pushButton_num2"));
        pushButton_num2->setMinimumSize(QSize(60, 60));
        pushButton_num2->setMaximumSize(QSize(60, 60));
        pushButton_num2->setBaseSize(QSize(100, 100));
        pushButton_num2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border:  1px solid black;\n"
"	color: white;\n"
"	background-color: rgba(64, 65, 66, 242);\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #dadbde, stop: 1 grey);\n"
"}"));

        gridLayout->addWidget(pushButton_num2, 5, 3, 1, 1);

        pushButton_num9 = new QPushButton(widget);
        pushButton_num9->setObjectName(QString::fromUtf8("pushButton_num9"));
        pushButton_num9->setMinimumSize(QSize(60, 60));
        pushButton_num9->setMaximumSize(QSize(60, 60));
        pushButton_num9->setBaseSize(QSize(100, 100));
        pushButton_num9->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border:  1px solid black;\n"
"	color: white;\n"
"	background-color: rgba(64, 65, 66, 242);\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #dadbde, stop: 1 grey);\n"
"}"));

        gridLayout->addWidget(pushButton_num9, 3, 4, 1, 1);

        pushButton_num4 = new QPushButton(widget);
        pushButton_num4->setObjectName(QString::fromUtf8("pushButton_num4"));
        pushButton_num4->setMinimumSize(QSize(60, 60));
        pushButton_num4->setMaximumSize(QSize(60, 60));
        pushButton_num4->setBaseSize(QSize(100, 100));
        pushButton_num4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border:  1px solid black;\n"
"	color: white;\n"
"	background-color: rgba(64, 65, 66, 242);\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #dadbde, stop: 1 grey);\n"
"}"));

        gridLayout->addWidget(pushButton_num4, 4, 2, 1, 1);

        pushButton_tan = new QPushButton(widget);
        pushButton_tan->setObjectName(QString::fromUtf8("pushButton_tan"));
        pushButton_tan->setMinimumSize(QSize(60, 60));
        pushButton_tan->setMaximumSize(QSize(60, 60));
        pushButton_tan->setBaseSize(QSize(100, 100));
        pushButton_tan->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border:  1px solid black;\n"
"	background-color: rgba(46, 47, 48, 243);\n"
"	color: white;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #dadbde, stop: 1 white);\n"
"}"));

        gridLayout->addWidget(pushButton_tan, 4, 1, 1, 1);

        pushButton_atan = new QPushButton(widget);
        pushButton_atan->setObjectName(QString::fromUtf8("pushButton_atan"));
        pushButton_atan->setMinimumSize(QSize(60, 60));
        pushButton_atan->setMaximumSize(QSize(60, 60));
        pushButton_atan->setBaseSize(QSize(60, 60));
        pushButton_atan->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border:  1px solid black;\n"
"	background-color: rgba(46, 47, 48, 243);\n"
"	color: white;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #dadbde, stop: 1 white);\n"
"}"));

        gridLayout->addWidget(pushButton_atan, 4, 0, 1, 1);

        pushButton_credit = new QPushButton(widget);
        pushButton_credit->setObjectName(QString::fromUtf8("pushButton_credit"));
        pushButton_credit->setMinimumSize(QSize(60, 60));
        pushButton_credit->setMaximumSize(QSize(60, 60));
        pushButton_credit->setBaseSize(QSize(100, 100));
        pushButton_credit->setToolTipDuration(0);
        pushButton_credit->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border:  1px solid black;\n"
"	background-color: orange;\n"
"	color: black;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #dadbde, stop: 1 rgb(255, 138, 100));\n"
"}"));

        gridLayout->addWidget(pushButton_credit, 6, 5, 1, 1);

        pushButton_ln = new QPushButton(widget);
        pushButton_ln->setObjectName(QString::fromUtf8("pushButton_ln"));
        pushButton_ln->setMinimumSize(QSize(60, 60));
        pushButton_ln->setMaximumSize(QSize(60, 60));
        pushButton_ln->setBaseSize(QSize(60, 60));
        pushButton_ln->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border:  1px solid black;\n"
"	background-color: rgba(46, 47, 48, 243);\n"
"	color: white;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #dadbde, stop: 1 white);\n"
"}"));

        gridLayout->addWidget(pushButton_ln, 5, 0, 1, 1);

        pushButton_num7 = new QPushButton(widget);
        pushButton_num7->setObjectName(QString::fromUtf8("pushButton_num7"));
        pushButton_num7->setMinimumSize(QSize(60, 60));
        pushButton_num7->setMaximumSize(QSize(60, 60));
        pushButton_num7->setBaseSize(QSize(100, 100));
        pushButton_num7->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border:  1px solid black;\n"
"	color: white;\n"
"	background-color: rgba(64, 65, 66, 242);\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #dadbde, stop: 1 grey);\n"
"}"));

        gridLayout->addWidget(pushButton_num7, 3, 2, 1, 1);

        pushButton_num5 = new QPushButton(widget);
        pushButton_num5->setObjectName(QString::fromUtf8("pushButton_num5"));
        pushButton_num5->setMinimumSize(QSize(60, 60));
        pushButton_num5->setMaximumSize(QSize(60, 60));
        pushButton_num5->setBaseSize(QSize(100, 100));
        pushButton_num5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border:  1px solid black;\n"
"	color: white;\n"
"	background-color: rgba(64, 65, 66, 242);\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #dadbde, stop: 1 grey);\n"
"}"));

        gridLayout->addWidget(pushButton_num5, 4, 3, 1, 1);

        pushButton_num1 = new QPushButton(widget);
        pushButton_num1->setObjectName(QString::fromUtf8("pushButton_num1"));
        pushButton_num1->setMinimumSize(QSize(60, 60));
        pushButton_num1->setMaximumSize(QSize(60, 60));
        pushButton_num1->setBaseSize(QSize(100, 100));
        pushButton_num1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border:  1px solid black;\n"
"	color: white;\n"
"	background-color: rgba(64, 65, 66, 242);\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #dadbde, stop: 1 grey);\n"
"}"));

        gridLayout->addWidget(pushButton_num1, 5, 2, 1, 1);

        pushButton_num3 = new QPushButton(widget);
        pushButton_num3->setObjectName(QString::fromUtf8("pushButton_num3"));
        pushButton_num3->setMinimumSize(QSize(60, 60));
        pushButton_num3->setMaximumSize(QSize(60, 60));
        pushButton_num3->setBaseSize(QSize(100, 100));
        pushButton_num3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border:  1px solid black;\n"
"	color: white;\n"
"	background-color: rgba(64, 65, 66, 242);\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #dadbde, stop: 1 grey);\n"
"}"));

        gridLayout->addWidget(pushButton_num3, 5, 4, 1, 1);

        pushButton_clear = new QPushButton(widget);
        pushButton_clear->setObjectName(QString::fromUtf8("pushButton_clear"));
        pushButton_clear->setMinimumSize(QSize(60, 60));
        pushButton_clear->setMaximumSize(QSize(60, 60));
        pushButton_clear->setBaseSize(QSize(100, 100));
        pushButton_clear->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border:  1px solid black;\n"
"	background-color: orange;\n"
"	color: black;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #dadbde, stop: 1 rgb(255, 138, 100));\n"
"}"));

        gridLayout->addWidget(pushButton_clear, 2, 2, 1, 1);

        pushButton_num8 = new QPushButton(widget);
        pushButton_num8->setObjectName(QString::fromUtf8("pushButton_num8"));
        pushButton_num8->setMinimumSize(QSize(60, 60));
        pushButton_num8->setMaximumSize(QSize(60, 60));
        pushButton_num8->setBaseSize(QSize(100, 100));
        pushButton_num8->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border:  1px solid black;\n"
"	color: white;\n"
"	background-color: rgba(64, 65, 66, 242);\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #dadbde, stop: 1 grey);\n"
"}"));

        gridLayout->addWidget(pushButton_num8, 3, 3, 1, 1);

        pushButton_minus = new QPushButton(widget);
        pushButton_minus->setObjectName(QString::fromUtf8("pushButton_minus"));
        pushButton_minus->setMinimumSize(QSize(60, 60));
        pushButton_minus->setMaximumSize(QSize(60, 60));
        pushButton_minus->setBaseSize(QSize(100, 100));
        pushButton_minus->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border:  1px solid black;\n"
"	background-color: orange;\n"
"	color: black;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #dadbde, stop: 1 rgb(255, 138, 100));\n"
"}"));

        gridLayout->addWidget(pushButton_minus, 5, 5, 1, 1);

        pushButton_sin = new QPushButton(widget);
        pushButton_sin->setObjectName(QString::fromUtf8("pushButton_sin"));
        pushButton_sin->setMinimumSize(QSize(60, 60));
        pushButton_sin->setMaximumSize(QSize(60, 60));
        pushButton_sin->setBaseSize(QSize(100, 100));
        pushButton_sin->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border:  1px solid black;\n"
"	background-color: rgba(46, 47, 48, 243);\n"
"	color: white;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #dadbde, stop: 1 white);\n"
"}"));

        gridLayout->addWidget(pushButton_sin, 2, 1, 1, 1);

        pushButton_x = new QPushButton(widget);
        pushButton_x->setObjectName(QString::fromUtf8("pushButton_x"));
        pushButton_x->setMinimumSize(QSize(60, 60));
        pushButton_x->setMaximumSize(QSize(60, 60));
        pushButton_x->setBaseSize(QSize(60, 60));
        pushButton_x->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border:  1px solid black;\n"
"	background-color: rgba(46, 47, 48, 243);\n"
"	color: white;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #dadbde, stop: 1 white);\n"
"}"));

        gridLayout->addWidget(pushButton_x, 6, 0, 1, 1);

        pushButton_braceC = new QPushButton(widget);
        pushButton_braceC->setObjectName(QString::fromUtf8("pushButton_braceC"));
        pushButton_braceC->setMinimumSize(QSize(60, 60));
        pushButton_braceC->setMaximumSize(QSize(60, 60));
        pushButton_braceC->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border:  1px solid black;\n"
"	background-color: rgba(46, 47, 48, 243);\n"
"	color: white;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #dadbde, stop: 1 white);\n"
"}"));

        gridLayout->addWidget(pushButton_braceC, 1, 4, 1, 1);

        pushButton_log = new QPushButton(widget);
        pushButton_log->setObjectName(QString::fromUtf8("pushButton_log"));
        pushButton_log->setMinimumSize(QSize(60, 60));
        pushButton_log->setMaximumSize(QSize(60, 60));
        pushButton_log->setBaseSize(QSize(100, 100));
        pushButton_log->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border:  1px solid black;\n"
"	background-color: rgba(46, 47, 48, 243);\n"
"	color: white;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #dadbde, stop: 1 white);\n"
"}"));

        gridLayout->addWidget(pushButton_log, 5, 1, 1, 1);

        pushButton_cos = new QPushButton(widget);
        pushButton_cos->setObjectName(QString::fromUtf8("pushButton_cos"));
        pushButton_cos->setMinimumSize(QSize(60, 60));
        pushButton_cos->setMaximumSize(QSize(60, 60));
        pushButton_cos->setBaseSize(QSize(100, 100));
        pushButton_cos->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border:  1px solid black;\n"
"	background-color: rgba(46, 47, 48, 243);\n"
"	color: white;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #dadbde, stop: 1 white);\n"
"}"));

        gridLayout->addWidget(pushButton_cos, 3, 1, 1, 1);

        radioButton_2 = new QRadioButton(widget);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setMinimumSize(QSize(60, 60));
        radioButton_2->setMaximumSize(QSize(200, 200));
        radioButton_2->setBaseSize(QSize(60, 60));
        radioButton_2->setFont(font);
        radioButton_2->setToolTipDuration(-1);
        radioButton_2->setStyleSheet(QString::fromUtf8("QRadioButton {\n"
"	border:  1px solid black;\n"
"	background-color: rgba(46, 47, 48, 243);\n"
"	color: white;\n"
"}\n"
""));
        radioButton_2->setIconSize(QSize(10, 10));
        radioButton_2->setChecked(true);

        gridLayout->addWidget(radioButton_2, 1, 0, 1, 1);

        pushButton_pow = new QPushButton(widget);
        pushButton_pow->setObjectName(QString::fromUtf8("pushButton_pow"));
        pushButton_pow->setMinimumSize(QSize(60, 60));
        pushButton_pow->setMaximumSize(QSize(60, 60));
        pushButton_pow->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border:  1px solid black;\n"
"	background-color: orange;\n"
"	color: black;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #dadbde, stop: 1 rgb(255, 138, 100));\n"
"}"));

        gridLayout->addWidget(pushButton_pow, 1, 5, 1, 1);

        pushButton_num6 = new QPushButton(widget);
        pushButton_num6->setObjectName(QString::fromUtf8("pushButton_num6"));
        pushButton_num6->setMinimumSize(QSize(60, 60));
        pushButton_num6->setMaximumSize(QSize(60, 60));
        pushButton_num6->setBaseSize(QSize(100, 100));
        pushButton_num6->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border:  1px solid black;\n"
"	color: white;\n"
"	background-color: rgba(64, 65, 66, 242);\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #dadbde, stop: 1 grey);\n"
"}"));

        gridLayout->addWidget(pushButton_num6, 4, 4, 1, 1);

        pushButton_asin = new QPushButton(widget);
        pushButton_asin->setObjectName(QString::fromUtf8("pushButton_asin"));
        pushButton_asin->setMinimumSize(QSize(60, 60));
        pushButton_asin->setMaximumSize(QSize(60, 60));
        pushButton_asin->setBaseSize(QSize(60, 60));
        pushButton_asin->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border:  1px solid black;\n"
"	background-color: rgba(46, 47, 48, 243);\n"
"	color: white;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #dadbde, stop: 1 white);\n"
"}"));

        gridLayout->addWidget(pushButton_asin, 2, 0, 1, 1);

        pushButton_mod = new QPushButton(widget);
        pushButton_mod->setObjectName(QString::fromUtf8("pushButton_mod"));
        pushButton_mod->setMinimumSize(QSize(60, 60));
        pushButton_mod->setMaximumSize(QSize(60, 60));
        pushButton_mod->setBaseSize(QSize(100, 100));
        pushButton_mod->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border:  1px solid black;\n"
"	background-color: orange;\n"
"	color: black;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #dadbde, stop: 1 rgb(255, 138, 100));\n"
"}"));

        gridLayout->addWidget(pushButton_mod, 2, 4, 1, 1);

        pushButton_div = new QPushButton(widget);
        pushButton_div->setObjectName(QString::fromUtf8("pushButton_div"));
        pushButton_div->setMinimumSize(QSize(60, 60));
        pushButton_div->setMaximumSize(QSize(60, 60));
        pushButton_div->setBaseSize(QSize(100, 100));
        pushButton_div->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border:  1px solid black;\n"
"	background-color: orange;\n"
"	color: black;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #dadbde, stop: 1 rgb(255, 138, 100));\n"
"}"));

        gridLayout->addWidget(pushButton_div, 2, 5, 1, 1);

        pushButton_mult = new QPushButton(widget);
        pushButton_mult->setObjectName(QString::fromUtf8("pushButton_mult"));
        pushButton_mult->setMinimumSize(QSize(60, 60));
        pushButton_mult->setMaximumSize(QSize(60, 60));
        pushButton_mult->setBaseSize(QSize(100, 100));
        pushButton_mult->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border:  1px solid black;\n"
"	background-color: orange;\n"
"	color: black;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #dadbde, stop: 1 rgb(255, 138, 100));\n"
"}"));

        gridLayout->addWidget(pushButton_mult, 3, 5, 1, 1);

        pushButton_num0 = new QPushButton(widget);
        pushButton_num0->setObjectName(QString::fromUtf8("pushButton_num0"));
        pushButton_num0->setMinimumSize(QSize(60, 60));
        pushButton_num0->setMaximumSize(QSize(60, 60));
        pushButton_num0->setFont(font);
        pushButton_num0->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border:  1px solid black;\n"
"	color: white;\n"
"	background-color: rgba(64, 65, 66, 242);\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #dadbde, stop: 1 grey);\n"
"}"));

        gridLayout->addWidget(pushButton_num0, 6, 3, 1, 1);

        doubleSpinBox = new QDoubleSpinBox(widget);
        doubleSpinBox->setObjectName(QString::fromUtf8("doubleSpinBox"));
        doubleSpinBox->setMinimumSize(QSize(60, 60));
        doubleSpinBox->setMaximumSize(QSize(60, 60));
        doubleSpinBox->setBaseSize(QSize(60, 60));
        doubleSpinBox->setStyleSheet(QString::fromUtf8("QDoubleSpinBox {\n"
"	border:  1px solid black;\n"
"	background-color: rgba(46, 47, 48, 243);\n"
"	color: white;\n"
"}\n"
"QDoubleSpinBox:hover {\n"
"	background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #dadbde, stop: 1 grey);\n"
"}"));
        doubleSpinBox->setDecimals(3);
        doubleSpinBox->setMinimum(-1000000000.000000000000000);
        doubleSpinBox->setMaximum(1000000000.000000000000000);

        gridLayout->addWidget(doubleSpinBox, 1, 1, 1, 1);

        pushButton_braceO = new QPushButton(widget);
        pushButton_braceO->setObjectName(QString::fromUtf8("pushButton_braceO"));
        pushButton_braceO->setMinimumSize(QSize(60, 60));
        pushButton_braceO->setMaximumSize(QSize(60, 60));
        pushButton_braceO->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border:  1px solid black;\n"
"	background-color: rgba(46, 47, 48, 243);\n"
"	color: white;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #dadbde, stop: 1 white);\n"
"}"));

        gridLayout->addWidget(pushButton_braceO, 1, 3, 1, 1);

        radioButton = new QRadioButton(widget);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(50);
        sizePolicy.setHeightForWidth(radioButton->sizePolicy().hasHeightForWidth());
        radioButton->setSizePolicy(sizePolicy);
        radioButton->setMinimumSize(QSize(60, 60));
        radioButton->setMaximumSize(QSize(123456, 16777215));
        radioButton->setStyleSheet(QString::fromUtf8("QRadioButton {\n"
"	border:  1px solid black;\n"
"	background-color: rgba(46, 47, 48, 243);\n"
"	color: white;\n"
"}\n"
""));
        radioButton->setChecked(false);

        gridLayout->addWidget(radioButton, 1, 2, 1, 1);

        pushButton_dot = new QPushButton(widget);
        pushButton_dot->setObjectName(QString::fromUtf8("pushButton_dot"));
        pushButton_dot->setMinimumSize(QSize(60, 60));
        pushButton_dot->setMaximumSize(QSize(60, 60));
        pushButton_dot->setBaseSize(QSize(100, 100));
        pushButton_dot->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border:  1px solid black;\n"
"	color: white;\n"
"	background-color: rgba(64, 65, 66, 242);\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #dadbde, stop: 1 grey);\n"
"}"));

        gridLayout->addWidget(pushButton_dot, 6, 2, 1, 1);

        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(334, 69));
        label->setMaximumSize(QSize(382, 69));
        label->setFont(font1);
        label->setToolTipDuration(-1);
        label->setAutoFillBackground(false);
        label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	border: 1px solid black;\n"
"	color: white;\n"
"	background-color:rgba(46, 47, 48, 243);\n"
"}"));
        label->setLineWidth(1);
        label->setTextFormat(Qt::PlainText);
        label->setScaledContents(true);
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label, 0, 0, 1, 6);

        s21_smart_calc_MW->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(s21_smart_calc_MW);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        statusbar->setMaximumSize(QSize(16777215, 20));
        statusbar->setSizeGripEnabled(false);
        s21_smart_calc_MW->setStatusBar(statusbar);

        retranslateUi(s21_smart_calc_MW);

        QMetaObject::connectSlotsByName(s21_smart_calc_MW);
    } // setupUi

    void retranslateUi(QMainWindow *s21_smart_calc_MW)
    {
        s21_smart_calc_MW->setWindowTitle(QCoreApplication::translate("s21_smart_calc_MW", "s21_smart_calc_MW", nullptr));
        pushButton_acos->setText(QCoreApplication::translate("s21_smart_calc_MW", "acos", nullptr));
        pushButton_ans->setText(QCoreApplication::translate("s21_smart_calc_MW", "=", nullptr));
        pushButton_plus->setText(QCoreApplication::translate("s21_smart_calc_MW", "+", nullptr));
        pushButton_sqrt->setText(QCoreApplication::translate("s21_smart_calc_MW", "\342\210\232x", nullptr));
        pushButton_backspace->setText(QCoreApplication::translate("s21_smart_calc_MW", "\342\214\253", nullptr));
        pushButton_num2->setText(QCoreApplication::translate("s21_smart_calc_MW", "2", nullptr));
        pushButton_num9->setText(QCoreApplication::translate("s21_smart_calc_MW", "9", nullptr));
        pushButton_num4->setText(QCoreApplication::translate("s21_smart_calc_MW", "4", nullptr));
        pushButton_tan->setText(QCoreApplication::translate("s21_smart_calc_MW", "tan", nullptr));
        pushButton_atan->setText(QCoreApplication::translate("s21_smart_calc_MW", "atan", nullptr));
        pushButton_credit->setText(QCoreApplication::translate("s21_smart_calc_MW", "->", nullptr));
        pushButton_ln->setText(QCoreApplication::translate("s21_smart_calc_MW", "ln", nullptr));
        pushButton_num7->setText(QCoreApplication::translate("s21_smart_calc_MW", "7", nullptr));
        pushButton_num5->setText(QCoreApplication::translate("s21_smart_calc_MW", "5", nullptr));
        pushButton_num1->setText(QCoreApplication::translate("s21_smart_calc_MW", "1", nullptr));
        pushButton_num3->setText(QCoreApplication::translate("s21_smart_calc_MW", "3", nullptr));
        pushButton_clear->setText(QCoreApplication::translate("s21_smart_calc_MW", "AC", nullptr));
        pushButton_num8->setText(QCoreApplication::translate("s21_smart_calc_MW", "8", nullptr));
        pushButton_minus->setText(QCoreApplication::translate("s21_smart_calc_MW", "-", nullptr));
        pushButton_sin->setText(QCoreApplication::translate("s21_smart_calc_MW", "sin", nullptr));
        pushButton_x->setText(QCoreApplication::translate("s21_smart_calc_MW", "x", nullptr));
        pushButton_braceC->setText(QCoreApplication::translate("s21_smart_calc_MW", ")", nullptr));
        pushButton_log->setText(QCoreApplication::translate("s21_smart_calc_MW", "log", nullptr));
        pushButton_cos->setText(QCoreApplication::translate("s21_smart_calc_MW", "cos", nullptr));
        radioButton_2->setText(QCoreApplication::translate("s21_smart_calc_MW", " x =", nullptr));
        pushButton_pow->setText(QCoreApplication::translate("s21_smart_calc_MW", "^", nullptr));
        pushButton_num6->setText(QCoreApplication::translate("s21_smart_calc_MW", "6", nullptr));
        pushButton_asin->setText(QCoreApplication::translate("s21_smart_calc_MW", "asin", nullptr));
        pushButton_mod->setText(QCoreApplication::translate("s21_smart_calc_MW", "%", nullptr));
        pushButton_div->setText(QCoreApplication::translate("s21_smart_calc_MW", "/", nullptr));
        pushButton_mult->setText(QCoreApplication::translate("s21_smart_calc_MW", "*", nullptr));
        pushButton_num0->setText(QCoreApplication::translate("s21_smart_calc_MW", "0", nullptr));
        pushButton_braceO->setText(QCoreApplication::translate("s21_smart_calc_MW", "(", nullptr));
        radioButton->setText(QCoreApplication::translate("s21_smart_calc_MW", "Graph", nullptr));
        pushButton_dot->setText(QCoreApplication::translate("s21_smart_calc_MW", ".", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class s21_smart_calc_MW: public Ui_s21_smart_calc_MW {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_S21_SMART_CALC_MW_H
