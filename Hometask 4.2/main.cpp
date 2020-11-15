#include <iostream>
#include <cmath>

using namespace std;

void printFunc(int &index, double &param){
    cout  << '\n' << index << '\t' << param;
}

void myFunc(int n){
    double a = 1., b = 0.5;
    for(int i = 3; i <= n; i++){
        swap(a, b);
        b = sin(b) + a/2.;
        printFunc(i, b);
    }
}

int main()
{
    cout << "Enter an index: ";
    int n;
    cin >> n;
    if(n <= 0) cout << "\nIncorrect entry!";
    else{
        cout << "\nx\tf(x)";
        if(n >= 1) cout << "\n1\t1";
        if(n >= 2) cout << "\n2\t0.5";
        myFunc(n);
    }
    return 0;
}
