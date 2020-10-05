#include <iostream>
#include <cmath>
#include <windows.h>

using namespace std;

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    cout << "¬ведите три числа: ";
    double a, b, c;
    cin >> a >> b >> c;

    cout << "—реднее геометрическое чисел равно " << pow(a*b*c, 1.0/3);
    return 0;
}
