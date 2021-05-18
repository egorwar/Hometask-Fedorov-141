#include <iostream>
#include <list>

using namespace std;

int main()
{
    cout << "How much numbers: ";
    int n, l; cin >> n;
    list<int> arr;
    for(int i = 0; i < n; i++){
        cin >> l;
        arr.push_back(l);
    }
    list<int>::iterator it = arr.begin();
    list<int>::iterator temp;
    int mn = *it;
    for(it = arr.begin(); it != arr.end(); it++)
        if(*it<mn){
            mn = *it;
            temp = it;
        }
    arr.insert(temp, 0);
    if(temp == arr.end()) arr.push_back(0);
    else{
        temp++;
        temp++;
        arr.insert(temp, 0);
    }
    for(it = arr.begin(); it != arr.end(); it++) cout << *it << " ";
    return 0;
}
