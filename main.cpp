#include <iostream>

using namespace std;

int main() {
//  Улитка ползет по вертикальному шесту высотой H метров, поднимаясь за день на A метров,
//  а за ночь спускаясь на B метров. На какой день улитка доползет до вершины шеста?

    int h, a, b;
    cin >> h >> a >> b;
    int after_day = h - a;
    int speed = a - b;
    cout << ((after_day + speed - 1) / speed + 1) << endl;
    return 0;
}
