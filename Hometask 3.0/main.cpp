#include <iostream>

using namespace std;

int main()
{
    int n;
    double mn, nextMn, k;
    cout << "Enter the amount of numbers: ";
    cin >> n;
    if(n <= 1) cout << "Too small amount of numbers!";
    else{

        cout << "Now insert n numbers: ";

        if(n == 2){
            cin >> mn >> k;
            cout << "The closest to minimal number is " << max(mn, k);
        }
        else{
            cin >> mn >> nextMn;
            if(mn > nextMn) swap(mn, nextMn);
            for(int i = 2; i < n; i++){
                cin >> k;
                if(k < mn){
                    swap(mn, nextMn);
                    swap(mn, k);
                }
                else if (k < nextMn)
                    swap(nextMn, k);
            }
            cout << "The closest to minimal number is " << nextMn;
        }


    }
    return 0;
}
