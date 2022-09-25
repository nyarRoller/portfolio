#include <QJsonArray>
#include <QJsonObject>
#include <vector>
#include "sort.h"

QString min(QString str1, QString str2){
    if (str1.size() > str2.size()) return str2;
    else return str1;
}
int search_place(QJsonArray main_arr, QJsonObject object){
    bool suc = false;
    int return_i;
    for (int i = 0; i < main_arr.size(); i++){
        for (int j = 0; j < min(main_arr[i].toObject()["name"].toString(),object["name"].toString()).size(); j++){
            if (object["name"].toString().toStdU32String()[j] < main_arr[i].toObject()["name"].toString().toStdU32String()[j]){
                main_arr.insert(i,object);
                suc = true;
                return_i = i;
                break;
            }
            else if(object["name"].toString().toStdU32String()[j] > main_arr[i].toObject()["name"].toString().toStdU32String()[j]){
                break;
            }
            else{
                continue;
            }
        }
        if (suc){
            return return_i;
        }
    }
    return -1;
}

QString::size_type incorrect_searching(QString& source,
    QString& target) {
    if (source.size() > target.size()) {
        return incorrect_searching(target, source);
    }

    using TSizeType = typename QString::size_type;
    const TSizeType min_size = source.size(), max_size = target.size();
    std::vector<TSizeType> lev_dist(min_size + 1);

    for (TSizeType i = 0; i <= min_size; ++i) {
        lev_dist[i] = i;
    }

    for (TSizeType j = 1; j <= max_size; ++j) {
        TSizeType previous_diagonal = lev_dist[0], previous_diagonal_save;
        ++lev_dist[0];

        for (TSizeType i = 1; i <= min_size; ++i) {
            previous_diagonal_save = lev_dist[i];
            if (source[i - 1] == target[j - 1]) {
                lev_dist[i] = previous_diagonal;
            }
            else {
                lev_dist[i] = std::min(std::min(lev_dist[i - 1], lev_dist[i]), previous_diagonal) + 1;
            }
            previous_diagonal = previous_diagonal_save;
        }
    }

    return lev_dist[min_size];
}
bool isNumber(const std::string& str)
{
    for (char const &c : str) {
        if (std::isdigit(c) == 0) return false;
    }
    return true;
}
