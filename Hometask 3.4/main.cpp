#include <iostream>

using namespace std;

double grav(double a, double b, double d){
    return (6.67*a*b)/(d*d);
}

string compare(double a, double b, double c){
    double s = min(min(a, b), c);
    if(s == a){
            cout << b << " and " << c;
            return " (second-third and third-first).";
    }
    if(s == b){
            cout << a << " and " << c;
            return " (first-second and third-first).";
    }
    if(s == c){
            cout << a << " and " << b;
            return " (first-second and second-third).";
    }
}

int main()
{
    cout << "Insert the masses of three objects: ";
    double m1, m2, m3;
    cin >> m1 >> m2 >> m3;
    cout << "Now insert the distances between them in that order: (1-2, 2-3, 3-1): ";
    double d12, d23, d31;
    cin >> d12 >> d23 >> d31;

    if(m1<=0 || m2 <=0 || m3<=0 || d12 <=0 || d23 <=0 || d31<=0) cout << "Incorrect entry!";
    else{
        cout << "The two biggest gravity forces are: ";
        cout << compare(grav(m1, m2, d12), grav(m2, m3, d23), grav(m3, m1, d31));
    }
    return 0;
}
