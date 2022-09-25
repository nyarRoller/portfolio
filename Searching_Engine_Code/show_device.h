#ifndef SHOW_DEVICE_H
#define SHOW_DEVICE_H

#include <QDialog>

namespace Ui {
class show_device;
}

class show_device : public QDialog
{
    Q_OBJECT
public:
    explicit show_device(QWidget *parent = nullptr);
    ~show_device();
    int id;
public slots:
    void get_name(int id_);

private slots:
    void on_pushButton_3_clicked();
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_save_clicked();

signals:
    void del_element();
private:
    Ui::show_device *ui;
    void reject();
};

#endif // SHOW_DEVICE_H
