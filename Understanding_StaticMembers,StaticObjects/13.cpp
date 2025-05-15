#include <iostream>
using namespace std;

// Demonstrate with a code example what happens if you try to access a non-static member variable or call a non-static member function from within a static member function. Explain the compiler error.

class Dog{
    public:
    void name(){
        cout << "The name of dog is doggy"<<endl;
    };
    static void display(){
        name();
    }
};