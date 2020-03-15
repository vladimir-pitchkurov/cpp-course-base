#include <iostream>
#include <iomanip>
#include <math.h>
#include <vector>

using namespace std;

int main() {
    // Выведите все элементы массива с четными индексами (то есть A[0], A[2], A[4], ...).
    int n;
    cin >> n;
    vector<int> a;
    int tmp;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        if (i % 2 == 0) {
            a.push_back(tmp);
        }
    }
    for (auto x:a) {
        cout << x << " ";
    }
    return 0;
}