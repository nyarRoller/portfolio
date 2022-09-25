/********************************************************************************
** Form generated from reading UI file 'add_devices.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_DEVICES_H
#define UI_ADD_DEVICES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_add_devices
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_3;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_3;
    QLineEdit *lineEdit_3;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_4;
    QLineEdit *lineEdit_4;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_5;
    QLineEdit *lineEdit_5;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *bg;

    void setupUi(QDialog *add_devices)
    {
        if (add_devices->objectName().isEmpty())
            add_devices->setObjectName(QString::fromUtf8("add_devices"));
        add_devices->resize(520, 640);
        add_devices->setMinimumSize(QSize(520, 640));
        add_devices->setMaximumSize(QSize(520, 640));
        layoutWidget = new QWidget(add_devices);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 491, 611));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamilies({QString::fromUtf8("Rockwell Condensed")});
        font.setPointSize(12);
        font.setBold(true);
        label->setFont(font);

        horizontalLayout_2->addWidget(label);

        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Rockwell Condensed")});
        font1.setPointSize(14);
        font1.setBold(true);
        lineEdit->setFont(font1);
        lineEdit->setStyleSheet(QString::fromUtf8("  QLineEdit{\n"
"	border-radius: 8px;\n"
"	border: 2px solid grey;	\n"
"}\n"
"\n"
"QLineEdit:focus{\n"
"	border: 2px solid #E0DAFF;\n"
"}"));

        horizontalLayout_2->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        radioButton_2 = new QRadioButton(layoutWidget);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setFont(font);
        radioButton_2->setChecked(true);

        horizontalLayout_3->addWidget(radioButton_2);

        radioButton_3 = new QRadioButton(layoutWidget);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));
        radioButton_3->setFont(font);

        horizontalLayout_3->addWidget(radioButton_3);

        radioButton = new QRadioButton(layoutWidget);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setFont(font);

        horizontalLayout_3->addWidget(radioButton);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        horizontalLayout_4->addWidget(label_2);

        lineEdit_2 = new QLineEdit(layoutWidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setFont(font1);
        lineEdit_2->setStyleSheet(QString::fromUtf8("  QLineEdit{\n"
"	border-radius: 8px;\n"
"	border: 2px solid grey;	\n"
"}\n"
"\n"
"QLineEdit:focus{\n"
"	border: 2px solid #E0DAFF;\n"
"}"));

        horizontalLayout_4->addWidget(lineEdit_2);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        horizontalLayout_5->addWidget(label_3);

        lineEdit_3 = new QLineEdit(layoutWidget);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setFont(font1);
        lineEdit_3->setStyleSheet(QString::fromUtf8("  QLineEdit{\n"
"	border-radius: 8px;\n"
"	border: 2px solid grey;	\n"
"}\n"
"\n"
"QLineEdit:focus{\n"
"	border: 2px solid #E0DAFF;\n"
"}"));

        horizontalLayout_5->addWidget(lineEdit_3);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);

        horizontalLayout_6->addWidget(label_4);

        lineEdit_4 = new QLineEdit(layoutWidget);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setFont(font1);
        lineEdit_4->setStyleSheet(QString::fromUtf8("  QLineEdit{\n"
"	border-radius: 8px;\n"
"	border: 2px solid grey;	\n"
"}\n"
"\n"
"QLineEdit:focus{\n"
"	border: 2px solid #E0DAFF;\n"
"}"));

        horizontalLayout_6->addWidget(lineEdit_4);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font);

        horizontalLayout_7->addWidget(label_5);

        lineEdit_5 = new QLineEdit(layoutWidget);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setFont(font1);
        lineEdit_5->setStyleSheet(QString::fromUtf8("  QLineEdit{\n"
"	border-radius: 8px;\n"
"	border: 2px solid grey;	\n"
"}\n"
"\n"
"QLineEdit:focus{\n"
"	border: 2px solid #E0DAFF;\n"
"}"));

        horizontalLayout_7->addWidget(lineEdit_5);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(0, 50));
        pushButton->setMaximumSize(QSize(16777215, 50));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Rockwell Extra Bold")});
        font2.setPointSize(14);
        font2.setBold(true);
        pushButton->setFont(font2);
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

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(0, 50));
        pushButton_2->setMaximumSize(QSize(16777215, 50));
        pushButton_2->setFont(font2);
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #F4FFFF;\n"
"	border-radius: 8px;\n"
"	border: 2px solid grey;	\n"
"}\n"
"QPushButton:hover{\n"
"	background-color:  #dbffff;\n"
"\n"
"}\n"
""));

        horizontalLayout->addWidget(pushButton_2);


        verticalLayout->addLayout(horizontalLayout);

        bg = new QLabel(add_devices);
        bg->setObjectName(QString::fromUtf8("bg"));
        bg->setGeometry(QRect(-28, -11, 591, 801));
        bg->raise();
        layoutWidget->raise();

        retranslateUi(add_devices);

        QMetaObject::connectSlotsByName(add_devices);
    } // setupUi

    void retranslateUi(QDialog *add_devices)
    {
        add_devices->setWindowTitle(QCoreApplication::translate("add_devices", "Add device", nullptr));
        label->setText(QCoreApplication::translate("add_devices", "\320\235\320\260\320\267\320\262\320\260", nullptr));
        radioButton_2->setText(QCoreApplication::translate("add_devices", "\320\235\320\276\321\203\321\202\320\261\320\272", nullptr));
        radioButton_3->setText(QCoreApplication::translate("add_devices", "\320\242\320\265\320\273\320\265\320\262\321\226\320\267\320\276\321\200", nullptr));
        radioButton->setText(QCoreApplication::translate("add_devices", "\320\242\320\265\320\273\320\265\321\204\320\276\320\275", nullptr));
        label_2->setText(QCoreApplication::translate("add_devices", "\320\246\321\226\320\275\320\260", nullptr));
        label_3->setText(QCoreApplication::translate("add_devices", "\320\240\321\226\320\272 \320\262\320\270\320\277\321\203\321\201\320\272\321\203", nullptr));
        label_4->setText(QCoreApplication::translate("add_devices", "\320\224\321\226\320\260\320\263\320\276\320\275\320\260\320\273\321\214", nullptr));
        label_5->setText(QCoreApplication::translate("add_devices", "\320\221\320\260\321\202\320\260\321\200\320\265\321\217", nullptr));
        pushButton->setText(QCoreApplication::translate("add_devices", "\320\224\320\276\320\264\320\260\321\202\320\270", nullptr));
        pushButton_2->setText(QCoreApplication::translate("add_devices", "\320\227\320\260\320\272\321\200\320\270\321\202\320\270 \320\262\321\226\320\272\320\275\320\276", nullptr));
        bg->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class add_devices: public Ui_add_devices {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_DEVICES_H
