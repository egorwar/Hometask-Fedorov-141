#include <iostream>

using namespace std;

int matrixCounter(int arr[100][100], int m, int n){
    int counter = 0;
    for(int i = 0; i < m; i++)
        for(int j = 0; j < n; j++)
            if(arr[i][j]<0) counter++;
return counter;
}



int main()
{
    cout << "Insert matrix depth and length (each should be 100 or less): ";
    int m, n;
    cin >> m >> n;
    if(m > 100 || n > 100) cout << "Incorrect data.";
    else{
        int a[100][100];
        cout << "Now insert the elements: ";
        for(int i = 0; i < m; i++)
            for(int j = 0; j < n; j++)
                cin >> a[i][j];
        cout << "There are " << matrixCounter(a, m, n) << " negative elements in the matrix.;
    }
    return 0;
}
