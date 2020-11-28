#include <iostream>

using namespace std;

int main()
{
    cout << "Insert the amount of numbers in the first array: ";
    int n; cin >> n;
    cout << "Insert the amount of numbers in the second array: ";
    int k; cin >> k;
    int *first = new int[n];
    int *second = new int[n+k];
    cout << "Insert the numbers of the first array: ";
    for(int i = 0; i < n; i++)
        cin >> first[i];
    cout << "Insert the numbers of the second array: ";
    for(int i = 0; i < k; i++)
        cin >> second[i];
    for(int i = k; i < n+k; i++)
        second[i] = first[i-k];
    cout << "\nHere is the resulting array: ";
    for(int i = 0; i < n+k; i++)
        cout << second[i] << " ";
    cout << '\n';
    return 0;
}
