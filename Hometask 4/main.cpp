#include <iostream>
#include <cmath>
#include <windows.h>

using namespace std;

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    cout << "������� �������� ��������: ";
    int n;
    cin >> n;
    cout << "������� ���-�� �������� � ���������: ";
    int m;
    cin >> m;

    cout << "��������� ���� ����� ����������, ������ " << m*ceil(log(n)/log(2)) << " ���.";
    return 0;
}
