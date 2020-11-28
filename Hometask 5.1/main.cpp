#include <iostream>

using namespace std;

int main()
{
    cout << "Insert the amount of elements: ";
    int n;
    cin >> n;
    int *a = new int[n];
    cout << "\nNow insert the elements: ";
    for(int i = 0; i < n; i++)
        cin >> a[i];
    if(n%2==0) swap(a[n/2-1], a[n/2]);
    else a[n/2]*=2;
    cout << "\nHere is the resulting array: ";
    for(int i = 0; i < n; i++)
        cout << a[i] << " ";
    return 0;
}
