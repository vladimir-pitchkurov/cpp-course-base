#include <iostream>

using namespace std;

int main() {
    // Последовательность состоит из натуральных чисел и завершается числом 0.
    // Определите, какое количество элементов этой последовательности, равны ее наибольшему элементу.
    int max = 0, a, counter = 0;
    while (cin >> a && a) {
        (a == max) ? (counter++) : 0;
        (a > max) ? (max = a, counter = 1) : 0;
    }
    cout << counter;
    return 0;
}