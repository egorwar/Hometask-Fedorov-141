#include <iostream>

using namespace std;

float mtp(double x, double y){
    return x*y;
}


int main()
{
    cout << "Insert two numbers: ";
    double a, b;
    cin >> a >> b;
    cout << "The product is " << mtp(a, b);
    return 0;
}
