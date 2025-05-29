#include <iostream>
using namespace std;

// Non-Virtual Function Behavior (Static Binding):
// Intent: To contrast the behavior of virtual functions with non-virtual functions when called via a base class pointer.
// Question: Modify the Device class from Question 1. Add a non-virtual public function getStatus() that prints "Device status: OK." In the Printer class, also define a getStatus() function (hiding the base version) that prints "Printer status: Ready." In main(), using the same Device* pointer pointing to a Printer object, call getStatus(). Observe and explain which version is called and why it differs from the operate() call.

class Device{
    public:
    void Getstatus(){
        cout << "Device Status OK.\n";
    };
};

class Printer : public Device{

    public:
    void Getstatus() {
        cout <<"Printer status Ready.\n";
    };

};


int main(){

    Device* pointer;
    Printer obj;
    pointer = &obj;
    pointer->Getstatus();


    return 0;
};