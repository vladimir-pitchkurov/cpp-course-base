#include <iostream>

using namespace std;

int main() {
    //Последовательность Фибоначчи определяется так:
    //
    //F(0) = 0, F(1) = 1, …, F(n) = F(n−1) + F(n−2).
    //
    //Дано натуральное число A. Определите, каким по счету числом Фибоначчи оно является,
    // то есть выведите такое число N, что F(N) = A. Если А не является числом Фибоначчи, выведите число -1.
    int counter = 0, n, current = 0, prev = 0, prev2 = 0;
    cin >> n;
    while (n >= current) {
        if (n == current) {
            break;
        }
        ++counter;
        if (counter == 1) {
            current = 1;
        } else if (counter == 2) {
            current = 1;
            prev = 1;
        } else {
            prev2 = prev;
            prev = current;
            current = prev + prev2;
        }
    }
    cout << ((n == current) ? counter : -1);
    return 0;
}