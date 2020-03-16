#include <iostream>
#include <iomanip>
#include <math.h>
#include <vector>

using namespace std;

int main() {
    // Циклически сдвиньте элементы списка вправо (A[0] переходит на место A[1], A[1] на место A[2], ...,
    // последний элемент переходит на место A[0]).
    int n;
    int tmp;
    cin >> n;
    vector<int> a(n);

    for (int i = 1; i <= n; i++) {
        cin >> tmp;
        if (i == n) {
            a[0] = tmp;
            break;
        }
        a[i] = tmp;
    }
    for (auto x:a) {
        cout << x << " ";
    }

    return 0;
}