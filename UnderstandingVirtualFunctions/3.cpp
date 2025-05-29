#include <iostream>
using namespace std;

// Multiple Derived Classes with Virtual Functions:
// Intent: To demonstrate polymorphism with multiple derived classes.
// Question: Extend Question 1. Create another derived class Scanner from Device. Override operate() in Scanner to print "Scanner is scanning." In main(), create an array of Device* pointers. Store addresses of Printer and Scanner objects in this array. Loop through the array and call operate() on each element. Observe the polymorphic behavior.
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
class Scanner: public Device{
    public:
    void operate() override{
        cout << "Scanner is scanning\n";
    };
};
int main(){
    Device* pointers[4];
    Printer p1;
    Printer p2;
    Scanner s1;
    Scanner s2;
    pointers[0] = &p1;
    pointers[1] = &p2;
    pointers[2] = &s1;
    pointers[3] = &s2;
    for(int i=0; i<4; i++){
        pointers[i]->operate();
    };
    return 0;
};