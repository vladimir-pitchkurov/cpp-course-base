#include <iostream>
#include <iomanip>
#include <math.h>
#include <vector>

using namespace std;

int main() {
    // Дан массив. Выведите те его элементы, которые встречаются в массиве только один раз.
    // Элементы нужно выводить в том порядке, в котором они встречаются в списке.
    int n, count = 0;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n; i++) {
        count = 0;
        for (int j = 0; j < n; j++) {
            if (i != j && a[i] == a[j]) {
                count++;
            }
        }
        if (count == 0) {
            cout << a[i] << " ";
        }
    }

    return 0;
}