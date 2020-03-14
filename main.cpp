#include <iostream>

using namespace std;

int main() {
// Шахматный слон ходит по диагонали.
// Даны две различные клетки шахматной доски, определите, может ли слон попасть с первой клетки на вторую одним ходом.

    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if ((a - c) * (a - c) == (b - d) * (b - d)) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}
