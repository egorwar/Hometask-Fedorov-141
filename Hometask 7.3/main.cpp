#include <iostream>

using namespace std;

int res(int n){
    if(n < 0) return 0;
    if(n == 0) return 1;
    return res(n-3) + res(n-5);
}

int main()
{
    int n; cin >> n;
    cout << res(n);
    return 0;
}

// �������, ��������� ������� � �����, � �����, ���� ���������� ����� ����� � ����� �, �.�.
// ����� ������ ���� ����� ��������� ����������� ������ ���������� �������, ������������ � ����������� � ����� � ��� �� �����.

// Esli russkiy tekst sverhy sletel:
// Lyagushka, sposobnaya prigat' i vpered, i nazad, dast beskonechno mnogo putei v tochky X, t.k.
// lyboi vernyi put' mozhno dopolnit' beskonechnim chislom kombinatsiy prizhkov, nachinaiyshihsya i konchaiyshihsya v odnoi i toi zhe tochke.
