#include <iostream>

using namespace std;

bool exists(double sOuter, double sInner, double &result){
    result = sOuter - sInner;
    return (result > 0.);
}


int main()
{
    cout << "Insert the area of the outer circle: ";
    double a;
    cin >> a;
    cout << "\nInsert the area of the inner circle: ";
    double b;
    cin >> b;
    double result;
    if(exists(a, b, result)) cout << "\nSuccess! The area is " << result;
    else cout << "\nFailure...";
    return 0;
}
