#include <iostream>

using namespace std;

int main() {
    //Последовательность состоит из натуральных чисел и завершается числом 0.
    // Определите значение наибольшего элемента последовательности.
    int max = 0, a;
    while (cin >> a && a) {
        (a > max) ? (max = a) : 0;
    }
    cout << max;
    return 0;
}