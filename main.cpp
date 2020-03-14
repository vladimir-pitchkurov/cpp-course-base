#include <iostream>

using namespace std;

int main() {
    // Последовательность Фибоначчи определяется так:
    //
    //F(0) = 0, F(1) = 1, …, F(n) = F(n−1) + F(n−2).
    //
    //По данному числу N определите N-е число Фибоначчи F(N).

    int counter = 0, n, current = 0, prev = 0, prev2 = 0;
    cin >> n;

    while (n >= counter) {
        if (n == counter) {
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
    cout << current;

    return 0;
}