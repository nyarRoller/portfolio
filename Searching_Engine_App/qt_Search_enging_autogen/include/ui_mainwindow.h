/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButton_2;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_10;
    QLabel *label_7;
    QLineEdit *lineEdit_12;
    QLineEdit *lineEdit_13;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_6;
    QLineEdit *lineEdit_11;
    QLineEdit *lineEdit_10;
    QVBoxLayout *verticalLayout_12;
    QLabel *label_8;
    QLineEdit *lineEdit_14;
    QLineEdit *lineEdit_15;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_5;
    QLineEdit *lineEdit_9;
    QLineEdit *lineEdit_8;
    QListView *gadget_list;
    QVBoxLayout *verticalLayout;
    QRadioButton *laptop;
    QRadioButton *phone;
    QRadioButton *tv;
    QRadioButton *all;
    QPushButton *pushButton;
    QLabel *bg;
    QButtonGroup *buttonGroup;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1040, 511);
        MainWindow->setMinimumSize(QSize(1040, 310));
        MainWindow->setMaximumSize(QSize(1040, 16777215));
        QFont font;
        font.setFamilies({QString::fromUtf8("Bahnschrift SemiBold Condensed")});
        font.setPointSize(30);
        MainWindow->setFont(font);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 14, 1021, 481));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Ignored);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Bahnschrift SemiBold Condensed")});
        font1.setPointSize(15);
        pushButton_2->setFont(font1);
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #F2F0FF;\n"
"	border-radius: 8px;\n"
"	border: 2px solid grey;	\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: #E0DAFF;\n"
"\n"
"}\n"
""));

        gridLayout->addWidget(pushButton_2, 1, 0, 1, 1);

        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(50);
        sizePolicy1.setVerticalStretch(50);
        sizePolicy1.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy1);
        lineEdit->setMaximumSize(QSize(460, 60));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Bahnschrift SemiBold Condensed")});
        font2.setPointSize(20);
        lineEdit->setFont(font2);
        lineEdit->setStyleSheet(QString::fromUtf8("  QLineEdit{\n"
"	border-radius: 8px;\n"
"	border: 2px solid grey;	\n"
"}\n"
"\n"
"QLineEdit:focus{\n"
"	border: 2px solid #E0DAFF;\n"
"}"));
        lineEdit->setCursorPosition(0);
        lineEdit->setDragEnabled(false);
        lineEdit->setPlaceholderText(QString::fromUtf8("\320\235\320\260\320\267\320\262\320\260 \320\263\320\260\320\264\320\266\320\265\321\202\320\260"));
        lineEdit->setClearButtonEnabled(false);

        gridLayout->addWidget(lineEdit, 2, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font2);

        verticalLayout_10->addWidget(label_7);

        lineEdit_12 = new QLineEdit(layoutWidget);
        lineEdit_12->setObjectName(QString::fromUtf8("lineEdit_12"));
        lineEdit_12->setMinimumSize(QSize(100, 0));
        lineEdit_12->setMaximumSize(QSize(100, 16777215));
        lineEdit_12->setFont(font1);
        lineEdit_12->setStyleSheet(QString::fromUtf8("  QLineEdit{\n"
"	border-radius: 8px;\n"
"	border: 2px solid grey;	\n"
"}\n"
"\n"
"QLineEdit:focus{\n"
"	border: 2px solid #E0DAFF;\n"
"}"));

        verticalLayout_10->addWidget(lineEdit_12);

        lineEdit_13 = new QLineEdit(layoutWidget);
        lineEdit_13->setObjectName(QString::fromUtf8("lineEdit_13"));
        lineEdit_13->setMinimumSize(QSize(100, 0));
        lineEdit_13->setMaximumSize(QSize(100, 16777215));
        lineEdit_13->setFont(font1);
        lineEdit_13->setStyleSheet(QString::fromUtf8("  QLineEdit{\n"
"	border-radius: 8px;\n"
"	border: 2px solid grey;	\n"
"}\n"
"\n"
"QLineEdit:focus{\n"
"	border: 2px solid #E0DAFF;\n"
"}"));

        verticalLayout_10->addWidget(lineEdit_13);


        horizontalLayout->addLayout(verticalLayout_10);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font2);

        verticalLayout_9->addWidget(label_6);

        lineEdit_11 = new QLineEdit(layoutWidget);
        lineEdit_11->setObjectName(QString::fromUtf8("lineEdit_11"));
        lineEdit_11->setMinimumSize(QSize(100, 0));
        lineEdit_11->setMaximumSize(QSize(100, 16777215));
        lineEdit_11->setFont(font1);
        lineEdit_11->setStyleSheet(QString::fromUtf8("  QLineEdit{\n"
"	border-radius: 8px;\n"
"	border: 2px solid grey;	\n"
"}\n"
"\n"
"QLineEdit:focus{\n"
"	border: 2px solid #E0DAFF;\n"
"}"));

        verticalLayout_9->addWidget(lineEdit_11);

        lineEdit_10 = new QLineEdit(layoutWidget);
        lineEdit_10->setObjectName(QString::fromUtf8("lineEdit_10"));
        lineEdit_10->setMinimumSize(QSize(100, 0));
        lineEdit_10->setMaximumSize(QSize(100, 16777215));
        lineEdit_10->setFont(font1);
        lineEdit_10->setStyleSheet(QString::fromUtf8("  QLineEdit{\n"
"	border-radius: 8px;\n"
"	border: 2px solid grey;	\n"
"}\n"
"\n"
"QLineEdit:focus{\n"
"	border: 2px solid #E0DAFF;\n"
"}"));

        verticalLayout_9->addWidget(lineEdit_10);


        horizontalLayout->addLayout(verticalLayout_9);

        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font2);

        verticalLayout_12->addWidget(label_8);

        lineEdit_14 = new QLineEdit(layoutWidget);
        lineEdit_14->setObjectName(QString::fromUtf8("lineEdit_14"));
        lineEdit_14->setMinimumSize(QSize(100, 0));
        lineEdit_14->setMaximumSize(QSize(100, 16777215));
        lineEdit_14->setFont(font1);
        lineEdit_14->setStyleSheet(QString::fromUtf8("  QLineEdit{\n"
"	border-radius: 8px;\n"
"	border: 2px solid grey;	\n"
"}\n"
"\n"
"QLineEdit:focus{\n"
"	border: 2px solid #E0DAFF;\n"
"}"));

        verticalLayout_12->addWidget(lineEdit_14);

        lineEdit_15 = new QLineEdit(layoutWidget);
        lineEdit_15->setObjectName(QString::fromUtf8("lineEdit_15"));
        lineEdit_15->setMinimumSize(QSize(100, 0));
        lineEdit_15->setMaximumSize(QSize(100, 16777215));
        lineEdit_15->setFont(font1);
        lineEdit_15->setStyleSheet(QString::fromUtf8("  QLineEdit{\n"
"	border-radius: 8px;\n"
"	border: 2px solid grey;	\n"
"}\n"
"\n"
"QLineEdit:focus{\n"
"	border: 2px solid #E0DAFF;\n"
"}"));

        verticalLayout_12->addWidget(lineEdit_15);


        horizontalLayout->addLayout(verticalLayout_12);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font2);

        verticalLayout_8->addWidget(label_5);

        lineEdit_9 = new QLineEdit(layoutWidget);
        lineEdit_9->setObjectName(QString::fromUtf8("lineEdit_9"));
        lineEdit_9->setMinimumSize(QSize(100, 0));
        lineEdit_9->setMaximumSize(QSize(100, 16777215));
        lineEdit_9->setFont(font1);
        lineEdit_9->setStyleSheet(QString::fromUtf8("  QLineEdit{\n"
"	border-radius: 8px;\n"
"	border: 2px solid grey;	\n"
"}\n"
"\n"
"QLineEdit:focus{\n"
"	border: 2px solid #E0DAFF;\n"
"}"));

        verticalLayout_8->addWidget(lineEdit_9);

        lineEdit_8 = new QLineEdit(layoutWidget);
        lineEdit_8->setObjectName(QString::fromUtf8("lineEdit_8"));
        lineEdit_8->setMinimumSize(QSize(100, 0));
        lineEdit_8->setMaximumSize(QSize(100, 16777215));
        lineEdit_8->setFont(font1);
        lineEdit_8->setStyleSheet(QString::fromUtf8("  QLineEdit{\n"
"	border-radius: 8px;\n"
"	border: 2px solid grey;	\n"
"}\n"
"\n"
"QLineEdit:focus{\n"
"	border: 2px solid #E0DAFF;\n"
"}"));

        verticalLayout_8->addWidget(lineEdit_8);


        horizontalLayout->addLayout(verticalLayout_8);


        gridLayout->addLayout(horizontalLayout, 3, 0, 1, 1);

        gadget_list = new QListView(layoutWidget);
        gadget_list->setObjectName(QString::fromUtf8("gadget_list"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Ignored);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(gadget_list->sizePolicy().hasHeightForWidth());
        gadget_list->setSizePolicy(sizePolicy2);
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Segoe UI")});
        font3.setPointSize(10);
        font3.setBold(true);
        gadget_list->setFont(font3);
        gadget_list->setStyleSheet(QString::fromUtf8("QListView{\n"
"	border-radius: 12px;\n"
"	background-color: #F4FFFF;\n"
"	border: 2px solid grey;\n"
"}"));
        gadget_list->setEditTriggers(QAbstractItemView::NoEditTriggers);
        gadget_list->setSelectionMode(QAbstractItemView::SingleSelection);

        gridLayout->addWidget(gadget_list, 0, 1, 5, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        laptop = new QRadioButton(layoutWidget);
        buttonGroup = new QButtonGroup(MainWindow);
        buttonGroup->setObjectName(QString::fromUtf8("buttonGroup"));
        buttonGroup->addButton(laptop);
        laptop->setObjectName(QString::fromUtf8("laptop"));
        QSizePolicy sizePolicy3(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(laptop->sizePolicy().hasHeightForWidth());
        laptop->setSizePolicy(sizePolicy3);
        laptop->setFont(font1);

        verticalLayout->addWidget(laptop);

        phone = new QRadioButton(layoutWidget);
        buttonGroup->addButton(phone);
        phone->setObjectName(QString::fromUtf8("phone"));
        sizePolicy3.setHeightForWidth(phone->sizePolicy().hasHeightForWidth());
        phone->setSizePolicy(sizePolicy3);
        phone->setFont(font1);

        verticalLayout->addWidget(phone);

        tv = new QRadioButton(layoutWidget);
        buttonGroup->addButton(tv);
        tv->setObjectName(QString::fromUtf8("tv"));
        sizePolicy3.setHeightForWidth(tv->sizePolicy().hasHeightForWidth());
        tv->setSizePolicy(sizePolicy3);
        tv->setFont(font1);

        verticalLayout->addWidget(tv);

        all = new QRadioButton(layoutWidget);
        buttonGroup->addButton(all);
        all->setObjectName(QString::fromUtf8("all"));
        sizePolicy3.setHeightForWidth(all->sizePolicy().hasHeightForWidth());
        all->setSizePolicy(sizePolicy3);
        all->setFont(font1);
        all->setChecked(true);

        verticalLayout->addWidget(all);


        gridLayout->addLayout(verticalLayout, 4, 0, 1, 1);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        pushButton->setFont(font1);
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #F2F0FF;\n"
"	border-radius: 8px;\n"
"	border: 2px solid grey;	\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: #E0DAFF;\n"
"\n"
"}\n"
""));

        gridLayout->addWidget(pushButton, 0, 0, 1, 1);

        bg = new QLabel(centralwidget);
        bg->setObjectName(QString::fromUtf8("bg"));
        bg->setGeometry(QRect(0, 5, 1101, 571));
        MainWindow->setCentralWidget(centralwidget);
        bg->raise();
        layoutWidget->raise();

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Device seaching", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\321\210\321\203\320\272", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "\320\246\321\226\320\275\320\260", nullptr));
        lineEdit_12->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\222\321\226\320\264", nullptr));
        lineEdit_13->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\224\320\276", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "\320\240\321\226\320\272 \320\262\320\270\320\277\321\203\321\201\320\272\320\260", nullptr));
        lineEdit_11->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\222\321\226\320\264", nullptr));
        lineEdit_10->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\224\320\276", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "\320\221\320\260\321\202\320\260\321\200\320\265\321\217", nullptr));
        lineEdit_14->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\222\321\226\320\264", nullptr));
        lineEdit_15->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\224\320\276", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\320\225\320\272\321\200\320\260\320\275", nullptr));
        lineEdit_9->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\222\321\226\320\264", nullptr));
        lineEdit_8->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\224\320\276", nullptr));
        laptop->setText(QCoreApplication::translate("MainWindow", "\320\235\320\276\321\203\321\202\320\261\321\203\320\272", nullptr));
        phone->setText(QCoreApplication::translate("MainWindow", "\320\241\320\274\320\260\321\200\321\202\321\204\320\276\320\275", nullptr));
        tv->setText(QCoreApplication::translate("MainWindow", "\320\242\320\265\320\273\320\265\320\262\321\226\320\267\320\276\321\200", nullptr));
        all->setText(QCoreApplication::translate("MainWindow", "\320\222\321\201\321\226 \321\202\320\270\320\277\320\270", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\264\320\260\321\202\320\270 \320\275\320\276\320\262\320\270\320\271", nullptr));
        bg->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
