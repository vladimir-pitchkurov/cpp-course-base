#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main() {
    // Дана последовательность натуральных чисел x1, x2, ..., xn. Стандартным отклонением называется величина
    //
    // https://ucarecdn.com/a5272a3c-f857-4969-a054-0a362300c32d/
    //
    // где
    // https://ucarecdn.com/f6612807-4fb8-42fc-802e-5221860e8fa2/
    //
    //- среднее значение последовательности.
    // Определите стандартное отклонение для данной последовательности натуральных чисел, завершающейся числом 0.

    double x, sum = 0, s, pows = 0;
    int counter = 0;
    while (cin >> x && x) {
        pows = pows + x * x;
        sum = sum + x;
        counter++;
    }
    cout << setprecision(11) << fixed;
    cout << sqrt(
            (pows - (sum * sum / counter)) / (counter - 1)
    );
    return 0;
}