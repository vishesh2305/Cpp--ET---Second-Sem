#include <iostream>
using namespace std;

// Basic Virtual Function and Overriding:
// Intent: To understand the basic declaration of a virtual function in a base class and its overriding in a derived class.
// Question: Create a base class Device with a public virtual function operate() that prints "Generic device operating." Create a derived class Printer that inherits from Device. Override operate() in Printer to print "Printer is printing." In main(), create a Device* pointer. Assign it the address of a Printer object. Call operate() through the base class pointer. Observe which version is called.

class Device{
    public:
    virtual void operate(){
        cout << "Generic device operating\n";
    };
};

class Printer : public Device{
    public:
    void operate() override{
        cout << "Printer is Printing\n";
    };
};



int main(){
    Device* pointer;
    Printer obj;
    pointer = &obj;

    pointer->operate();



    return 0;
};