#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "add_devices.h"
#include "show_device.h"
#include <QJsonArray>
#include <QStringListModel>
#include <QDebug>
#include <QResource>
#include <cmath>
#include <QMessageBox>
#include <QPixmap>
#include "sort.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    win_show = new show_device;
    connect(this,
            &MainWindow::send_name,
            win_show,
            &show_device::get_name);

    connect(win_show,
            &show_device::del_element,
            this,
            &MainWindow::del_element);
    setWindowFlags(Qt::Dialog | Qt::MSWindowsFixedSizeDialogHint);//no scale


    //include resources
    QResource::registerResource("resource.rcc");

    //adding background
    QPixmap pix(":/img/bg.png");
    int w = ui->bg->width();
    int h = ui->bg->height();
    ui->bg->setPixmap(pix.scaled(w,h));

    //opening json file
    qDebug() << path;
    QFile file("data.json");
    if(!file.open(QIODevice::ReadOnly)) {
        qDebug() << "File open errors";
      }
    QByteArray jsonData = file.readAll();
    file.close();

    //creating temp array to save data
    QJsonDocument document = QJsonDocument::fromJson(jsonData);
    QJsonArray temp_array = document.array();
    //creating model
    model = new QStringListModel(this);
    QStringList list;

    //filling model
    for (int i = 0; i < temp_array.size(); i++){
       list.append(temp_array[i].toObject().value("name").toString());
       model->setStringList(list);
    }

    //adding model to list
    ui->gadget_list->setModel(model);

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    //open add device window
    add_devices window;
    window.setModal(true);
    window.exec();

    //update list
    QFile file("data.json");
    if(!file.open(QIODevice::ReadOnly)) {
        qDebug() << "File open error";
      }

    QByteArray jsonData = file.readAll();

    file.close();

    QJsonDocument document = QJsonDocument::fromJson(jsonData);
    QJsonArray temp_array = document.array();

    //adding gadgets to model
    model = new QStringListModel(this);
    QStringList list;
    for (int i = 0; i < temp_array.size(); i++){
       list.append(temp_array[i].toObject().value("name").toString());
       model->setStringList(list);
    }

    //adding model to list
    ui->gadget_list->setModel(model);
    sendBuf = false;



}


void MainWindow::on_gadget_list_indexesMoved(const QModelIndexList &indexes)
{

}


void MainWindow::on_gadget_list_clicked(const QModelIndex &index)
{


    //getting selected text
    QString itemText = index.data(Qt::DisplayRole).toString();
    if(not win_show->isVisible()){
        win_show->show();
    }
    //opening show device window
    if (not sendBuf) emit send_name(index.row());
    else {
        QFile file("data.json");
        QFile buf("buf.json");

        if(!file.open(QIODevice::ReadOnly)) {
            qDebug() << "File open error";
          }
        if(!buf.open(QIODevice::ReadOnly)) {
            qDebug() << "File open error";
          }
        QJsonDocument document = QJsonDocument::fromJson(file.readAll());
        QJsonDocument buf_doc = QJsonDocument::fromJson(buf.readAll());
        file.close();
        buf.close();

        //creating temp array to save data
        QJsonArray temp_array = document.array();
        QJsonArray buf_array = buf_doc.array();

        QJsonObject object = buf_array[index.row()].toObject();
        qDebug() << object;
        for (int i = 0; i < temp_array.size(); i++){
            if (temp_array[i].toObject() == object){
                emit send_name(i);
                break;
            }
        }


    }
}
void MainWindow::del_element(){
    //update list
    QFile file("data.json");
    if(!file.open(QIODevice::ReadOnly)) {
        qDebug() << "File open error";
      }
    QByteArray jsonData = file.readAll();

    file.close();

    QJsonDocument document = QJsonDocument::fromJson(jsonData);
    QJsonArray temp_array = document.array();

    //adding gadgets to model
    model = new QStringListModel(this);
    QStringList list;
    for (int i = 0; i < temp_array.size(); i++){
       list.append(temp_array[i].toObject().value("name").toString());
       model->setStringList(list);
    }

    //adding model to list
    ui->gadget_list->setModel(model);
    sendBuf = false;
}


void MainWindow::on_pushButton_2_clicked()
{
    //update list
    QResource::registerResource("resource.rcc");
    QFile file("data.json");
    if(!file.open(QIODevice::ReadOnly)) {
        qDebug() << "File open error";
      }
    QByteArray jsonData = file.readAll();
    file.close();
    QResource::registerResource("1.rcc");

    QFile buf("buf.json");
    if(!buf.open(QIODevice::ReadWrite)) {
        qDebug() << "File open error";
      }
    buf.resize(0);
    QJsonDocument bufDoc;
    QJsonArray bufArray;
    QJsonDocument document = QJsonDocument::fromJson(jsonData);
    QJsonArray temp_array = document.array();
    double price[2] = {0, pow(10,9)};
    double year[2] = {0, pow(10,9)};
    double battery[2] = {0, pow(10,9)};
    double display[2] = {0, pow(10,9)};

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
    else gType = 3;


    if (ui->lineEdit_12->text().toStdString() != ""){
        if (isNumber(ui->lineEdit_12->text().toStdString())){
            price[0] = ui->lineEdit_12->text().toDouble();
        }
        else QMessageBox::about(this, "Помилка","Ви ввели некоректні дані для пошуку");
    }
    if (ui->lineEdit_13->text().toStdString() != ""){
        if (isNumber(ui->lineEdit_13->text().toStdString())){
            price[1] = ui->lineEdit_13->text().toDouble();
        }
        else QMessageBox::about(this, "Помилка","Ви ввели некоректні дані для пошуку");
    }

    if (ui->lineEdit_11->text().toStdString() != ""){
        if (isNumber(ui->lineEdit_11->text().toStdString())){
            year[0] = ui->lineEdit_11->text().toDouble();
        }
        else QMessageBox::about(this, "Помилка","Ви ввели некоректні дані для пошуку");

    }
    if (ui->lineEdit_10->text().toStdString() != ""){
        if (isNumber(ui->lineEdit_10->text().toStdString())){
            year[1] = ui->lineEdit_10->text().toDouble();
        }
        else QMessageBox::about(this, "Помилка","Ви ввели некоректні дані для пошуку");
    }

    if (ui->lineEdit_14->text().toStdString() != ""){
        if (isNumber(ui->lineEdit_14->text().toStdString())){
            battery[0] = ui->lineEdit_14->text().toDouble();
        }
        else QMessageBox::about(this, "Помилка","Ви ввели некоректні дані для пошуку");
    }
    if (ui->lineEdit_15->text().toStdString() != ""){
        if (isNumber(ui->lineEdit_15->text().toStdString())){
            battery[1] = ui->lineEdit_15->text().toDouble();
        }
        else QMessageBox::about(this, "Помилка","Ви ввели некоректні дані для пошуку");

    }

    if (ui->lineEdit_8->text().toStdString() != ""){
        if (isNumber(ui->lineEdit_8->text().toStdString())){
            display[0] = ui->lineEdit_8->text().toDouble();
        }
        else QMessageBox::about(this, "Помилка","Ви ввели некоректні дані для пошуку");
    }
    if (ui->lineEdit_9->text().toStdString() != ""){
        if (isNumber(ui->lineEdit_9->text().toStdString())){
            display[1] = ui->lineEdit_9->text().toDouble();
        }
        else QMessageBox::about(this, "Помилка","Ви ввели некоректні дані для пошуку");

    }
    //adding gadgets to model
    model = new QStringListModel(this);
    QStringList list;
    bool key;
    for (int i = 0; i < temp_array.size(); i++){
       key = true;

       if (temp_array[i].toObject().value("price").toDouble() <  price[0]) key = false;
       if (temp_array[i].toObject().value("price").toDouble() > price[1]) key = false;

       if (temp_array[i].toObject().value("year").toDouble() <  year[0]) key = false;
       if (temp_array[i].toObject().value("year").toDouble() > year[1]) key = false;

       if (temp_array[i].toObject().value("battery").toDouble() <  battery[0]) key = false;
       if (temp_array[i].toObject().value("battery").toDouble() > battery[1]) key = false;

       if (temp_array[i].toObject().value("display").toDouble() <  display[0]) key = false;
       if (temp_array[i].toObject().value("display").toDouble() > display[1]) key = false;

       if (temp_array[i].toObject().value("gType").toInteger() != gType && gType != 3) key = false;

       QString name = temp_array[i].toObject().value("name").toString().toLower();
       QString subName = ui->lineEdit->text().toLower();
       if (incorrect_searching(name,subName) > 3 && ui->lineEdit->text() != "") key = false;
       if (key){
        list.append(temp_array[i].toObject().value("name").toString());
        model->setStringList(list);
        bufArray.append(temp_array[i].toObject());
       }
    }
    bufDoc.setArray(bufArray);
    buf.write(bufDoc.toJson());
    buf.close();
    sendBuf = true;
    //adding model to list
    ui->gadget_list->setModel(model);
}

