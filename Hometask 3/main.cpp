#include <iostream>
#include <cmath>
#include <windows.h>

using namespace std;

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    cout << "¬ведите длину гипотенузы треугольника: ";
    double g;
    cin >> g;
    cout << "¬ведите угол треугольника в градусах: ";
    double a;
    cin >> a;
    a *= M_PI/180.0;

    double m = sin(a)*g;
    double n = cos(a)*g;

    cout << "ѕериметр треугольника равен: " << m + n + g << '\n';
    cout << "ѕлощадь треугольника равна: " << (m*n)/2.0;
    return 0;
}
