#include <iostream>

using namespace std;

int main() {
// По данному целому числу N распечатайте все квадраты натуральных чисел, не превосходящие N, в порядке возрастания.
    int n, counter = 1, pow;
    cin >> n;
    while (true) {
        pow = counter * counter;
        if (pow <= n) {
            cout << pow << " ";
        } else {
            break;
        }
        counter++;
    }
    return 0;
}