#ifndef ADD_DEVICES_H
#define ADD_DEVICES_H

#include <QDialog>
#include <QJsonDocument>
#include <QJsonObject>
#include <QFile>
#include <QJsonArray>
#include <QJsonParseError>
#include <QStandardItem>
namespace Ui {
class add_devices;
}

class add_devices : public QDialog
{
    Q_OBJECT

public:
    explicit add_devices(QWidget *parent = nullptr);
    ~add_devices();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::add_devices *ui;
};

#endif // ADD_DEVICES_H
