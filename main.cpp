#include <iostream>

using namespace std;

int main() {
//Даны три целых числа. Найдите наибольшее из них (программа должна вывести ровно одно целое число).
// Под наибольшим в этой задаче понимается число, которое не меньше, чем любое другое.

    int a, b, c, max;
    cin >> a >> b >> c;
    max = a;
    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }
    cout << max;
    return 0;
}
