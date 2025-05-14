#include <iostream>
using namespace std;

// Write a class Resource that allocates a dynamic integer in its constructor and deallocates it in its destructor. Create an object of this class to see constructor/destructor calls.

class Resource{
    
    int* dynamicint;
    int size;
    public:
    Resource(int size){
        this -> size = size;
        this ->dynamicint = new int[size];

        for(int i=0; i<size; i++){
            dynamicint[i] = i+10;
            cout << dynamicint[i]<< " ";
        };

    };
    
    ~Resource(){
        delete[] dynamicint;
    }
};

int main(){
    Resource r1(5);
    return 0;
}