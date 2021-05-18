#include <iostream>
#include <list>

using namespace std;

int main()
{
    cout << "How much numbers: ";
    int n, l; cin >> n;
    int mid = ((n%2==0)? n/2-1 : n/2);
    list<int> arr;
    for(int i = 0; i < n; i++){
        cin >> l;
        arr.push_back(l);
    }
    list<int>::iterator it = arr.begin();
    int mx = *it;
    for(it = arr.begin(); it != arr.end(); it++)
    if(*it<0 && *it>mx){
        mx = *it;
    }
    it = arr.begin();
    for(int i = 0; i < mid; i++) it++;
    arr.insert(it, mx);
    arr.erase(++it);
    for(it = arr.begin(); it != arr.end(); it++) cout << *it << " ";
    return 0;
}


