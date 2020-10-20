#include <iostream>
#include <cmath>
#include <windows.h>

using namespace std;

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    cout << "¬ведите кол-во чисел: ";
    int n, k;
    cin >> n;
    cout << '\n';

    for(int i = 0; i < n; i++){
        cout << "¬ведите число: ";
        cin >> k;
        cout << '\n';
        if(k >= 0) cout << "Ёто число неотрицательное!" << '\n';
        else {
            cout << "„исло с номером " << i+1 << " отрицательное!";
            break;
        }
    }

    return 0;
}
