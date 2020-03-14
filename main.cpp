#include <iostream>

using namespace std;

int main() {
// Даны два целых числа.
// Программа должна вывести
// единицу, если первое число больше второго,
// двойку, если второе больше первого, или
// ноль, если они равны.

    int a, b;
    cin >> a >> b;
    if (a > b) {
        cout << 1;
    } else if (b > a) {
        cout << 2;
    } else {
        cout << 0;
    }
    return 0;
}
