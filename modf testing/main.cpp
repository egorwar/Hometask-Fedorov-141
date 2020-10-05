#include <iostream>
#include <cmath>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    double a = 1.2345;
    double b;
    double c;
    c = modf(a, &b);
    cout << "Число: " << a << '\n'
         << "Целая часть: " << b << '\n'
         << "Дробная часть: " << c;
    return 0;
}
