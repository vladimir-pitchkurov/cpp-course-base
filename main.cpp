#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main() {
    // Даны длины сторон треугольника. Вычислите площадь треугольника.
    //Формат входных данных
    //Вводятся три положительных числа.
    //Формат выходных данных
    //Выведите ответ на задачу.

    double x, y, z;
    cin >> x >> y >> z;
    double p = (x + y + z) / 2;
    cout << sqrt(p * (p - x) * (p - y) * (p - z));
    return 0;
}