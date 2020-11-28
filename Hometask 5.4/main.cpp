#include <iostream>

using namespace std;

int main()
{
    cout << "Insert the amount of skis: ";
    long int n; cin >> n;
    cout << "Insert the required shared length of a pair: ";
    long int k; cin >> k;
    cout << "Insert the length of each ski: ";
    long int *a = new long int[n];
    for(long int i = 0; i < n; i++){
        cin >> a[i];
    }

    for(long int i = 0; i < n-1; i++)
        for(long int j = 0; j < n-i-1; j++)
            if(a[j]>a[j+1]) swap(a[j], a[j+1]);

    long int counter = 0;

    for(long int i = n-1; i >= 0; i--){
        if(a[i]<=0) continue;
        for(long int j = 0; j < i; j++){
            if(a[j] <= 0) continue;
            if(a[j] > k-a[i]) break;
            if(a[j] == k-a[i]){
                counter++;
                a[j] = a[i] = -1;
                break;
            }
        }
    }

    cout << "The amount of pairs is " << counter;
    return 0;
}
