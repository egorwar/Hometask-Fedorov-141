#include <iostream>
#include <cmath>

using namespace std;

double myFunc(int n, double x){
    double sum = 0., k = 1.;
    int fact = 1;
    for(int i = 2; i <= n; i++) fact *= i;
    for(int i = 1; i <= n; i++){
        k *= (((i%2==0)?1.:-1.)*x*x)/(fact*1.);
        sum += k;
    }
    return sum;
}

int main()
{
    cout << "Enter n: ";
    int n;
    cin >> n;
    cout << "\nEnter x: ";
    double x;
    cin >> x;
    if(n <= 0) cout << "\nIncorrect entry!";
    else cout << "\nFor n = " << n << " and x = " << x << " summ is " << myFunc(n, x);
    return 0;
}
