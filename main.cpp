#include <iostream>

using namespace std;

int main() {
//   Дано целое трехзначное число. Найдите сумму его цифр.

    int n;
    cin >> n;
    cout << (n / 100 + n / 10 % 10 + n % 10) << endl;
    return 0;
}
