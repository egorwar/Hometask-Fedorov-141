#include <iostream>
#include <cmath>

using namespace std;

string compare(double a, double b){
    if(a<=0 || b <= 0) return "is incomparable (due to incorrect data) to";
    double k = a/4.;
    double d = sqrt(b/M_PI);
    if(k>d) return "is bigger than";
    else if (k==d) return "is equal to";
    else return "is lesser than";
}

int main()
{
    cout << "Insert the perimeter of a square and the area of a circle: ";
    double x, y;
    cin >> x >> y;
    cout << "The side of a square " << compare(x, y) << " the diameter of a circle.";
    return 0;
}
