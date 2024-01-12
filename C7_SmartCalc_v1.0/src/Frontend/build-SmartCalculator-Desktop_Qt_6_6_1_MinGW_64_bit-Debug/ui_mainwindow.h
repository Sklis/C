/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_9;
    QTabWidget *tabWidget;
    QWidget *engineering;
    QLabel *label;
    QLabel *label_9;
    QPushButton *pushButton_graf;
    QLabel *label_x;
    QCheckBox *checkBox;
    QPushButton *button_sign;
    QPushButton *button_AC;
    QPushButton *button_3;
    QPushButton *button_tan;
    QPushButton *button_dot;
    QPushButton *button_2;
    QPushButton *button_sin;
    QPushButton *button_pow;
    QPushButton *button_4;
    QPushButton *button_asin;
    QPushButton *button_acos;
    QPushButton *button_00;
    QPushButton *button_sum;
    QPushButton *button_mod;
    QPushButton *button_sub;
    QPushButton *button_sqrt;
    QPushButton *button_0;
    QPushButton *button_ln;
    QPushButton *button_9;
    QPushButton *button_cos;
    QPushButton *button_log;
    QPushButton *button_left_bracket;
    QPushButton *button_5;
    QPushButton *button_6;
    QPushButton *button_1;
    QPushButton *button_equal;
    QPushButton *button_del;
    QPushButton *button_atan;
    QPushButton *button_pi;
    QPushButton *button_div;
    QPushButton *button_x;
    QPushButton *button_8;
    QPushButton *button_mul;
    QPushButton *button_7;
    QPushButton *button_right_bracket;
    QLineEdit *finish_line;
    QLineEdit *tmp_line;
    QLabel *input_line;
    QLabel *tab_result_mistakes;
    QDoubleSpinBox *doubleSpinBox_x;
    QCustomPlot *graph;
    QPushButton *pushButton_graf_3;
    QWidget *widget;
    QGridLayout *gridLayout_3;
    QLabel *label_8;
    QDoubleSpinBox *doubleSpinBox_x_left;
    QLabel *label_10;
    QDoubleSpinBox *doubleSpinBox_x_right;
    QLabel *label_2;
    QDoubleSpinBox *doubleSpinBox_step;
    QLabel *label_4;
    QComboBox *comboBox;
    QWidget *tab_2;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_13;
    QLabel *label_15;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer_3;
    QLineEdit *sum_credit;
    QLabel *label_16;
    QLabel *label_21;
    QLabel *label_14;
    QDateEdit *date_credit_start;
    QLabel *label_22;
    QLineEdit *term_credit;
    QComboBox *comboBox_term;
    QLabel *label_23;
    QLabel *label_11;
    QLineEdit *credit_procent;
    QLabel *label_17;
    QLabel *label_49;
    QComboBox *comboBox_type;
    QSpacerItem *verticalSpacer;
    QTableView *table_result;
    QPushButton *push_credit_cal;
    QLabel *label_12;
    QLabel *label_6;
    QLabel *label_5;
    QPushButton *credit_clean;
    QDateEdit *date_credit_finish;
    QLineEdit *total;
    QLineEdit *overpayment;
    QLineEdit *payment;
    QLabel *label_18;
    QLabel *label_19;
    QLabel *label_20;
    QLabel *label_55;
    QLabel *error;
    QWidget *tab_3;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout_2;
    QLabel *deposit_error;
    QLabel *label_34;
    QDateEdit *deposit_date_withdraw;
    QLabel *label_81;
    QLabel *label_89;
    QPushButton *pushButton;
    QCheckBox *deposit_capitalization;
    QComboBox *deposit_term_type;
    QLabel *label_25;
    QSpacerItem *horizontalSpacer;
    QLabel *label_37;
    QLineEdit *deposit_procent_result;
    QLabel *label_35;
    QLabel *label_32;
    QLineEdit *deposit_sum;
    QLabel *label_33;
    QDateEdit *deposit_date_replanishment;
    QLineEdit *deposit_procent_CB;
    QLineEdit *deposit_sum_withdraw;
    QPushButton *deposit_calculation;
    QLabel *label_87;
    QLabel *label_30;
    QLabel *label_83;
    QLabel *label_85;
    QLabel *label_38;
    QComboBox *deposit_period_withdraw;
    QLabel *label_31;
    QLineEdit *deposit_tax_result;
    QDateEdit *date_deposit_finish;
    QLineEdit *deposit_procent;
    QLabel *label_27;
    QComboBox *deposit_period_payment;
    QLabel *label_26;
    QLineEdit *deposit_term;
    QLineEdit *deposit_sum_result;
    QLabel *label_88;
    QComboBox *deposit_period_replanishment;
    QLabel *label_29;
    QDateEdit *deposit_start_term;
    QLabel *label_3;
    QLabel *label_28;
    QLabel *label_24;
    QLabel *label_84;
    QLineEdit *deposit_sum_replanishment;
    QLabel *label_86;
    QLabel *label_36;
    QLabel *label_82;
    QSpacerItem *verticalSpacer_4;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1121, 505);
        MainWindow->setStyleSheet(QString::fromUtf8("MainWindow {\n"
"	background-color: rgb(255,228,196);\n"
"}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout_9 = new QGridLayout(centralwidget);
        gridLayout_9->setObjectName("gridLayout_9");
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        QFont font;
        font.setPointSize(12);
        tabWidget->setFont(font);
        tabWidget->setStyleSheet(QString::fromUtf8("QTabWidget::pane {\n"
"	background-color: rgb(255, 239, 214);\n"
"\n"
"	border:  	rgb(210,180,140);\n"
"}\n"
"QTabBar::tab {\n"
"\n"
"	background-color:  rgb(255, 239, 214);\n"
"	color: rgb(116, 118, 123);\n"
"	min-width: 18ex;\n"
"	min-height: 3ex;\n"
"	margin-left: 1px;\n"
"	left: -1px;\n"
"}\n"
"QTabBar::tab:selected {\n"
"background-color:  rgb(210,180,140);\n"
"color: black;\n"
"}\n"
"QTabBar::tab:hover {\n"
"	background-color:  rgb(229, 228, 226);\n"
"}\n"
"QPushButton {\n"
"	background-color: rgb(220,220,220);\n"
"	color: black; \n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 rgb(210, 210, 210), stop: 1 rgb(210, 200, 200));\n"
"}"));
        tabWidget->setDocumentMode(true);
        tabWidget->setTabBarAutoHide(false);
        engineering = new QWidget();
        engineering->setObjectName("engineering");
        label = new QLabel(engineering);
        label->setObjectName("label");
        label->setGeometry(QRect(636, 18, 391, 41));
        label_9 = new QLabel(engineering);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(777, 58, 21, 31));
        pushButton_graf = new QPushButton(engineering);
        pushButton_graf->setObjectName("pushButton_graf");
        pushButton_graf->setGeometry(QRect(642, 118, 201, 30));
        pushButton_graf->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(186, 252, 3);\n"
"  color: black; \n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 rgb(161, 252, 3), stop: 1 rgb(161, 252, 3));\n"
"}"));
        label_x = new QLabel(engineering);
        label_x->setObjectName("label_x");
        label_x->setGeometry(QRect(10, 164, 39, 18));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        label_x->setFont(font1);
        label_x->setStyleSheet(QString::fromUtf8("color: black;"));
        label_x->setAlignment(Qt::AlignCenter);
        checkBox = new QCheckBox(engineering);
        checkBox->setObjectName("checkBox");
        checkBox->setGeometry(QRect(506, 153, 100, 40));
        checkBox->setStyleSheet(QString::fromUtf8("color: black;"));
        checkBox->setTristate(false);
        button_sign = new QPushButton(engineering);
        button_sign->setObjectName("button_sign");
        button_sign->setGeometry(QRect(176, 270, 80, 35));
        button_AC = new QPushButton(engineering);
        button_AC->setObjectName("button_AC");
        button_AC->setGeometry(QRect(176, 370, 80, 35));
        button_AC->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: white;\n"
"	background-color: rgb(25,25,112);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 rgb(125, 200, 215), stop: 1 rgb(125, 185, 205));\n"
"}"));
        button_3 = new QPushButton(engineering);
        button_3->setObjectName("button_3");
        button_3->setGeometry(QRect(436, 370, 80, 35));
        button_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(105,105,105);\n"
"	color: white; \n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 rgb(95, 95, 95), stop: 1 rgb(95, 85, 85));\n"
"}"));
        button_tan = new QPushButton(engineering);
        button_tan->setObjectName("button_tan");
        button_tan->setGeometry(QRect(2, 370, 80, 35));
        button_tan->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(176,196,222);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 rgb(165, 186, 210), stop: 1 rgb(165, 175, 195));\n"
"}"));
        button_dot = new QPushButton(engineering);
        button_dot->setObjectName("button_dot");
        button_dot->setGeometry(QRect(436, 420, 80, 35));
        button_dot->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(105,105,105);\n"
"	color: white; \n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 rgb(95, 95, 95), stop: 1 rgb(95, 85, 85));\n"
"}"));
        button_2 = new QPushButton(engineering);
        button_2->setObjectName("button_2");
        button_2->setGeometry(QRect(349, 370, 80, 35));
        button_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(105,105,105);\n"
"	color: white; \n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 rgb(95, 95, 95), stop: 1 rgb(95, 85, 85));\n"
"}"));
        button_sin = new QPushButton(engineering);
        button_sin->setObjectName("button_sin");
        button_sin->setGeometry(QRect(2, 320, 80, 35));
        button_sin->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(176,196,222);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 rgb(165, 186, 210), stop: 1 rgb(165, 175, 195));\n"
"}"));
        button_pow = new QPushButton(engineering);
        button_pow->setObjectName("button_pow");
        button_pow->setGeometry(QRect(2, 219, 80, 35));
        button_pow->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(176,196,222);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 rgb(165, 186, 210), stop: 1 rgb(165, 175, 195));\n"
"}"));
        button_4 = new QPushButton(engineering);
        button_4->setObjectName("button_4");
        button_4->setGeometry(QRect(263, 320, 80, 35));
        button_4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(105,105,105);\n"
"	color: white; \n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 rgb(95, 95, 95), stop: 1 rgb(95, 85, 85));\n"
"}"));
        button_asin = new QPushButton(engineering);
        button_asin->setObjectName("button_asin");
        button_asin->setGeometry(QRect(89, 320, 80, 35));
        button_asin->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(176,196,222);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 rgb(165, 186, 210), stop: 1 rgb(165, 175, 195));\n"
"}"));
        button_acos = new QPushButton(engineering);
        button_acos->setObjectName("button_acos");
        button_acos->setGeometry(QRect(89, 270, 80, 35));
        button_acos->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(176,196,222);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 rgb(165, 186, 210), stop: 1 rgb(165, 175, 195));\n"
"}"));
        button_00 = new QPushButton(engineering);
        button_00->setObjectName("button_00");
        button_00->setGeometry(QRect(349, 420, 80, 35));
        button_00->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(105,105,105);\n"
"	color: white; \n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 rgb(95, 95, 95), stop: 1 rgb(95, 85, 85));\n"
"}"));
        button_sum = new QPushButton(engineering);
        button_sum->setObjectName("button_sum");
        button_sum->setGeometry(QRect(521, 370, 80, 35));
        button_sum->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(255, 117, 20);\n"
"  color: black; \n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 rgb(255, 120, 50), stop: 1 rgb(255, 151, 57));\n"
"}"));
        button_mod = new QPushButton(engineering);
        button_mod->setObjectName("button_mod");
        button_mod->setGeometry(QRect(89, 219, 80, 35));
        button_mod->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(176,196,222);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 rgb(165, 186, 210), stop: 1 rgb(165, 175, 195));\n"
"}"));
        button_sub = new QPushButton(engineering);
        button_sub->setObjectName("button_sub");
        button_sub->setGeometry(QRect(521, 320, 80, 35));
        button_sub->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(255, 117, 20);\n"
"  color: black; \n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 rgb(255, 120, 50), stop: 1 rgb(255, 151, 57));\n"
"}"));
        button_sqrt = new QPushButton(engineering);
        button_sqrt->setObjectName("button_sqrt");
        button_sqrt->setGeometry(QRect(176, 219, 80, 35));
        button_sqrt->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(176,196,222);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 rgb(165, 186, 210), stop: 1 rgb(165, 175, 195));\n"
"}"));
        button_0 = new QPushButton(engineering);
        button_0->setObjectName("button_0");
        button_0->setEnabled(true);
        button_0->setGeometry(QRect(263, 420, 80, 35));
        button_0->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(105,105,105);\n"
"	color: white; \n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 rgb(95, 95, 95), stop: 1 rgb(95, 85, 85));\n"
"}"));
        button_ln = new QPushButton(engineering);
        button_ln->setObjectName("button_ln");
        button_ln->setGeometry(QRect(89, 420, 80, 35));
        button_ln->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(176,196,222);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 rgb(165, 186, 210), stop: 1 rgb(165, 175, 195));\n"
"}"));
        button_9 = new QPushButton(engineering);
        button_9->setObjectName("button_9");
        button_9->setGeometry(QRect(436, 270, 80, 35));
        button_9->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(105,105,105);\n"
"	color: white; \n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 rgb(95, 95, 95), stop: 1 rgb(95, 85, 85));\n"
"}"));
        button_cos = new QPushButton(engineering);
        button_cos->setObjectName("button_cos");
        button_cos->setGeometry(QRect(2, 270, 80, 35));
        button_cos->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(176,196,222);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 rgb(165, 186, 210), stop: 1 rgb(165, 175, 195));\n"
"}"));
        button_log = new QPushButton(engineering);
        button_log->setObjectName("button_log");
        button_log->setGeometry(QRect(2, 420, 80, 35));
        button_log->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(176,196,222);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 rgb(165, 186, 210), stop: 1 rgb(165, 175, 195));\n"
"}"));
        button_left_bracket = new QPushButton(engineering);
        button_left_bracket->setObjectName("button_left_bracket");
        button_left_bracket->setGeometry(QRect(349, 219, 80, 35));
        button_5 = new QPushButton(engineering);
        button_5->setObjectName("button_5");
        button_5->setGeometry(QRect(349, 320, 80, 35));
        button_5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(105,105,105);\n"
"	color: white; \n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 rgb(95, 95, 95), stop: 1 rgb(95, 85, 85));\n"
"}"));
        button_6 = new QPushButton(engineering);
        button_6->setObjectName("button_6");
        button_6->setGeometry(QRect(436, 320, 80, 35));
        button_6->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(105,105,105);\n"
"	color: white; \n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 rgb(95, 95, 95), stop: 1 rgb(95, 85, 85));\n"
"}"));
        button_1 = new QPushButton(engineering);
        button_1->setObjectName("button_1");
        button_1->setGeometry(QRect(263, 370, 80, 35));
        button_1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(105,105,105);\n"
"	color: white; \n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 rgb(95, 95, 95), stop: 1 rgb(95, 85, 85));\n"
"}"));
        button_equal = new QPushButton(engineering);
        button_equal->setObjectName("button_equal");
        button_equal->setGeometry(QRect(521, 420, 80, 35));
        button_equal->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(186, 252, 3);\n"
"  color: black; \n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 rgb(161, 252, 3), stop: 1 rgb(161, 252, 3));\n"
"}"));
        button_del = new QPushButton(engineering);
        button_del->setObjectName("button_del");
        button_del->setGeometry(QRect(176, 320, 80, 35));
        button_atan = new QPushButton(engineering);
        button_atan->setObjectName("button_atan");
        button_atan->setGeometry(QRect(89, 370, 80, 35));
        button_atan->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(176,196,222);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 rgb(165, 186, 210), stop: 1 rgb(165, 175, 195));\n"
"}"));
        button_pi = new QPushButton(engineering);
        button_pi->setObjectName("button_pi");
        button_pi->setGeometry(QRect(263, 219, 80, 35));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("DejaVu Sans Mono")});
        font2.setPointSize(11);
        font2.setItalic(false);
        font2.setKerning(true);
        button_pi->setFont(font2);
        button_pi->setText(QString::fromUtf8("pi"));
        button_div = new QPushButton(engineering);
        button_div->setObjectName("button_div");
        button_div->setGeometry(QRect(521, 219, 80, 35));
        button_div->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(255, 117, 20);\n"
"  color: black; \n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 rgb(255, 120, 50), stop: 1 rgb(255, 151, 57));\n"
"}"));
        button_x = new QPushButton(engineering);
        button_x->setObjectName("button_x");
        button_x->setGeometry(QRect(176, 420, 80, 35));
        button_8 = new QPushButton(engineering);
        button_8->setObjectName("button_8");
        button_8->setGeometry(QRect(349, 270, 80, 35));
        button_8->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(105,105,105);\n"
"	color: white; \n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 rgb(95, 95, 95), stop: 1 rgb(95, 85, 85));\n"
"}"));
        button_mul = new QPushButton(engineering);
        button_mul->setObjectName("button_mul");
        button_mul->setGeometry(QRect(521, 270, 80, 35));
        button_mul->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(255, 117, 20);\n"
"  color: black; \n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 rgb(255, 120, 50), stop: 1 rgb(255, 151, 57));\n"
"}"));
        button_7 = new QPushButton(engineering);
        button_7->setObjectName("button_7");
        button_7->setGeometry(QRect(263, 270, 80, 35));
        button_7->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(105,105,105);\n"
"	color: white; \n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 rgb(95, 95, 95), stop: 1 rgb(95, 85, 85));\n"
"}"));
        button_right_bracket = new QPushButton(engineering);
        button_right_bracket->setObjectName("button_right_bracket");
        button_right_bracket->setGeometry(QRect(436, 219, 80, 35));
        finish_line = new QLineEdit(engineering);
        finish_line->setObjectName("finish_line");
        finish_line->setGeometry(QRect(330, 550, 600, 25));
        tmp_line = new QLineEdit(engineering);
        tmp_line->setObjectName("tmp_line");
        tmp_line->setGeometry(QRect(0, 550, 311, 25));
        input_line = new QLabel(engineering);
        input_line->setObjectName("input_line");
        input_line->setGeometry(QRect(2, 9, 600, 70));
        QFont font3;
        font3.setPointSize(14);
        input_line->setFont(font3);
        input_line->setStyleSheet(QString::fromUtf8("color: black;\n"
"background-color: white;"));
        input_line->setAlignment(Qt::AlignCenter);
        tab_result_mistakes = new QLabel(engineering);
        tab_result_mistakes->setObjectName("tab_result_mistakes");
        tab_result_mistakes->setGeometry(QRect(2, 97, 600, 40));
        tab_result_mistakes->setFont(font);
        tab_result_mistakes->setStyleSheet(QString::fromUtf8("color: black;\n"
"background-color: white;"));
        tab_result_mistakes->setAlignment(Qt::AlignCenter);
        doubleSpinBox_x = new QDoubleSpinBox(engineering);
        doubleSpinBox_x->setObjectName("doubleSpinBox_x");
        doubleSpinBox_x->setGeometry(QRect(50, 159, 130, 30));
        doubleSpinBox_x->setDecimals(7);
        doubleSpinBox_x->setMinimum(-1000000.000000000000000);
        doubleSpinBox_x->setMaximum(1000000.000000000000000);
        doubleSpinBox_x->setSingleStep(0.500000000000000);
        graph = new QCustomPlot(engineering);
        graph->setObjectName("graph");
        graph->setGeometry(QRect(620, 157, 490, 330));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(graph->sizePolicy().hasHeightForWidth());
        graph->setSizePolicy(sizePolicy);
        QFont font4;
        font4.setPointSize(10);
        graph->setFont(font4);
        pushButton_graf_3 = new QPushButton(engineering);
        pushButton_graf_3->setObjectName("pushButton_graf_3");
        pushButton_graf_3->setGeometry(QRect(862, 118, 201, 30));
        pushButton_graf_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: white;\n"
"	background-color: rgb(25,25,112);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 rgb(125, 200, 215), stop: 1 rgb(125, 185, 205));\n"
"}"));
        widget = new QWidget(engineering);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(690, 55, 271, 58));
        gridLayout_3 = new QGridLayout(widget);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(widget);
        label_8->setObjectName("label_8");
        label_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_8, 0, 0, 1, 1);

        doubleSpinBox_x_left = new QDoubleSpinBox(widget);
        doubleSpinBox_x_left->setObjectName("doubleSpinBox_x_left");
        doubleSpinBox_x_left->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        doubleSpinBox_x_left->setDecimals(1);
        doubleSpinBox_x_left->setMinimum(-100.000000000000000);
        doubleSpinBox_x_left->setSingleStep(0.500000000000000);
        doubleSpinBox_x_left->setValue(-10.000000000000000);

        gridLayout_3->addWidget(doubleSpinBox_x_left, 0, 1, 1, 1);

        label_10 = new QLabel(widget);
        label_10->setObjectName("label_10");
        label_10->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_10, 0, 2, 1, 1);

        doubleSpinBox_x_right = new QDoubleSpinBox(widget);
        doubleSpinBox_x_right->setObjectName("doubleSpinBox_x_right");
        doubleSpinBox_x_right->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        doubleSpinBox_x_right->setDecimals(1);
        doubleSpinBox_x_right->setMinimum(-100.000000000000000);
        doubleSpinBox_x_right->setSingleStep(0.500000000000000);
        doubleSpinBox_x_right->setValue(10.000000000000000);

        gridLayout_3->addWidget(doubleSpinBox_x_right, 0, 3, 1, 1);

        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_2, 1, 0, 1, 1);

        doubleSpinBox_step = new QDoubleSpinBox(widget);
        doubleSpinBox_step->setObjectName("doubleSpinBox_step");
        doubleSpinBox_step->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        doubleSpinBox_step->setDecimals(2);
        doubleSpinBox_step->setMinimum(0.050000000000000);
        doubleSpinBox_step->setMaximum(10.000000000000000);
        doubleSpinBox_step->setSingleStep(0.050000000000000);
        doubleSpinBox_step->setValue(0.100000000000000);

        gridLayout_3->addWidget(doubleSpinBox_step, 1, 1, 1, 1);

        label_4 = new QLabel(widget);
        label_4->setObjectName("label_4");
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_4, 1, 2, 1, 1);

        comboBox = new QComboBox(widget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");

        gridLayout_3->addWidget(comboBox, 1, 3, 1, 1);

        tabWidget->addTab(engineering, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        layoutWidget = new QWidget(tab_2);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 20, 810, 421));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_13 = new QLabel(layoutWidget);
        label_13->setObjectName("label_13");
        QFont font5;
        font5.setPointSize(16);
        label_13->setFont(font5);
        label_13->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_13, 0, 0, 1, 3);

        label_15 = new QLabel(layoutWidget);
        label_15->setObjectName("label_15");
        label_15->setFont(font5);
        label_15->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_15, 0, 4, 1, 4);

        verticalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 1, 1, 1, 2);

        verticalSpacer_3 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 1, 5, 1, 2);

        sum_credit = new QLineEdit(layoutWidget);
        sum_credit->setObjectName("sum_credit");
        sum_credit->setMaxLength(100);
        sum_credit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(sum_credit, 2, 2, 1, 1);

        label_16 = new QLabel(layoutWidget);
        label_16->setObjectName("label_16");

        gridLayout->addWidget(label_16, 2, 3, 1, 1);

        label_21 = new QLabel(layoutWidget);
        label_21->setObjectName("label_21");

        gridLayout->addWidget(label_21, 2, 9, 1, 1);

        label_14 = new QLabel(layoutWidget);
        label_14->setObjectName("label_14");
        label_14->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_14, 3, 0, 1, 2);

        date_credit_start = new QDateEdit(layoutWidget);
        date_credit_start->setObjectName("date_credit_start");
        date_credit_start->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(date_credit_start, 3, 2, 1, 1);

        label_22 = new QLabel(layoutWidget);
        label_22->setObjectName("label_22");

        gridLayout->addWidget(label_22, 3, 9, 1, 1);

        term_credit = new QLineEdit(layoutWidget);
        term_credit->setObjectName("term_credit");
        term_credit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(term_credit, 4, 2, 1, 1);

        comboBox_term = new QComboBox(layoutWidget);
        comboBox_term->addItem(QString());
        comboBox_term->addItem(QString());
        comboBox_term->setObjectName("comboBox_term");

        gridLayout->addWidget(comboBox_term, 4, 3, 1, 1);

        label_23 = new QLabel(layoutWidget);
        label_23->setObjectName("label_23");

        gridLayout->addWidget(label_23, 4, 9, 1, 1);

        label_11 = new QLabel(layoutWidget);
        label_11->setObjectName("label_11");
        label_11->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_11, 5, 0, 1, 2);

        credit_procent = new QLineEdit(layoutWidget);
        credit_procent->setObjectName("credit_procent");
        credit_procent->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(credit_procent, 5, 2, 1, 1);

        label_17 = new QLabel(layoutWidget);
        label_17->setObjectName("label_17");

        gridLayout->addWidget(label_17, 5, 3, 1, 1);

        label_49 = new QLabel(layoutWidget);
        label_49->setObjectName("label_49");

        gridLayout->addWidget(label_49, 5, 9, 1, 1);

        comboBox_type = new QComboBox(layoutWidget);
        comboBox_type->addItem(QString());
        comboBox_type->addItem(QString());
        comboBox_type->setObjectName("comboBox_type");
        comboBox_type->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        gridLayout->addWidget(comboBox_type, 6, 2, 1, 2);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 7, 1, 1, 1);

        table_result = new QTableView(layoutWidget);
        table_result->setObjectName("table_result");

        gridLayout->addWidget(table_result, 8, 0, 1, 9);

        push_credit_cal = new QPushButton(layoutWidget);
        push_credit_cal->setObjectName("push_credit_cal");
        push_credit_cal->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(186, 252, 3);\n"
"  color: black; \n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 rgb(161, 252, 3), stop: 1 rgb(161, 252, 3));\n"
"}"));

        gridLayout->addWidget(push_credit_cal, 6, 4, 1, 4);

        label_12 = new QLabel(layoutWidget);
        label_12->setObjectName("label_12");
        label_12->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_12, 6, 0, 1, 2);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName("label_6");
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_6, 4, 0, 1, 2);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName("label_5");
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_5, 2, 0, 1, 2);

        credit_clean = new QPushButton(layoutWidget);
        credit_clean->setObjectName("credit_clean");
        credit_clean->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: white;\n"
"	background-color: rgb(25,25,112);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 rgb(125, 200, 215), stop: 1 rgb(125, 185, 205));\n"
"}"));

        gridLayout->addWidget(credit_clean, 6, 8, 1, 1);

        date_credit_finish = new QDateEdit(layoutWidget);
        date_credit_finish->setObjectName("date_credit_finish");
        date_credit_finish->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(date_credit_finish, 5, 7, 1, 2);

        total = new QLineEdit(layoutWidget);
        total->setObjectName("total");
        total->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(total, 4, 7, 1, 2);

        overpayment = new QLineEdit(layoutWidget);
        overpayment->setObjectName("overpayment");
        overpayment->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(overpayment, 3, 7, 1, 2);

        payment = new QLineEdit(layoutWidget);
        payment->setObjectName("payment");
        payment->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(payment, 2, 7, 1, 2);

        label_18 = new QLabel(layoutWidget);
        label_18->setObjectName("label_18");
        label_18->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_18, 2, 4, 1, 3);

        label_19 = new QLabel(layoutWidget);
        label_19->setObjectName("label_19");
        label_19->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_19, 3, 4, 1, 3);

        label_20 = new QLabel(layoutWidget);
        label_20->setObjectName("label_20");
        label_20->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_20, 4, 4, 1, 3);

        label_55 = new QLabel(layoutWidget);
        label_55->setObjectName("label_55");
        label_55->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_55, 5, 4, 1, 3);

        error = new QLabel(layoutWidget);
        error->setObjectName("error");
        error->setStyleSheet(QString::fromUtf8("font: 500 12pt \"Ubuntu\";"));
        error->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(error, 7, 2, 1, 3);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        layoutWidget1 = new QWidget(tab_3);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(5, 4, 1071, 401));
        gridLayout_2 = new QGridLayout(layoutWidget1);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        deposit_error = new QLabel(layoutWidget1);
        deposit_error->setObjectName("deposit_error");
        deposit_error->setStyleSheet(QString::fromUtf8("font: 500 12pt \"Ubuntu\";"));

        gridLayout_2->addWidget(deposit_error, 12, 7, 1, 3);

        label_34 = new QLabel(layoutWidget1);
        label_34->setObjectName("label_34");

        gridLayout_2->addWidget(label_34, 11, 0, 1, 1);

        deposit_date_withdraw = new QDateEdit(layoutWidget1);
        deposit_date_withdraw->setObjectName("deposit_date_withdraw");

        gridLayout_2->addWidget(deposit_date_withdraw, 11, 3, 1, 1);

        label_81 = new QLabel(layoutWidget1);
        label_81->setObjectName("label_81");

        gridLayout_2->addWidget(label_81, 5, 3, 1, 1);

        label_89 = new QLabel(layoutWidget1);
        label_89->setObjectName("label_89");

        gridLayout_2->addWidget(label_89, 1, 3, 1, 1);

        pushButton = new QPushButton(layoutWidget1);
        pushButton->setObjectName("pushButton");
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: white;\n"
"	background-color: rgb(25,25,112);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 rgb(125, 200, 215), stop: 1 rgb(125, 185, 205));\n"
"}"));

        gridLayout_2->addWidget(pushButton, 13, 9, 1, 1);

        deposit_capitalization = new QCheckBox(layoutWidget1);
        deposit_capitalization->setObjectName("deposit_capitalization");
        deposit_capitalization->setMinimumSize(QSize(20, 20));
        deposit_capitalization->setBaseSize(QSize(20, 20));
        deposit_capitalization->setFont(font4);
        deposit_capitalization->setIconSize(QSize(40, 40));

        gridLayout_2->addWidget(deposit_capitalization, 7, 2, 1, 1);

        deposit_term_type = new QComboBox(layoutWidget1);
        deposit_term_type->addItem(QString());
        deposit_term_type->addItem(QString());
        deposit_term_type->addItem(QString());
        deposit_term_type->setObjectName("deposit_term_type");

        gridLayout_2->addWidget(deposit_term_type, 2, 3, 1, 1);

        label_25 = new QLabel(layoutWidget1);
        label_25->setObjectName("label_25");
        label_25->setMaximumSize(QSize(16777215, 30));
        label_25->setFont(font3);
        label_25->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_25, 0, 7, 1, 3);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 4, 5, 1, 1);

        label_37 = new QLabel(layoutWidget1);
        label_37->setObjectName("label_37");

        gridLayout_2->addWidget(label_37, 3, 7, 1, 1);

        deposit_procent_result = new QLineEdit(layoutWidget1);
        deposit_procent_result->setObjectName("deposit_procent_result");
        deposit_procent_result->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(deposit_procent_result, 1, 9, 1, 1);

        label_35 = new QLabel(layoutWidget1);
        label_35->setObjectName("label_35");

        gridLayout_2->addWidget(label_35, 1, 7, 1, 1);

        label_32 = new QLabel(layoutWidget1);
        label_32->setObjectName("label_32");

        gridLayout_2->addWidget(label_32, 7, 0, 1, 1);

        deposit_sum = new QLineEdit(layoutWidget1);
        deposit_sum->setObjectName("deposit_sum");
        deposit_sum->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(deposit_sum, 1, 2, 1, 1);

        label_33 = new QLabel(layoutWidget1);
        label_33->setObjectName("label_33");

        gridLayout_2->addWidget(label_33, 10, 0, 1, 1);

        deposit_date_replanishment = new QDateEdit(layoutWidget1);
        deposit_date_replanishment->setObjectName("deposit_date_replanishment");

        gridLayout_2->addWidget(deposit_date_replanishment, 10, 3, 1, 1);

        deposit_procent_CB = new QLineEdit(layoutWidget1);
        deposit_procent_CB->setObjectName("deposit_procent_CB");
        deposit_procent_CB->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(deposit_procent_CB, 5, 2, 1, 1);

        deposit_sum_withdraw = new QLineEdit(layoutWidget1);
        deposit_sum_withdraw->setObjectName("deposit_sum_withdraw");
        deposit_sum_withdraw->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(deposit_sum_withdraw, 11, 4, 1, 1);

        deposit_calculation = new QPushButton(layoutWidget1);
        deposit_calculation->setObjectName("deposit_calculation");
        deposit_calculation->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(186, 252, 3);\n"
"  color: black; \n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 rgb(161, 252, 3), stop: 1 rgb(161, 252, 3));\n"
"}"));

        gridLayout_2->addWidget(deposit_calculation, 11, 7, 1, 3);

        label_87 = new QLabel(layoutWidget1);
        label_87->setObjectName("label_87");
        label_87->setMaximumSize(QSize(16777215, 30));
        QFont font6;
        font6.setPointSize(11);
        label_87->setFont(font6);

        gridLayout_2->addWidget(label_87, 9, 0, 1, 1);

        label_30 = new QLabel(layoutWidget1);
        label_30->setObjectName("label_30");

        gridLayout_2->addWidget(label_30, 5, 0, 1, 1);

        label_83 = new QLabel(layoutWidget1);
        label_83->setObjectName("label_83");

        gridLayout_2->addWidget(label_83, 11, 5, 1, 1);

        label_85 = new QLabel(layoutWidget1);
        label_85->setObjectName("label_85");

        gridLayout_2->addWidget(label_85, 1, 10, 1, 1);

        label_38 = new QLabel(layoutWidget1);
        label_38->setObjectName("label_38");

        gridLayout_2->addWidget(label_38, 4, 7, 1, 1);

        deposit_period_withdraw = new QComboBox(layoutWidget1);
        deposit_period_withdraw->addItem(QString());
        deposit_period_withdraw->addItem(QString());
        deposit_period_withdraw->addItem(QString());
        deposit_period_withdraw->addItem(QString());
        deposit_period_withdraw->addItem(QString());
        deposit_period_withdraw->addItem(QString());
        deposit_period_withdraw->setObjectName("deposit_period_withdraw");

        gridLayout_2->addWidget(deposit_period_withdraw, 11, 2, 1, 1);

        label_31 = new QLabel(layoutWidget1);
        label_31->setObjectName("label_31");

        gridLayout_2->addWidget(label_31, 6, 0, 1, 1);

        deposit_tax_result = new QLineEdit(layoutWidget1);
        deposit_tax_result->setObjectName("deposit_tax_result");
        deposit_tax_result->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(deposit_tax_result, 2, 9, 1, 1);

        date_deposit_finish = new QDateEdit(layoutWidget1);
        date_deposit_finish->setObjectName("date_deposit_finish");
        date_deposit_finish->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(date_deposit_finish, 4, 9, 1, 1);

        deposit_procent = new QLineEdit(layoutWidget1);
        deposit_procent->setObjectName("deposit_procent");
        deposit_procent->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(deposit_procent, 4, 2, 1, 1);

        label_27 = new QLabel(layoutWidget1);
        label_27->setObjectName("label_27");

        gridLayout_2->addWidget(label_27, 2, 0, 1, 1);

        deposit_period_payment = new QComboBox(layoutWidget1);
        deposit_period_payment->addItem(QString());
        deposit_period_payment->addItem(QString());
        deposit_period_payment->addItem(QString());
        deposit_period_payment->addItem(QString());
        deposit_period_payment->addItem(QString());
        deposit_period_payment->addItem(QString());
        deposit_period_payment->addItem(QString());
        deposit_period_payment->setObjectName("deposit_period_payment");

        gridLayout_2->addWidget(deposit_period_payment, 6, 2, 1, 1);

        label_26 = new QLabel(layoutWidget1);
        label_26->setObjectName("label_26");

        gridLayout_2->addWidget(label_26, 1, 0, 1, 1);

        deposit_term = new QLineEdit(layoutWidget1);
        deposit_term->setObjectName("deposit_term");
        deposit_term->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(deposit_term, 2, 2, 1, 1);

        deposit_sum_result = new QLineEdit(layoutWidget1);
        deposit_sum_result->setObjectName("deposit_sum_result");
        deposit_sum_result->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(deposit_sum_result, 3, 9, 1, 1);

        label_88 = new QLabel(layoutWidget1);
        label_88->setObjectName("label_88");

        gridLayout_2->addWidget(label_88, 4, 3, 1, 1);

        deposit_period_replanishment = new QComboBox(layoutWidget1);
        deposit_period_replanishment->addItem(QString());
        deposit_period_replanishment->addItem(QString());
        deposit_period_replanishment->addItem(QString());
        deposit_period_replanishment->addItem(QString());
        deposit_period_replanishment->addItem(QString());
        deposit_period_replanishment->addItem(QString());
        deposit_period_replanishment->setObjectName("deposit_period_replanishment");

        gridLayout_2->addWidget(deposit_period_replanishment, 10, 2, 1, 1);

        label_29 = new QLabel(layoutWidget1);
        label_29->setObjectName("label_29");

        gridLayout_2->addWidget(label_29, 4, 0, 1, 1);

        deposit_start_term = new QDateEdit(layoutWidget1);
        deposit_start_term->setObjectName("deposit_start_term");
        deposit_start_term->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(deposit_start_term, 3, 2, 1, 1);

        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName("label_3");
        QFont font7;
        font7.setPointSize(9);
        label_3->setFont(font7);

        gridLayout_2->addWidget(label_3, 13, 0, 1, 3);

        label_28 = new QLabel(layoutWidget1);
        label_28->setObjectName("label_28");

        gridLayout_2->addWidget(label_28, 3, 0, 1, 1);

        label_24 = new QLabel(layoutWidget1);
        label_24->setObjectName("label_24");
        label_24->setMaximumSize(QSize(16777215, 30));
        label_24->setFont(font3);
        label_24->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_24, 0, 1, 1, 3);

        label_84 = new QLabel(layoutWidget1);
        label_84->setObjectName("label_84");

        gridLayout_2->addWidget(label_84, 2, 10, 1, 1);

        deposit_sum_replanishment = new QLineEdit(layoutWidget1);
        deposit_sum_replanishment->setObjectName("deposit_sum_replanishment");
        deposit_sum_replanishment->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(deposit_sum_replanishment, 10, 4, 1, 1);

        label_86 = new QLabel(layoutWidget1);
        label_86->setObjectName("label_86");

        gridLayout_2->addWidget(label_86, 3, 10, 1, 1);

        label_36 = new QLabel(layoutWidget1);
        label_36->setObjectName("label_36");

        gridLayout_2->addWidget(label_36, 2, 7, 1, 1);

        label_82 = new QLabel(layoutWidget1);
        label_82->setObjectName("label_82");

        gridLayout_2->addWidget(label_82, 10, 5, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_4, 8, 0, 1, 1);

        tabWidget->addTab(tab_3, QString());

        gridLayout_9->addWidget(tabWidget, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "<--- \320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\267\320\264\320\265\321\201\321\214 \321\204\321\203\320\275\320\272\321\206\320\270\321\216 \320\264\320\273\321\217 \320\277\320\276\321\201\321\202\321\200\320\276\320\265\320\275\320\270\321\217 \320\263\321\200\320\260\321\204\320\270\320\272\320\260", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "\320\264\320\276:", nullptr));
        pushButton_graf->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\321\201\321\202\321\200\320\276\320\270\321\202\321\214 \320\263\321\200\320\260\321\204\320\270\320\272", nullptr));
        label_x->setText(QCoreApplication::translate("MainWindow", "x =", nullptr));
        checkBox->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\321\201\321\202\321\200\320\276\320\270\321\202\321\214\n"
"\320\223\321\200\320\260\321\204\320\270\320\272", nullptr));
        button_sign->setText(QCoreApplication::translate("MainWindow", "+/-", nullptr));
        button_AC->setText(QCoreApplication::translate("MainWindow", "AC", nullptr));
        button_3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        button_tan->setText(QCoreApplication::translate("MainWindow", "tan", nullptr));
        button_dot->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        button_2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        button_sin->setText(QCoreApplication::translate("MainWindow", "sin", nullptr));
        button_pow->setText(QCoreApplication::translate("MainWindow", "^", nullptr));
        button_4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        button_asin->setText(QCoreApplication::translate("MainWindow", "asin", nullptr));
        button_acos->setText(QCoreApplication::translate("MainWindow", "acos", nullptr));
        button_00->setText(QCoreApplication::translate("MainWindow", "00", nullptr));
        button_sum->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        button_mod->setText(QCoreApplication::translate("MainWindow", "mod", nullptr));
        button_sub->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        button_sqrt->setText(QCoreApplication::translate("MainWindow", "sqrt", nullptr));
        button_0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        button_ln->setText(QCoreApplication::translate("MainWindow", "ln", nullptr));
        button_9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        button_cos->setText(QCoreApplication::translate("MainWindow", "cos", nullptr));
        button_log->setText(QCoreApplication::translate("MainWindow", "log", nullptr));
        button_left_bracket->setText(QCoreApplication::translate("MainWindow", "(", nullptr));
        button_5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        button_6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        button_1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        button_equal->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        button_del->setText(QCoreApplication::translate("MainWindow", "00->0", nullptr));
        button_atan->setText(QCoreApplication::translate("MainWindow", "atan", nullptr));
        button_div->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        button_x->setText(QCoreApplication::translate("MainWindow", "x", nullptr));
        button_8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        button_mul->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        button_7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        button_right_bracket->setText(QCoreApplication::translate("MainWindow", ")", nullptr));
        input_line->setText(QString());
        tab_result_mistakes->setText(QString());
        pushButton_graf_3->setText(QCoreApplication::translate("MainWindow", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214 \320\263\321\200\320\260\321\204\320\270\320\272", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "\320\236\321\201\321\214 X \320\276\321\202:", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "\320\264\320\276:", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\250\320\260\320\263 :", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\320\242\320\270\320\277:", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("MainWindow", "\320\233\320\270\320\275\320\270\321\217", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("MainWindow", "\320\242\320\276\321\207\320\272\320\270", nullptr));

        tabWidget->setTabText(tabWidget->indexOf(engineering), QCoreApplication::translate("MainWindow", "\320\230\320\275\320\266\320\265\320\275\320\265\321\200\320\275\321\213\320\271", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\277\320\276\320\273\320\275\321\217\320\265\320\274\321\213\320\265 \320\277\320\276\320\273\321\217", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "\320\240\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202\321\213 \321\200\320\260\321\201\321\207\320\265\321\202\320\276\320\262", nullptr));
        sum_credit->setText(QString());
        sum_credit->setPlaceholderText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "\342\202\275", nullptr));
        label_21->setText(QCoreApplication::translate("MainWindow", "\342\202\275", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "\320\224\320\260\321\202\320\260 \320\262\320\267\321\217\321\202\320\270\321\217 \320\272\321\200\320\265\320\264\320\270\321\202\320\260:", nullptr));
        label_22->setText(QCoreApplication::translate("MainWindow", "\342\202\275", nullptr));
        term_credit->setText(QString());
        term_credit->setPlaceholderText(QCoreApplication::translate("MainWindow", "0", nullptr));
        comboBox_term->setItemText(0, QCoreApplication::translate("MainWindow", "\320\273\320\265\321\202", nullptr));
        comboBox_term->setItemText(1, QCoreApplication::translate("MainWindow", "\320\274\320\265\321\201\321\217\321\206\320\265\320\262", nullptr));

        label_23->setText(QCoreApplication::translate("MainWindow", "\342\202\275", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\276\321\206\320\265\320\275\321\202\320\275\320\260\321\217 \321\201\321\202\320\260\320\262\320\272\320\260:", nullptr));
        credit_procent->setInputMask(QString());
        credit_procent->setText(QString());
        credit_procent->setPlaceholderText(QCoreApplication::translate("MainWindow", "0.0", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "%", nullptr));
        label_49->setText(QCoreApplication::translate("MainWindow", "\342\202\275", nullptr));
        comboBox_type->setItemText(0, QCoreApplication::translate("MainWindow", "\320\220\320\275\320\275\321\203\320\270\321\202\320\265\321\202\320\275\321\213\320\271", nullptr));
        comboBox_type->setItemText(1, QCoreApplication::translate("MainWindow", "\320\224\320\270\321\204\321\204\320\265\321\200\320\265\320\275\321\206\320\270\321\200\320\276\320\262\320\260\320\275\320\275\321\213\320\265", nullptr));

        push_credit_cal->setText(QCoreApplication::translate("MainWindow", "\320\240\320\260\321\201c\321\207\320\270\321\202\320\260\321\202", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "\320\234\320\265\321\202\320\276\320\264 \321\200\320\260\321\201\321\207\320\265\321\202\320\260:", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "\320\241\321\200\320\276\320\272 \320\272\321\200\320\265\320\264\320\270\321\202\320\260:", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\320\241\321\203\320\274\320\274\320\260 \320\272\321\200\320\265\320\264\320\270\321\202\320\260:", nullptr));
        credit_clean->setText(QCoreApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \321\200\320\260\321\201\321\207\320\265\321\202\321\213", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "\320\225\320\266\320\265\320\274\320\265\321\201\321\217\321\207\321\201\320\275\321\213\320\271 \320\277\320\273\320\260\321\202\320\265\320\266:", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "\320\237\320\265\321\200\320\265\320\277\320\273\320\260\321\202\320\260 \320\277\320\276 \320\272\321\200\320\265\320\264\320\270\321\202\321\203:", nullptr));
        label_20->setText(QCoreApplication::translate("MainWindow", "\320\236\320\261\321\211\320\260\321\217 \320\262\321\213\320\277\320\273\320\260\321\202\320\260:", nullptr));
        label_55->setText(QCoreApplication::translate("MainWindow", "\320\224\320\260\321\202\320\260 \320\277\320\276\321\201\320\273\320\265\320\264\320\275\320\265\320\263\320\276 \320\277\320\273\320\260\321\202\320\265\320\266\320\260:", nullptr));
        error->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "\320\232\321\200\320\265\320\264\320\270\321\202\320\275\321\213\320\271", nullptr));
        deposit_error->setText(QString());
        label_34->setText(QCoreApplication::translate("MainWindow", "\320\241\320\275\321\217\321\202\320\270\320\265:", nullptr));
        label_81->setText(QCoreApplication::translate("MainWindow", "%", nullptr));
        label_89->setText(QCoreApplication::translate("MainWindow", "\342\202\275", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \321\200\320\260\321\201\321\207\320\265\321\202\321\213", nullptr));
        deposit_capitalization->setText(QString());
        deposit_term_type->setItemText(0, QCoreApplication::translate("MainWindow", "\320\264\320\275\320\265\320\271", nullptr));
        deposit_term_type->setItemText(1, QCoreApplication::translate("MainWindow", "\320\274\320\265\321\201\321\217\321\206\320\265\320\262", nullptr));
        deposit_term_type->setItemText(2, QCoreApplication::translate("MainWindow", "\320\273\320\265\321\202", nullptr));

        label_25->setText(QCoreApplication::translate("MainWindow", "\320\240\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202\321\213", nullptr));
        label_37->setText(QCoreApplication::translate("MainWindow", "\320\241\321\203\320\274\320\274\320\260 \320\262\320\272\320\273\320\260\320\264\320\260 \320\272 \320\272\320\276\320\275\321\206\321\203 \321\201\321\200\320\276\320\272\320\260:", nullptr));
        deposit_procent_result->setPlaceholderText(QCoreApplication::translate("MainWindow", "0.0", nullptr));
        label_35->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\321\207\320\270\321\201\320\273\320\265\320\275\320\275\321\213\320\265 \320\277\321\200\320\276\321\206\320\265\320\275\321\202\321\213:", nullptr));
        label_32->setText(QCoreApplication::translate("MainWindow", "\320\232\320\260\320\277\320\270\321\202\320\260\320\273\320\270\320\267\320\260\321\206\320\270\321\217 \320\277\321\200\320\276\321\206\320\265\320\275\321\202\320\276\320\262:", nullptr));
        deposit_sum->setPlaceholderText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_33->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\277\320\276\320\273\320\275\320\265\320\275\320\270\320\265:", nullptr));
        deposit_procent_CB->setPlaceholderText(QCoreApplication::translate("MainWindow", "0.0", nullptr));
        deposit_sum_withdraw->setPlaceholderText(QCoreApplication::translate("MainWindow", "0", nullptr));
        deposit_calculation->setText(QCoreApplication::translate("MainWindow", "\320\240\320\260c\321\201\321\207\320\270\321\202\320\260\321\202\321\214", nullptr));
        label_87->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\277\320\276\320\273\320\275\320\270\321\202\320\265 \320\277\320\276 \320\275\320\265\320\276\320\261\321\205\320\276\320\264\320\270\320\274\320\276\321\201\321\202\320\270", nullptr));
        label_30->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\320\273\320\276\320\263\320\276\320\262\320\260\321\217 \321\201\321\202\320\260\320\262\320\272\320\260: *", nullptr));
        label_83->setText(QCoreApplication::translate("MainWindow", "\342\202\275", nullptr));
        label_85->setText(QCoreApplication::translate("MainWindow", "\342\202\275", nullptr));
        label_38->setText(QCoreApplication::translate("MainWindow", "\320\224\320\260\321\202\320\260 \320\276\320\272\320\276\320\275\321\207\320\260\320\275\320\270\321\217 \320\262\320\272\320\273\320\260\320\264\320\260:", nullptr));
        deposit_period_withdraw->setItemText(0, QCoreApplication::translate("MainWindow", "\321\200\320\260\320\267\320\276\320\262\320\276\320\265", nullptr));
        deposit_period_withdraw->setItemText(1, QCoreApplication::translate("MainWindow", "\321\200\320\260\320\267 \320\262 \320\274\320\265\321\201\321\217\321\206", nullptr));
        deposit_period_withdraw->setItemText(2, QCoreApplication::translate("MainWindow", "\321\200\320\260\320\267 \320\262 2 \320\274\320\265\321\201\321\217\321\206\320\260", nullptr));
        deposit_period_withdraw->setItemText(3, QCoreApplication::translate("MainWindow", "\321\200\320\260\320\267 \320\262 \320\272\320\262\320\260\321\200\321\202\320\260\320\273", nullptr));
        deposit_period_withdraw->setItemText(4, QCoreApplication::translate("MainWindow", "\321\200\320\260\320\267 \320\262 \320\277\320\276\320\273\320\263\320\276\320\264\320\260", nullptr));
        deposit_period_withdraw->setItemText(5, QCoreApplication::translate("MainWindow", "\321\200\320\260\320\267 \320\262 \320\263\320\276\320\264", nullptr));

        label_31->setText(QCoreApplication::translate("MainWindow", "\320\237\320\265\321\200\320\270\320\276\320\264\320\270\321\207\320\275\320\276\321\201\321\202\321\214 \320\262\321\213\320\277\320\273\320\260\321\202:", nullptr));
        deposit_tax_result->setPlaceholderText(QCoreApplication::translate("MainWindow", "0.0", nullptr));
        deposit_procent->setPlaceholderText(QCoreApplication::translate("MainWindow", "0.0", nullptr));
        label_27->setText(QCoreApplication::translate("MainWindow", "\320\241\321\200\320\276\320\272 \321\200\320\260\320\267\320\274\320\265\321\211\320\265\320\275\320\270\321\217:", nullptr));
        deposit_period_payment->setItemText(0, QCoreApplication::translate("MainWindow", "\320\272\320\260\320\266\320\264\321\213\320\271 \320\264\320\265\320\275\321\214", nullptr));
        deposit_period_payment->setItemText(1, QCoreApplication::translate("MainWindow", "\320\272\320\260\320\266\320\264\321\203\321\216 \320\275\320\265\320\264\320\265\320\273\321\216", nullptr));
        deposit_period_payment->setItemText(2, QCoreApplication::translate("MainWindow", "\321\200\320\260\320\267 \320\262 \320\274\320\265\321\201\321\217\321\206", nullptr));
        deposit_period_payment->setItemText(3, QCoreApplication::translate("MainWindow", "\321\200\320\260\320\267 \320\262 \320\272\320\262\320\260\321\200\321\202\320\260\320\273", nullptr));
        deposit_period_payment->setItemText(4, QCoreApplication::translate("MainWindow", "\321\200\320\260\320\267 \320\262 \320\277\320\276\320\273\320\263\320\276\320\264\320\260", nullptr));
        deposit_period_payment->setItemText(5, QCoreApplication::translate("MainWindow", "\321\200\320\260\320\267 \320\262 \320\263\320\276\320\264", nullptr));
        deposit_period_payment->setItemText(6, QCoreApplication::translate("MainWindow", "\320\262 \320\272\320\276\320\275\321\206\320\265 \321\201\321\200\320\276\320\272\320\260", nullptr));

        label_26->setText(QCoreApplication::translate("MainWindow", "\320\241\321\203\320\274\320\274\320\260 \320\262\320\272\320\273\320\260\320\264\320\260:", nullptr));
        deposit_term->setPlaceholderText(QCoreApplication::translate("MainWindow", "0", nullptr));
        deposit_sum_result->setPlaceholderText(QCoreApplication::translate("MainWindow", "0.0", nullptr));
        label_88->setText(QCoreApplication::translate("MainWindow", "%", nullptr));
        deposit_period_replanishment->setItemText(0, QCoreApplication::translate("MainWindow", "\321\200\320\260\320\267\320\276\320\262\320\276\320\265", nullptr));
        deposit_period_replanishment->setItemText(1, QCoreApplication::translate("MainWindow", "\321\200\320\260\320\267 \320\262 \320\274\320\265\321\201\321\217\321\206", nullptr));
        deposit_period_replanishment->setItemText(2, QCoreApplication::translate("MainWindow", "\321\200\320\260\320\267 \320\262 2 \320\274\320\265\321\201\321\217\321\206\320\260", nullptr));
        deposit_period_replanishment->setItemText(3, QCoreApplication::translate("MainWindow", "\321\200\320\260\320\267 \320\262 \320\272\320\262\320\260\321\200\321\202\320\260\320\273", nullptr));
        deposit_period_replanishment->setItemText(4, QCoreApplication::translate("MainWindow", "\321\200\320\260\320\267 \320\262 \320\277\320\276\320\273\320\263\320\276\320\264\320\260", nullptr));
        deposit_period_replanishment->setItemText(5, QCoreApplication::translate("MainWindow", "\321\200\320\260\320\267 \320\262 \320\263\320\276\320\264", nullptr));

        label_29->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\276\321\206\320\265\320\275\321\202\320\275\320\260\321\217 \321\201\321\202\320\260\320\262\320\272\320\260:", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "* \320\237\321\200\320\276\321\206\320\265\320\275\321\202 \320\275\320\265 \320\276\320\261\320\273\320\260\320\263\320\260\320\265\320\274\321\213\320\271 \320\275\320\260\320\273\320\276\320\263\320\276\320\274", nullptr));
        label_28->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\321\207\320\260\320\273\320\276 \321\201\321\200\320\276\320\272\320\260:", nullptr));
        label_24->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\277\320\276\320\273\320\275\320\270\321\202\320\265 \320\277\320\276\320\273\321\217", nullptr));
        label_84->setText(QCoreApplication::translate("MainWindow", "\342\202\275", nullptr));
        deposit_sum_replanishment->setPlaceholderText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_86->setText(QCoreApplication::translate("MainWindow", "\342\202\275", nullptr));
        label_36->setText(QCoreApplication::translate("MainWindow", "\320\241\321\203\320\274\320\274\320\260 \320\275\320\260\320\273\320\276\320\263\320\260:", nullptr));
        label_82->setText(QCoreApplication::translate("MainWindow", "\342\202\275", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("MainWindow", "\320\224\320\265\320\277\320\276\320\267\320\270\321\202\320\275\321\213\320\271", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
