#include <iostream>
#include <iomanip>
#include <math.h>
#include <vector>

using namespace std;

int main() {
    // Выведите значение наименьшего нечетного элемента списка,
    // а если в списке нет нечетных элементов - выведите число 0.
    int n;
    int tmp;
    vector<int> a;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        if (tmp % 2 != 0) {
            a.push_back(tmp);
            if (tmp < a[0]) {
                a[0] = tmp;
            }
        }
    }
    if (a.size() == 0) {
        cout << 0;
    } else {
        cout << a[0];
    }
    return 0;
}