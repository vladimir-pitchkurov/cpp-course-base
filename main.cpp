#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main() {
    // Дано положительное действительное число X. Выведите его дробную часть.

    double x;
    cin >> x;

    cout << (x - trunc(x));
    return 0;
}