#include <iostream>

using namespace std;

int main()
{
    cout << "Insert matrix depth and length: ";
    int m; cin >> m;
    int n; cin >> n;
    cout << "Now insert matrix elements: ";
    int **a = new int*[m];
    for(int i = 0; i < m; i++)
        a[i] = new int[n];
    bool flag = false;
    for(int j = 0; j < m; j++)
        for(int i = 0; i < n; i++){
            cin >> a[j][i];
            if(a[j][i]==0) flag = true;
        }
    if(flag){
        cout << "\nElements with indexes ";
        for(int j = 0; j < m; j++)
            for(int i = 0; i < n; i++)
                if(a[j][i]==0) cout << "[" << j << "][" << i << "] ";
            cout << "are zero-valued.";
    }
    else cout << "\nZero-valued elements don't exist.";

    for(int i = 0; i < m; i++)
        delete [] a[i];
    delete [] a;
    return 0;
}

