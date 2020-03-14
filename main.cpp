#include <iostream>

using namespace std;

int main() {
//По данному числу N распечатайте все целые степени двойки, не превосходящие N, в порядке возрастания.
    int n, counter = 1;
    cin >> n;
    while (true) {
        if (n == counter) {
            cout << "YES";
            break;
        }
        if (counter > n) {
            cout << "NO";
            break;
        }
        counter *= 2;
    }
    return 0;
}