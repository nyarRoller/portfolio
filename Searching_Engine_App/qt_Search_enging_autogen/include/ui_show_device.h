/********************************************************************************
** Form generated from reading UI file 'show_device.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOW_DEVICE_H
#define UI_SHOW_DEVICE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_show_device
{
public:
    QLabel *bg;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLabel *lname;
    QLineEdit *nameEdit;
    QFrame *line;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_6;
    QWidget *typeEdit;
    QRadioButton *laptop;
    QRadioButton *phone;
    QRadioButton *tv;
    QLabel *type;
    QFrame *line_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_2;
    QLabel *price;
    QLineEdit *priceEdit;
    QFrame *line_3;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_3;
    QLabel *year;
    QLineEdit *yearEdit;
    QFrame *line_4;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_4;
    QLabel *display;
    QLineEdit *displayEdit;
    QFrame *line_5;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_5;
    QLabel *battery;
    QLineEdit *batteryEdit;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *save;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QFrame *line_6;

    void setupUi(QDialog *show_device)
    {
        if (show_device->objectName().isEmpty())
            show_device->setObjectName(QString::fromUtf8("show_device"));
        show_device->resize(640, 740);
        show_device->setMinimumSize(QSize(640, 740));
        show_device->setMaximumSize(QSize(640, 740));
        bg = new QLabel(show_device);
        bg->setObjectName(QString::fromUtf8("bg"));
        bg->setGeometry(QRect(-30, -20, 701, 801));
        layoutWidget = new QWidget(show_device);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(-20, -50, 681, 811));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetMinimumSize);
        verticalLayout->setContentsMargins(24, 29, 24, 29);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, 29, 0, 29);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamilies({QString::fromUtf8("Rockwell Condensed")});
        font.setPointSize(12);
        font.setBold(true);
        label->setFont(font);

        horizontalLayout_2->addWidget(label);

        lname = new QLabel(layoutWidget);
        lname->setObjectName(QString::fromUtf8("lname"));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Bahnschrift SemiBold Condensed")});
        font1.setPointSize(12);
        font1.setBold(true);
        lname->setFont(font1);

        horizontalLayout_2->addWidget(lname);

        nameEdit = new QLineEdit(layoutWidget);
        nameEdit->setObjectName(QString::fromUtf8("nameEdit"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(nameEdit->sizePolicy().hasHeightForWidth());
        nameEdit->setSizePolicy(sizePolicy1);
        nameEdit->setMinimumSize(QSize(350, 0));
        nameEdit->setMaximumSize(QSize(350, 16777215));
        nameEdit->setFont(font1);
        nameEdit->setStyleSheet(QString::fromUtf8("  QLineEdit{\n"
"	border-radius: 8px;\n"
"	border: 2px solid grey;	\n"
"}\n"
"\n"
"QLineEdit:focus{\n"
"	border: 2px solid #E0DAFF;\n"
"}"));

        horizontalLayout_2->addWidget(nameEdit);


        verticalLayout->addLayout(horizontalLayout_2);

        line = new QFrame(layoutWidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setMinimumSize(QSize(0, 2));
        line->setMaximumSize(QSize(16777215, 2));
        line->setStyleSheet(QString::fromUtf8("height: 5px;\n"
"background-color:black;"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, 29, 0, 29);
        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font);

        horizontalLayout_3->addWidget(label_6);

        typeEdit = new QWidget(layoutWidget);
        typeEdit->setObjectName(QString::fromUtf8("typeEdit"));
        typeEdit->setMinimumSize(QSize(400, 0));
        typeEdit->setMaximumSize(QSize(400, 16777215));
        laptop = new QRadioButton(typeEdit);
        laptop->setObjectName(QString::fromUtf8("laptop"));
        laptop->setGeometry(QRect(0, 10, 110, 24));
        laptop->setFont(font1);
        phone = new QRadioButton(typeEdit);
        phone->setObjectName(QString::fromUtf8("phone"));
        phone->setGeometry(QRect(120, 10, 110, 24));
        phone->setFont(font1);
        tv = new QRadioButton(typeEdit);
        tv->setObjectName(QString::fromUtf8("tv"));
        tv->setGeometry(QRect(250, 10, 110, 24));
        tv->setFont(font1);

        horizontalLayout_3->addWidget(typeEdit);

        type = new QLabel(layoutWidget);
        type->setObjectName(QString::fromUtf8("type"));
        type->setFont(font1);

        horizontalLayout_3->addWidget(type);


        verticalLayout->addLayout(horizontalLayout_3);

        line_2 = new QFrame(layoutWidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setMinimumSize(QSize(0, 2));
        line_2->setMaximumSize(QSize(16777215, 2));
        line_2->setStyleSheet(QString::fromUtf8("height: 5px;\n"
"background-color:black;"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(-1, 29, 0, 29);
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        horizontalLayout_4->addWidget(label_2);

        price = new QLabel(layoutWidget);
        price->setObjectName(QString::fromUtf8("price"));
        price->setFont(font1);

        horizontalLayout_4->addWidget(price);

        priceEdit = new QLineEdit(layoutWidget);
        priceEdit->setObjectName(QString::fromUtf8("priceEdit"));
        sizePolicy1.setHeightForWidth(priceEdit->sizePolicy().hasHeightForWidth());
        priceEdit->setSizePolicy(sizePolicy1);
        priceEdit->setMinimumSize(QSize(350, 0));
        priceEdit->setMaximumSize(QSize(350, 16777215));
        priceEdit->setFont(font1);
        priceEdit->setStyleSheet(QString::fromUtf8("  QLineEdit{\n"
"	border-radius: 8px;\n"
"	border: 2px solid grey;	\n"
"}\n"
"\n"
"QLineEdit:focus{\n"
"	border: 2px solid #E0DAFF;\n"
"}"));

        horizontalLayout_4->addWidget(priceEdit);


        verticalLayout->addLayout(horizontalLayout_4);

        line_3 = new QFrame(layoutWidget);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setMinimumSize(QSize(0, 2));
        line_3->setMaximumSize(QSize(16777215, 2));
        line_3->setStyleSheet(QString::fromUtf8("height: 5px;\n"
"background-color:black;"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(-1, 29, 0, 29);
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        horizontalLayout_5->addWidget(label_3);

        year = new QLabel(layoutWidget);
        year->setObjectName(QString::fromUtf8("year"));
        year->setFont(font1);

        horizontalLayout_5->addWidget(year);

        yearEdit = new QLineEdit(layoutWidget);
        yearEdit->setObjectName(QString::fromUtf8("yearEdit"));
        sizePolicy1.setHeightForWidth(yearEdit->sizePolicy().hasHeightForWidth());
        yearEdit->setSizePolicy(sizePolicy1);
        yearEdit->setMinimumSize(QSize(350, 0));
        yearEdit->setMaximumSize(QSize(350, 16777215));
        yearEdit->setFont(font1);
        yearEdit->setStyleSheet(QString::fromUtf8("  QLineEdit{\n"
"	border-radius: 8px;\n"
"	border: 2px solid grey;	\n"
"}\n"
"\n"
"QLineEdit:focus{\n"
"	border: 2px solid #E0DAFF;\n"
"}"));

        horizontalLayout_5->addWidget(yearEdit);


        verticalLayout->addLayout(horizontalLayout_5);

        line_4 = new QFrame(layoutWidget);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setMinimumSize(QSize(0, 2));
        line_4->setMaximumSize(QSize(16777215, 2));
        line_4->setStyleSheet(QString::fromUtf8("height: 5px;\n"
"background-color:black;"));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_4);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(-1, 29, 0, 29);
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);

        horizontalLayout_6->addWidget(label_4);

        display = new QLabel(layoutWidget);
        display->setObjectName(QString::fromUtf8("display"));
        display->setFont(font1);

        horizontalLayout_6->addWidget(display);

        displayEdit = new QLineEdit(layoutWidget);
        displayEdit->setObjectName(QString::fromUtf8("displayEdit"));
        sizePolicy1.setHeightForWidth(displayEdit->sizePolicy().hasHeightForWidth());
        displayEdit->setSizePolicy(sizePolicy1);
        displayEdit->setMinimumSize(QSize(350, 0));
        displayEdit->setMaximumSize(QSize(350, 16777215));
        displayEdit->setFont(font1);
        displayEdit->setStyleSheet(QString::fromUtf8("  QLineEdit{\n"
"	border-radius: 8px;\n"
"	border: 2px solid grey;	\n"
"}\n"
"\n"
"QLineEdit:focus{\n"
"	border: 2px solid #E0DAFF;\n"
"}"));

        horizontalLayout_6->addWidget(displayEdit);


        verticalLayout->addLayout(horizontalLayout_6);

        line_5 = new QFrame(layoutWidget);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        line_5->setMinimumSize(QSize(0, 2));
        line_5->setMaximumSize(QSize(16777215, 2));
        line_5->setStyleSheet(QString::fromUtf8("height: 5px;\n"
"background-color:black;"));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_5);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(-1, 29, 0, 29);
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font);

        horizontalLayout_7->addWidget(label_5);

        battery = new QLabel(layoutWidget);
        battery->setObjectName(QString::fromUtf8("battery"));
        battery->setFont(font1);

        horizontalLayout_7->addWidget(battery);

        batteryEdit = new QLineEdit(layoutWidget);
        batteryEdit->setObjectName(QString::fromUtf8("batteryEdit"));
        sizePolicy1.setHeightForWidth(batteryEdit->sizePolicy().hasHeightForWidth());
        batteryEdit->setSizePolicy(sizePolicy1);
        batteryEdit->setMinimumSize(QSize(350, 0));
        batteryEdit->setMaximumSize(QSize(350, 16777215));
        batteryEdit->setFont(font1);
        batteryEdit->setStyleSheet(QString::fromUtf8("  QLineEdit{\n"
"	border-radius: 8px;\n"
"	border: 2px solid grey;	\n"
"}\n"
"\n"
"QLineEdit:focus{\n"
"	border: 2px solid #E0DAFF;\n"
"}"));

        horizontalLayout_7->addWidget(batteryEdit);


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

        save = new QPushButton(layoutWidget);
        save->setObjectName(QString::fromUtf8("save"));
        save->setMinimumSize(QSize(0, 50));
        save->setMaximumSize(QSize(16777215, 50));
        save->setFont(font2);
        save->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #F2F0FF;\n"
"	border-radius: 8px;\n"
"	border: 2px solid grey;	\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: #E0DAFF;\n"
"\n"
"}\n"
""));

        horizontalLayout->addWidget(save);

        pushButton_3 = new QPushButton(layoutWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setMinimumSize(QSize(0, 50));
        pushButton_3->setMaximumSize(QSize(16777215, 50));
        pushButton_3->setFont(font2);
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #F2F0FF;\n"
"	border-radius: 8px;\n"
"	border: 2px solid grey;	\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: #E0DAFF;\n"
"\n"
"}\n"
""));

        horizontalLayout->addWidget(pushButton_3);

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

        line_6 = new QFrame(show_device);
        line_6->setObjectName(QString::fromUtf8("line_6"));
        line_6->setGeometry(QRect(140, 0, 2, 640));
        line_6->setMinimumSize(QSize(0, 640));
        line_6->setMaximumSize(QSize(2, 640));
        line_6->setStyleSheet(QString::fromUtf8("height: 40px;\n"
"background-color:black;"));
        line_6->setFrameShape(QFrame::VLine);
        line_6->setFrameShadow(QFrame::Sunken);

        retranslateUi(show_device);

        QMetaObject::connectSlotsByName(show_device);
    } // setupUi

    void retranslateUi(QDialog *show_device)
    {
        show_device->setWindowTitle(QCoreApplication::translate("show_device", "Show device", nullptr));
        bg->setText(QString());
        label->setText(QCoreApplication::translate("show_device", "\320\235\320\260\320\267\320\262\320\260:", nullptr));
        lname->setText(QCoreApplication::translate("show_device", "\320\275\320\267\320\262", nullptr));
        label_6->setText(QCoreApplication::translate("show_device", "\320\242\320\270\320\277 \320\263\320\260\320\264\320\266\320\265\321\202\320\260", nullptr));
        laptop->setText(QCoreApplication::translate("show_device", "\320\235\320\276\321\203\321\202\320\261\321\203\320\272", nullptr));
        phone->setText(QCoreApplication::translate("show_device", "\320\241\320\274\320\260\321\200\321\202\321\204\320\276\320\275", nullptr));
        tv->setText(QCoreApplication::translate("show_device", "\320\242\320\265\320\273\320\265\320\262\321\226\320\267\320\276\321\200", nullptr));
        type->setText(QCoreApplication::translate("show_device", "\320\275\320\267\320\262", nullptr));
        label_2->setText(QCoreApplication::translate("show_device", "\320\246\321\226\320\275\320\260", nullptr));
        price->setText(QCoreApplication::translate("show_device", "\320\275\320\267\320\262", nullptr));
        label_3->setText(QCoreApplication::translate("show_device", "\320\240\321\226\320\272 \320\262\320\270\320\277\321\203\321\201\320\272\321\203", nullptr));
        year->setText(QCoreApplication::translate("show_device", "\320\275\320\267\320\262", nullptr));
        label_4->setText(QCoreApplication::translate("show_device", "\320\224\321\226\320\260\320\263\320\276\320\275\320\260\320\273\321\214", nullptr));
        display->setText(QCoreApplication::translate("show_device", "\320\275\320\267\320\262", nullptr));
        label_5->setText(QCoreApplication::translate("show_device", "\320\221\320\260\321\202\320\260\321\200\320\265\321\217", nullptr));
        battery->setText(QCoreApplication::translate("show_device", "\320\275\320\267\320\262", nullptr));
        pushButton->setText(QCoreApplication::translate("show_device", "\320\240\320\265\320\264\320\260\320\263\321\203\320\262\320\260\321\202\320\270", nullptr));
        save->setText(QCoreApplication::translate("show_device", "\320\227\320\261\320\265\321\200\320\265\320\263\321\202\320\270", nullptr));
        pushButton_3->setText(QCoreApplication::translate("show_device", "\320\222\320\270\320\264\320\260\320\273\320\270\321\202\320\270", nullptr));
        pushButton_2->setText(QCoreApplication::translate("show_device", "\320\227\320\260\320\272\321\200\320\270\321\202\320\270 \320\262\321\226\320\272\320\275\320\276", nullptr));
    } // retranslateUi

};

namespace Ui {
    class show_device: public Ui_show_device {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOW_DEVICE_H
