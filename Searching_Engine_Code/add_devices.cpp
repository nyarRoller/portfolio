#include "add_devices.h"
#include "ui_add_devices.h"
#include <QJsonArray>
#include <QJsonObject>
#include <iostream>
#include "gadget.h"
#include <fstream>
#include <QResource>
#include <QDir>
#include "sort.h"
add_devices::add_devices(QWidget *parent):
    QDialog(parent),
    ui(new Ui::add_devices)
{
    ui->setupUi(this);
    QPixmap pix(":/img/bg.png");
    int w = ui->bg->width();
    int h = ui->bg->height();
    ui->bg->setPixmap(pix.scaled(w,h));
}

add_devices::~add_devices()
{
    delete ui;
}

void add_devices::on_pushButton_2_clicked()
{
    this->close();
}


void add_devices::on_pushButton_clicked()
{
  //connecting resources

    //checking gadget type
    int gType;
    if (ui->radioButton->isChecked()){
        gType = 2;
    }
    else if (ui->radioButton_2->isChecked()){
        gType = 0;
    }
    else if (ui->radioButton_3->isChecked()){
        gType = 1;
    }

    //creating and filling object type gadget
    Gadget Gtemp = {ui->lineEdit->text().toStdString(),gType, ui->lineEdit_2->text().toDouble(), ui->lineEdit_3->text().toInt(), ui->lineEdit_4->text().toDouble(), ui->lineEdit_5->text().toDouble()}; // filling struct

    //add items to json object
    QJsonObject g;
    g.insert("name", Gtemp.name.c_str());
    g.insert("gType", Gtemp.gType);
    g.insert("price", Gtemp.price);
    g.insert("year", Gtemp.year);
    g.insert("display", Gtemp.display);
    g.insert("battery", Gtemp.battery);


    //opening json file
    QResource::registerResource("resource.rcc");
    QFile file("data.json");
    if(!file.open(QIODevice::ReadWrite)) {
        qDebug() << "File open error";
      } else {
        //reading json object
        QByteArray jsonData = file.readAll();
        QJsonDocument document = QJsonDocument::fromJson(jsonData);
        QJsonArray temp_array = document.array();

        //adding new json object in array

        int iterator = search_place(temp_array, g);

        if (iterator == -1) temp_array.append(g);

        else temp_array.insert(iterator, g);


       // sort(temp_array);

        document.setArray(temp_array);

        //clearing previous data
        file.resize(0);

        //writing new data
        file.write(document.toJson());
        file.close();
      }


    this ->close();
}

