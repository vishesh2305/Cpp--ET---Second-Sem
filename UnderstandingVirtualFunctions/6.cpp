#include <iostream>
using namespace std;

// override Specifier (C++11 and later):
// Intent: To use the override specifier to ensure a function in the derived class is indeed overriding a base class virtual function.
// Question: Using the Device and Printer classes from Question 1: In Printer, modify the operate function signature slightly (e.g., void operate(int dummy) override). Observe the compiler error. Correct it and then add the override specifier to the correctly overridden operate() in Printer. Confirm it compiles. Explain the benefit of override.


class Device{
    public:
    virtual void operate(int dummy) {
        cout << "Generic device operating\n";
    };
};

class Printer : public Device{
    public:
    void operate(int dummy) override{
        cout << "Printer is Printing\n";
    };
};


int main(){
    Device* ptr;
    Printer p;
    ptr = &p;
    ptr->operate(3);

    return 0;
}