#include <iostream>
#include <iomanip>
#include <math.h>
#include <vector>

using namespace std;

int main() {
    // Выведите значение наименьшего из всех положительных элементов в массиве.
    // Известно, что в массиве есть хотя бы один положительный элемент.
    int n;
    int tmp, min_unsign = 0;
    vector<int> a;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        if (tmp > 0) {
            a.push_back(tmp);
            if (tmp < a[0]) {
                a[0] = tmp;
            }
        }
    }

    cout << a[0];
    return 0;
}