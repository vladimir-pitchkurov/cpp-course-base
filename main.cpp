#include <iostream>
#include <iomanip>
#include <math.h>
#include <vector>

using namespace std;

int main() {
    // Дан массив чисел. Посчитайте, сколько в нем пар элементов, равных друг другу.
    // Считается, что любые два элемента, равные друг другу образуют одну пару, которую необходимо посчитать.
    int n, count = 0;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] == a[j]) {
                count++;
            }
        }
    }
    cout << count << " ";

    return 0;
}