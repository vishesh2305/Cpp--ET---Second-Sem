#include <iostream>
using namespace std;

// Question 6: Overloading the [] (Subscript) Operator for a CustomArray Class
// Concept: Overloading the subscript operator for array-like access.
// Task: Create a class CustomArray that internally holds a small fixed-size integer array (e.g., size 5). Overload the [] operator to allow access to elements of this internal array using an index.
// Provide a non-const version that returns a reference (int&) allowing modification.
// Provide a const version that returns a const reference (const int&) for read-only access on const objects.
// Include basic bounds checking (e.g., print an error or throw an exception if the index is out of range).
// Intention: To provide intuitive element access for classes that encapsulate collections of data. The const and non-const versions are important.

class CustomArray{
    int arr[5];
    public:
    CustomArray(){
        for(int i=0; i < 5; ++i){
            arr[i] = 0;
        };
    };

    int& operator[](int index){

        return arr[index];

    };

    const int& operator[](int index) const{
        return arr[index];
    };

    void display() const{
        for(int i=0; i<5; i++){
            cout << arr[i]<< " ";
        };
        cout << endl;
    };
};


int main(){
    CustomArray arr;
    for(int i=0; i<5; i++){
        arr[i] = i+10;
    };

    arr.display();

    const CustomArray customarr = arr;

    cout << customarr[0]<<endl;

    arr[5] = 100;
    cout << customarr[5]<<endl;

    return 0;
};