#include <iostream>
#include <iomanip>
#include <math.h>
#include <vector>

using namespace std;

int main() {
    // Дан двумерный массив и два числа: i и j. Поменяйте в массиве столбцы с номерами i и j
    //Формат входных данных: Программа получает на вход размеры массива n и m, не превосходящие 100,
    // затем элементы массива, затем числа i и j.
    int m, n, first, second;
    cin >> m >> n;
    int a[100][100];

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    cin >> first >> second;
    for (int i = 0; i < m; i++) {
        int tmp = a[i][first];
        a[i][first] = a[i][second];
        a[i][second] = tmp;
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}