#include <iostream>

using namespace std;

int main() {
// Дано целое число, не меньшее 2. Выведите его наименьший натуральный делитель, отличный от 1.
    int n, counter = 2;
    cin >> n;
    while (true) {
        if (n % counter == 0) {
            cout << counter;
            break;
        }
        counter++;
    }
    return 0;
}