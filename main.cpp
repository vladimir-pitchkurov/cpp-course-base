#include <iostream>

using namespace std;

int main() {
    // Определите сумму всех элементов последовательности, завершающейся числом 0.
    int i = 0, a;
    while (std::cin >> a && a && (i = i + a));
    std::cout << i;
    return 0;
}