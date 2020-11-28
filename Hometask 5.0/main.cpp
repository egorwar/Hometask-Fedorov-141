#include <iostream>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int *a = new int[n];
    int *ind = new int[k];

    for(int i = 0; i < n; i++)
        cin >> a[i];
    for(int i = 0; i < k; i++){
        cin >> ind[i];
        a[ind[i]] = 0;
    }
    for(int i = 0; i < n; i++)
        cout << a[i] << " ";
    return 0;
}
