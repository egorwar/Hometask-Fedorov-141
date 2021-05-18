#include <iostream>
#include <vector>

using namespace std;

int main()
{
    cout << "How much numbers: ";
    int n, l; cin >> n;
    int mid = ((n%2==0)? n/2-1 : n/2);
    vector<int> arr;
    for(int i = 0; i < n; i++){
        cin >> l;
        arr.push_back(l);
    }
    vector<int>::iterator it = arr.begin()+mid;
    int mx = arr.at(0);
    for(int i = 1; i < n; i++)
    if(arr.at(i)<0 && arr.at(i)>mx){
        mx = arr.at(i);
    }
    arr.insert(it, mx);
    arr.erase(it+1);
    for(int i = 0; i < arr.size(); i++) cout << arr.at(i) << " ";
    return 0;
}
