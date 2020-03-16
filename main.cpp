#include <iostream>
#include <iomanip>
#include <math.h>
#include <vector>

using namespace std;

int main() {
    // Найдите индексы первого вхождения максимального элемента.
    int m, n;
    cin >> m >> n;

    int max[3];
    int a[100][100];

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
            if (i == 0 && j == 0) {
                max[0] = a[i][j];
                max[1] = i;
                max[2] = j;
            } else if (a[i][j] > max[0]) {
                max[0] = a[i][j];
                max[1] = i;
                max[2] = j;
            }
        }
    }

    cout << max[1] << " " << max[2];
    return 0;
}