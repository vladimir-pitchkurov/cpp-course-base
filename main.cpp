#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main() {
    // Определите среднее значение всех элементов последовательности, завершающейся числом

    double x, sum = 0;
    int counter = 0;
    while (cin >> x && x) {
        counter++;
        sum = sum + x;
    }
    cout << setprecision(11) << fixed;
    cout << (sum / counter);
    return 0;
}