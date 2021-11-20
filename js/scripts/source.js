function fastSort(mas){
    if (mas.length <= 1){
        return mas;
    }
    var newMas = []
    var bas = [];
    var l = [];
    var m = [];
    var r = [];
    while (newMas != 0){
        for (i = 0, len = mas.length; i < len; i ++){
            if (mas[i] < mas[0]){
                l.push(mas[i]);
            }
            if (mas[i] > mas[0]){
                r.push(mas[i]);
            }
            else{
                m.push(mas[i]);
            }
        }
    return bas.concat(fastSort(l), m, fastSort(r));
}

var mas =  [3, 5, 7, 5, 4, 2, 9, 5, 4, 1];
console.log(fastSort(mas));

