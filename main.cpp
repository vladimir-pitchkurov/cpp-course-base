#include <iostream>

using namespace std;

int main() {
//  Даны два целых числа. Выведите значение наибольшего из них. Если числа равны, выведите любое из них.

    int a, b;
    cin >> a >> b;
    if (a > b) {
        cout << a;
    } else {
        cout << b;
    }
    return 0;
}
