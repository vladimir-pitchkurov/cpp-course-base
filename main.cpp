#include <iostream>
#include <iomanip>
#include <math.h>
#include <vector>

using namespace std;

int main() {
    // Дан массив. Выведите те его элементы, которые встречаются в массиве только один раз.
    // Элементы нужно выводить в том порядке, в котором они встречаются в списке.
    int n = 16;
    vector<int> a(n);
    int yes = 0;

    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 1; i < n && yes == 0; i += 2) {
        for (int j = 1; j < n; j += 2) {
            if (
                    i != j
                    && (
                            a[i] == a[j]
                            || a[i - 1] == a[j - 1]
                            || (a[i] - a[j]) * (a[i] - a[j]) == (a[i - 1] - a[j - 1]) * (a[i - 1] - a[j - 1])
                    )
                    ) {
                yes = 1;
                break;
            }
        }
    }
    cout << ((yes) ? "YES" : "NO");
    return 0;
}