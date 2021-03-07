#include <iostream>
#include <vector>
using namespace std;


unsigned int trib(unsigned int n){
    if(n==0) return n;
    if(n<=3) return 1;
    return trib(n-1)+trib(n-2)+trib(n-3);
}

int main()
{
    unsigned int n; cin >> n;
    cout << trib(n);
    return 0;
}
