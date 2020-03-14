#include <iostream>

using namespace std;

int main() {
//  Даны значения двух моментов времени, принадлежащих одним и тем же суткам: часы, минуты и секунды для каждого
//  из моментов времени. Известно, что второй момент времени наступил не раньше первого.
//  Определите, сколько секунд прошло между двумя моментами времени.

    int a, b, c, x, y, z;
    cin >> a >> b >> c >> x >> y >> z;
    int minute = 60, hour = 60 * 60;
    int first_time = (a * hour + b * minute + c);
    int second_time = (x * hour + y * minute + z);

    cout << (second_time - first_time) << endl;
    return 0;
}
