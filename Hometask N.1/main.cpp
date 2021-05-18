#include <iostream>
#include <vector>

using namespace std;

int main()
{
    cout << "How much numbers: ";
    int n, l; cin >> n;
    vector<int> arr;
    for(int i = 0; i < n; i++){
        cin >> l;
        arr.push_back(l);
    }
    vector<int>::iterator it = arr.begin();
    int mn = arr.at(0), ind = 0;
    for(int i = 1; i < n; i++)
    if(arr.at(i)<mn){
        mn = arr.at(i);
        ind = i;
    }
    it += ind;
    arr.insert(it, 0);
    if(ind == n-1) arr.push_back(0);
    else arr.insert(it+2, 0);
    for(int i = 0; i < arr.size(); i++) cout << arr.at(i) << " ";
    return 0;
}
