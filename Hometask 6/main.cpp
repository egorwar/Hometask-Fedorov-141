#include <iostream>
#include <cmath>
#include <windows.h>

using namespace std;

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    cout << "������� ���������� �����: ";
    double x, y;
    cin >> x >> y;
    cout << "������� ���������� ������ ���������� � � ������: ";
    double xo, yo, r;
    cin >> xo >> yo >> r;

    double p = sqrt(pow(x-xo, 2)+pow(y-yo, 2));

    if(p < r) cout << "����� ����� ������ ����������." << '\n' << "���������� �� ����� �� ����������: " << r-p;
    else if(p == r) cout << "����� ����� �� ����������." << '\n' << "���������� �� ����� �� ����������: " << 0;
    else cout << "����� ����� ��� ����������." << '\n' << "���������� �� ����� �� ����������: " << p-r;

    return 0;
}
