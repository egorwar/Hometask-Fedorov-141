#include <iostream>

using namespace std;

int main()
{
    cout << "Insert array length: ";
    int n; cin >> n;
    cout << "Now insert array elements: ";
    int *a = new int[n];
    bool flag = false;
    for(int i = 0; i < n; i++){
        cin >> *(a+i);
        if(a[i]==0) flag = true;
    }
    if(flag){
        cout << "\nElements with indexes ";
        for(int i = 0; i < n; i++)
            if(a[i]==0) cout << '\"' << i << '\"' << " ";
        cout << "are zero-valued.";
    }
    else cout << "\nZero-valued elements don't exist.";

    delete [] a;
    return 0;
}
