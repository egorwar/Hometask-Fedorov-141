#include <iostream>
#include <cmath>
#include <windows.h>

using namespace std;

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    cout << "������� ����� ������ 100: ";
    int n;
    cin >> n;
    if(n <= 100){
        for(int i = n; i <= 100; i++)
            if(i%n==0) cout << i << " ";
    }
    else cout << "��� ����� ������� ����������";
    return 0;
}
