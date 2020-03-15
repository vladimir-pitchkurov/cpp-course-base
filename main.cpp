#include <iostream>
#include <iomanip>
#include <math.h>
#include <vector>

using namespace std;

int main() {
    // Дан массив чисел. Выведите все элементы массива, которые больше предыдущего элемента .
    int n;
    int tmp, x, y;
    vector<int> a;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        a.push_back(tmp);
    }
    for (int i = 1; i < a.size(); i++) {
        if ((a[i] > 0 && a[i - 1] > 0) || (a[i] < 0 && a[i - 1] < 0)) {
            x = a[i - 1];
            y = a[i];
            if (x > y) {
                x = x + y;
                y = x - y;
                x = x - y;
            }
            cout << x << " " << y;
            break;
        }
    }
    return 0;
}