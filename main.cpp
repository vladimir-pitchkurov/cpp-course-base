#include <iostream>

using namespace std;

int main() {
//  Пирожок в столовой стоит A рублей и B копеек. Определите, сколько рублей и копеек нужно заплатить за N пирожков.

    int a, b, n;
    cin >> a >> b >> n;
    cout << (a * n + b * n / 100) << " " << (b * n) % 100 << endl;
    return 0;
}
