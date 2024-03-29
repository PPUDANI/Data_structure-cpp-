#include <iostream>
using namespace std;

class DynamicArray
{
private:
    unsigned int sz;
    int* arr;
public:
    DynamicArray(int i): sz(i){ 
        arr  = new int[sz];
    }
    ~DynamicArray(){
        delete arr;
        arr = nullptr;
        cout << "memory deleted! "<< endl;
        cout << arr << endl; 
    }

    unsigned int size(){return sz;}

    int& operator[](const int i){ return arr[i];}
};
int main()
{
    DynamicArray da(3);
    da[0] = 10;
    da[1] = 20;
    da[2] = 30;
    for(int i = 0; i < da.size(); i++){
        cout << da[i] << endl;
    }
}