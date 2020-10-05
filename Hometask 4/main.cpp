#include <iostream>
#include <cmath>
#include <windows.h>

using namespace std;

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    cout << "Введите мощность алфавита: ";
    int n;
    cin >> n;
    cout << "Введите кол-во символов в сообщении: ";
    int m;
    cin >> m;

    cout << "Сообщение несёт объём информации, равный " << m*ceil(log(n)/log(2)) << " бит.";
    return 0;
}
