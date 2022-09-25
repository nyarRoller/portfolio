#ifndef SORT_H
#define SORT_H
#include <QJsonArray>
#include <QJsonObject>

QString min(QString str1, QString str2);

int search_place(QJsonArray main_arr, QJsonObject object);

QString::size_type incorrect_searching(QString& source,
    QString& target);
bool isNumber(const std::string& str);

#endif // SORT_H
