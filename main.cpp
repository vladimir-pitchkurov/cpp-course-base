#include <iostream>

using namespace std;

int main() {
// Дано три числа. Упорядочите их в порядке неубывания.

    int a, b, c;
    cin >> a >> b >> c;

    if (b < a) {
        b = b + a;
        a = b - a;
        b = b - a;
    }
    if (c < b) {
        c = c + b;
        b = c - b;
        c = c - b;
    }
    if (b < a) {
        b = b + a;
        a = b - a;
        b = b - a;
    }
    if (c < b) {
        c = c + b;
        b = c - b;
        c = c - b;
    }

    cout << a << " " << b << " " << c;
    return 0;
}