#include <iostream>

using namespace std;

void diagonalWriter(int **arr, int m, int n){
    for(int i = 0; i < m; i++)
        cout << arr[i][m-i-1] << " ";
}



int main()
{
    cout << "Insert square matrix depth and length (they should be equal): ";
    int m, n;
    cin >> m >> n;
    if(m != n) cout << "Incorrect data.";
    else{
        int **a = new int*[m];
        for(int i = 0; i < m; i++)
            a[i] = new int[n];
        cout << "Now insert the elements: ";
        for(int i = 0; i < m; i++)
            for(int j = 0; j < n; j++)
                cin >> a[i][j];
        cout << "Elements of the secondary diagonal (top -> bottom) are ";
        diagonalWriter(a, m, n);

        for(int i = 0; i < m; i++)
            delete [] a[i];
        delete [] a;
    }
    return 0;
}
