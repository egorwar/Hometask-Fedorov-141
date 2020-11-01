#include <iostream>

using namespace std;

bool ifTriangle(double a, double b, double c){
    return (a>0 && b>0 && c>0)&(a<b+c && b<a+c && c<a+b);
}

int main()
{
    cout << "Insert three numbers: ";
    double x, y, z;
    cin >> x >> y >> z;
    cout << "Sides with these lengths " << (ifTriangle(x, y, z) ? "can" : "cannot") << " form a triangle.";
    return 0;
}
