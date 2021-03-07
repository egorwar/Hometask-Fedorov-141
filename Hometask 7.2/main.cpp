#include <iostream>

using namespace std;

int mult(int *arr, int n){
    if(n==0) return 1;
    return arr[n-1] * mult(arr, n-1);
}

int main()
{
    int n; cin >> n;
    int* arr = new int[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    cout << endl;
    cout << mult(arr, n);
    delete [] arr;
    return 0;
}
