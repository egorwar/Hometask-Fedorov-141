#include <iostream>
#include <cmath>
#include <windows.h>

using namespace std;

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    cout << "������� ���-�� �����: ";
    int n, k;
    cin >> n;
    cout << '\n';

    for(int i = 0; i < n; i++){
        cout << "������� �����: ";
        cin >> k;
        cout << '\n';
        if(k >= 0) cout << "��� ����� ���������������!" << '\n';
        else {
            cout << "����� � ������� " << i+1 << " �������������!";
            break;
        }
    }

    return 0;
}
