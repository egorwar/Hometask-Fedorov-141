#include <iostream>
#include <cmath>
#include <windows.h>

using namespace std;

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    cout << "Введите длины трёх сторон треугольника: ";
    double a, b, c;
    cin >> a >> b >> c;
    double a_ = (b*b+c*c-a*a)/(2*b*c);
    double b_ = (a*a+c*c-b*b)/(2*a*c);
    double c_ = (a*a+b*b-c*c)/(2*a*b);

    if((a+b>c)&&(a+c>b)&&(b+c>a)&&(a>0)&&(b>0)&&(c>0)){
        cout << "Периметр треугольника равен: " << a + b + c << '\n' << "Треугольник:" << '\n';

        if((a==b)&&(a==c)&&(b==c))
            cout << "- равносторонний" << '\n';
        else if((a==b)||(a==c)||(b==c))
            cout << "- равнобедренный" << '\n';

        if((a*a==b*b+c*c)||(b*b==a*a+c*c)||(c*c==a*a+b*b)) cout << "- прямоугольный";
        else if ((a_ < 0)||(b_ < 0)||(c_ < 0)) cout << "- тупоугольный";
        else cout << "- остроугольный";
    }
    else cout << "Треугольника с заданными сторонами не существует.";
    return 0;
}
