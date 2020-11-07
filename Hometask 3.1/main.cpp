#include <iostream>

using namespace std;

void mtp(double x, double y, double &z){
    z = x*y;
}


int main()
{
    cout << "Insert two numbers: ";
    double a, b, x;
    cin >> a >> b;
    mtp(a, b, x);
    cout << "The product is " << x;
    return 0;
}
