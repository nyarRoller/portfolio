#include "show_device.h"
#include "ui_show_device.h"
#include <QJsonArray>
#include <QJsonDocument>
#include <QFile>
#include <QJsonObject>
#include "gadget.h"
#include "sort.h"
#include "QResource"
show_device::show_device(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::show_device)
{
    ui->setupUi(this);
    //qDebug() << name;
    QResource::registerResource("resource.rcc");
    QPixmap pix(":/img/bg.png");
    int w = ui->bg->width();
    int h = ui->bg->height();

    ui->bg->setPixmap(pix.scaled(w,h));
    ui->nameEdit->hide();
    ui->batteryEdit->hide();
    ui->displayEdit->hide();
    ui->priceEdit->hide();
    ui->typeEdit->hide();
    ui->yearEdit->hide();
    ui->save->hide();
}



show_device::~show_device()
{
    delete ui;
}

void show_device::reject(){
    this->hide();

}

void show_device::get_name(int id_)
{
    QString gType;
    id = id_;
    qDebug() << id;

     //update list
    QResource::registerResource("resource.rcc");
    QFile file("data.json");
    if(!file.open(QIODevice::ReadOnly)) {
        qDebug() << "File open error";
      }

    QByteArray jsonData = file.readAll();

    file.close();
    QJsonDocument document = QJsonDocument::fromJson(jsonData);
    QJsonArray temp_array = document.array();
    QJsonObject info = temp_array[id_].toObject();

    if (info["gType"] == 0){
        gType = "Ноутбук";
    }
    else if (info["gType"] == 1){
        gType = "Телевізор";
    }
    else if (info["gType"] == 2){
        gType = "Телефон";
    }

    ui->lname->setText(info["name"].toString());
    ui->battery->setText(info["battery"].toVariant().toString());
    ui->price->setText(info["price"].toVariant().toString());
    ui->year->setText(info["year"].toVariant().toString());
    ui->display->setText(info["display"].toVariant().toString());
    ui->type->setText(gType);
}

void show_device::on_pushButton_3_clicked()
{
    QResource::registerResource("resource.rcc");
    QFile file("data.json");
    if(!file.open(QIODevice::ReadWrite)) {
        qDebug() << "File open error";
      }

    QByteArray jsonData = file.readAll();

    QJsonDocument document = QJsonDocument::fromJson(jsonData);
    QJsonArray temp_array = document.array();
    temp_array.removeAt(id);

    document.setArray(temp_array);

    //clearing previous data
    file.resize(0);

    //writing new data
    file.write(document.toJson());
    file.close();
    emit del_element();
    this->hide();
}


void show_device::on_pushButton_2_clicked()
{
    this->hide();
}


void show_device::on_pushButton_clicked()
{
    QResource::registerResource("resource.rcc");
    QFile file("data.json");

    if(!file.open(QIODevice::ReadWrite)) {
        qDebug() << "File open error";
      }

    QByteArray jsonData = file.readAll();
    file.close();
    QJsonDocument document = QJsonDocument::fromJson(jsonData);
    QJsonArray temp_array = document.array();
    QJsonObject info = temp_array[id].toObject();

    ui->lname->hide();
    ui->battery->hide();
    ui->display->hide();
    ui->price->hide();
    ui->year->hide();
    ui->type->hide();
    ui->pushButton->hide();

    ui->nameEdit->show();
    ui->batteryEdit->show();
    ui->displayEdit->show();
    ui->priceEdit->show();
    ui->typeEdit->show();
    ui->yearEdit->show();
    ui->save->show();

    ui->nameEdit->setText(info["name"].toString());
    ui->batteryEdit->setText(info["battery"].toVariant().toString());
    ui->displayEdit->setText(info["display"].toVariant().toString());
    ui->priceEdit->setText(info["price"].toVariant().toString());
    ui->typeEdit->show();
    ui->yearEdit->setText(info["year"].toVariant().toString());

    if (info["gType"] == 0){
        ui->laptop->setChecked(true);
    }
    else if (info["gType"] == 1){
        ui->tv->setChecked(true);
    }
    else if (info["gType"] == 2){
        ui->phone->setChecked(true);

    }
}



void show_device::on_save_clicked()
{
    //checking gadget type
    int gType;
    if (ui->laptop->isChecked()){
        gType = 0;
    }
    else if (ui->tv->isChecked()){
        gType = 1;
    }
    else if (ui->phone->isChecked()){
        gType = 2;
    }
    //creating and filling object type gadget
    Gadget Gtemp = {ui->nameEdit->text().toStdString(),gType, ui->priceEdit->text().toDouble(), ui->yearEdit->text().toInt(), ui->displayEdit->text().toDouble(), ui->batteryEdit->text().toDouble()}; // filling struct

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
      }

    QByteArray jsonData = file.readAll();

    QJsonDocument document = QJsonDocument::fromJson(jsonData);
    QJsonArray temp_array = document.array();

    //adding new json object in array
    temp_array.removeAt(id);
    int iterator = search_place(temp_array, g);

    if (iterator == -1) temp_array.append(g);

    else temp_array.insert(iterator, g);
    QJsonObject info;

    if (iterator != -1){
        info = temp_array[iterator].toObject();
    } else info = temp_array[temp_array.size() - 1].toObject();

    document.setArray(temp_array);

    //clearing previous data
    file.resize(0);

    //writing new data
    file.write(document.toJson());
    file.close();
    qDebug() << "Write to file";
    ui->lname->show();
    ui->battery->show();
    ui->display->show();
    ui->price->show();
    ui->year->show();
    ui->type->show();
    ui->pushButton->show();


    ui->nameEdit->hide();
    ui->batteryEdit->hide();
    ui->displayEdit->hide();
    ui->priceEdit->hide();
    ui->typeEdit->hide();
    ui->yearEdit->hide();
    ui->save->hide();
    QString gType_s;


    if (info["gType"] == 0){
        gType_s = "Ноутбук";
    }
    else if (info["gType"] == 1){
        gType_s = "Телевізор";
    }
    else if (info["gType"] == 2){
        gType_s = "Телефон";
    }

    ui->lname->setText(info["name"].toString());
    ui->battery->setText(info["battery"].toVariant().toString());
    ui->price->setText(info["price"].toVariant().toString());
    ui->year->setText(info["year"].toVariant().toString());
    ui->display->setText(info["display"].toVariant().toString());
    ui->type->setText(gType_s);
    emit del_element();

}

