#include <iostream>
#include <cmath>
#include <windows.h>

using namespace std;

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    int k, sq;
    double sum = 0.0;
    cout << "������� �����: ";
    cout << '\n';
    cin >> sq;
    sum += sq;

    for(int i = 2; ; i++){
        cout << "������� �����: ";
        cin >> k;
        cout << '\n';
        sum += k;
        if(k == sq*sq){
            cout << "��. �����.: " << sum / i *1.0;
            break;
        }

    }

    return 0;
}
