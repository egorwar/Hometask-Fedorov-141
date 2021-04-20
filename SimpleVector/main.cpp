#include <iostream>

using namespace std;

template<typename T>
class SimpleVector{
private:
    T *arr;
    int n, pointer = 0;
public:
    SimpleVector(){
        arr = new T(10);
        n = 10;
    }
    SimpleVector(int length){
        arr = new T(length);
        n = length;
    }
    SimpleVector(int length, T filler){
        arr = new T(length);
        n = length;
        for(int i = 0; i < n; i++)
            *(arr+i) = filler;
        pointer = length;
    }
    void put(T el){
        if(pointer < n) *(arr+pointer) = el;
        else{
            T* tmp = new T(n*2);
            n *= 2;
            for(int i = 0; i < n; i++) *(tmp+i) = *(arr+i);
            arr = tmp;
            *(arr+pointer) = el;
        }
        pointer++;
    }
    void erase_(int ind){
        if(ind >= pointer || ind < 0) return;
        else{
            for(int i = ind+1; i < pointer;i++) swap(*(arr+i-1),*(arr+i));
            pointer--;
        }
    }

    int findFirst(T el){
        for(int i = 0; i < pointer; i++)
            if(*(arr+i)==el) return i;
        return -1;
    }

    bool eraseFirst(T el){
        int ind = findFirst(el);
        if(ind == -1) return false;
        else erase_(ind);
        return true;
    }

    bool insertAfter(T el, T mark){
        int ind = findFirst(mark);
        if(ind == -1) return false;
        if(pointer == n){
            T* tmp = new T(n*2);
            n *= 2;
            for(int i = 0; i < n; i++) *(tmp+i) = *(arr+i);
            arr = tmp;
        }
        for(int i = n; i > ind+1; i--) swap(*(arr+i-1),*(arr+i));
        *(arr+ind+1) = el;
        return true;

    }

    void print(){
        cout <<"Dynamic length is: " << pointer << endl;
        for(int i = 0; i < pointer; i++)
            cout << *(arr+i) << " ";
        cout << '\n';
    }

    T operator[](const int index){
        return *(arr+index);
    }
};

int main()
{
    SimpleVector<int> v(5, 9);
    v.print();
    v.put(13);
    v.print();
    v.put(14);
    v.print();
    v.erase_(v.findFirst(13));
    v.print();
    cout << "\nv[5] is " << v[5] <<'\n';
    SimpleVector<char> c(5, '*');
    c.print();
    c.insertAfter('#','*');
    c.print();
    c.eraseFirst('#');
    c.print();
    return 0;
}
