#include <iostream>
#include <cmath>
#include <windows.h>

using namespace std;

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    cout << "������� ���������� �����: ";
    int n;
    cin >> n;
    if(n/10 + n%10 <= (n/10) * (n%10) && n > 0)
        for(int i = n/10 + n%10; i <= (n/10) * (n%10); cout << i << " ", i++);
    else cout << "��� ����� ������� ����������";
    return 0;
}
