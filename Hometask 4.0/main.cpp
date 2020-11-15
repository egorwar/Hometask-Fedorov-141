#include <iostream>

using namespace std;

int fibonacci(int n){
    int a = 0, b = 1;
    if(n==1) return a;
    if(n==2) return b;
    for(int i = 2; i < n; i++){
        swap(a, b);
        b += a;
    }
    return b;
}


int main()
{
    int n;
    cout << "Insert an index: ";
    cin >> n;
    cout << "\nA fibonacci number with this index is " << fibonacci(n);
    return 0;
}
