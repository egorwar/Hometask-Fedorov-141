#include <iostream>
#include <cmath>
#include <windows.h>

using namespace std;

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    cout << "������� ����� ���������� ������������: ";
    double g;
    cin >> g;
    cout << "������� ���� ������������ � ��������: ";
    double a;
    cin >> a;
    a *= M_PI/180.0;

    double m = sin(a)*g;
    double n = cos(a)*g;

    cout << "�������� ������������ �����: " << m + n + g << '\n';
    cout << "������� ������������ �����: " << (m*n)/2.0;
    return 0;
}
