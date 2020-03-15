#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main() {
    // Дано положительное действительное число X. Выведите его первую цифру после десятичной точки.

    double x;
    cin >> x;
    cout << ((int) trunc(x * 10) % 10);
    return 0;
}