#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main() {
    // Процентная ставка по вкладу составляет P процентов годовых, которые прибавляются к сумме вклада в конце года.
    // Вклад составляет X рублей Y копеек. Определите размер вклада через год.
    //При решении этой задачи нельзя пользоваться условными инструкциями и циклами.

    double x, y, p;
    cin >> p >> x >> y;
    double sum = x * 100 + y + 0.00000001;
    p = 1 + p / 100;
    int result = (int) (sum * p);
    cout << result / 100 << " " << result % 100;
    return 0;
}