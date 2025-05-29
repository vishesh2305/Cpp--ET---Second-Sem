#include <iostream>
using namespace std;

// Calling Base Class Version of Virtual Function from Derived Class:

// Intent: To show how a derived class can explicitly call the base class version of an overridden virtual function.
// Question: In the Printer class from Question 1, modify its operate() function. Inside it, first print "Printer specific operation..." and then explicitly call the Device class's version of operate(). Test this in main().

class Device{
    public:
    virtual void operate(){
        cout << "Generic device operating\n";
    };
};
class Printer : public Device{
    public:
    void operate() override{
        cout << "Printer Specific Operation\n";
        Device::operate();
    };
};

int main(){
    Device* ptr;
    Printer p1;
    ptr = &p1;

    ptr->operate();

    return 0;


}