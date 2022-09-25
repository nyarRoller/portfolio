#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStringListModel>
#include "show_device.h"
#include <QResource>
#include <QStandardPaths>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
    QStringListModel *model;

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    bool sendBuf = false;

private slots:

    void on_pushButton_clicked();

    void on_gadget_list_indexesMoved(const QModelIndexList &indexes);

    void on_gadget_list_clicked(const QModelIndex &index);
    void on_pushButton_2_clicked();
signals:
    void send_name(int);

public slots:
    void del_element();

private:
    Ui::MainWindow *ui;
    show_device *win_show;
    QString path  = QStandardPaths::writableLocation(QStandardPaths::StandardLocation());


};
#endif // MAINWINDOW_H
