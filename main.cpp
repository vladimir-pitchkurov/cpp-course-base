#include <iostream>

using namespace std;

int main() {
//  Электронные часы показывают время в формате h:mm:ss (от 0:00:00 до 23:59:59), то есть сначала
//  записывается количество часов, потом обязательно двузначное количество минут, затем обязательно двузначное
//  количество секунд. Количество минут и секунд при необходимости дополняются до двузначного числа нулями.

    int time;
    cin >> time;
    int minute = 60, hour = 60 * 60, day = 60 * 60 * 24;
    time = time % day;
    string splitter = ":";

    cout << time / hour << splitter << time % hour / minute / 10 << time % hour / minute % 10 << splitter
         << time % minute / 10 << time % minute % 10 << endl;
    return 0;
}
