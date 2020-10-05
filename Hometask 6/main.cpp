#include <iostream>
#include <cmath>
#include <windows.h>

using namespace std;

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    cout << "Введите координаты точки: ";
    double x, y;
    cin >> x >> y;
    cout << "Введите координаты центра окружности и её радиус: ";
    double xo, yo, r;
    cin >> xo >> yo >> r;

    double p = sqrt(pow(x-xo, 2)+pow(y-yo, 2));

    if(p < r) cout << "Точка лежит внутри окружности." << '\n' << "Расстояние от точки до окружности: " << r-p;
    else if(p == r) cout << "Точка лежит на окружности." << '\n' << "Расстояние от точки до окружности: " << 0;
    else cout << "Точка лежит вне окружности." << '\n' << "Расстояние от точки до окружности: " << p-r;

    return 0;
}
