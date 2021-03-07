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

// Лягушка, способная прыгать и вперёд, и назад, даст бесконечно много путей в точку Х, т.к.
// любой верный путь можно дополнить бесконечным числом комбинаций прыжков, начинающихся и кончающихся в одной и той же точке.

// Esli russkiy tekst sverhy sletel:
// Lyagushka, sposobnaya prigat' i vpered, i nazad, dast beskonechno mnogo putei v tochky X, t.k.
// lyboi vernyi put' mozhno dopolnit' beskonechnim chislom kombinatsiy prizhkov, nachinaiyshihsya i konchaiyshihsya v odnoi i toi zhe tochke.
