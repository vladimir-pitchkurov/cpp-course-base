#include <iostream>
#include <iomanip>
#include <math.h>
#include <vector>

using namespace std;

int main() {
    // Выведите все четные элементы массива.
    //Формат входных данных: В первой строке вводится количество элементов в массиве.
    // Во второй строке вводятся элементы массива.
    //Формат выходных данных: Выведите ответ на задачу.
    // Элементы выводятся в том же порядке, в котором они стояли в массиве.
    int n;
    cin >> n;
    vector<int> a;
    int tmp;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        if (tmp % 2 == 0) {
            a.push_back(tmp);
        }
    }
    for (auto x:a) {
        cout << x << " ";
    }
    return 0;
}