#include <iostream>

using namespace std;

int main()
{
    cout << "Insert the amount of numbers: ";
    int n;
    cin >> n;
    int *a = new int[n];
    cout << "\nNow insert the numbers (The first number should be even): ";
    for(int i = 0; i < n; i++)
        cin >> a[i];
    if(a[0]%2!=0) cout << "\nI DID TELL YOU TO MAKE SURE THAT THE FIRST NUMBER SHOULD BE EVEN!!!\nNow, thanks to you, everything is broken...\n";
    else{
        for(int i = n-1; i > 0; i--)            //Прохожу массив с конца, чтобы уже заменённые элементы никак не влияли на сумму ещё не заменённых.
            if(a[i]%2!=0)                       //Если же они должны влиять, то cтроку №16 следует заменить на следующее выражение: for(int i = 1; i < n; i++)
                a[i] += a[i-1];
        cout << "\nHere is your array: ";
        for(int i = 0; i < n; i++)
            cout << a[i] << " ";
    }
    return 0;
}
