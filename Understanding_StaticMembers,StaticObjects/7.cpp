#include <iostream>
using namespace std;

// If a base class Base has a public static member variable value, and a derived class Derived inherits from Base, do Base and Derived share the same value or does Derived get its own copy? Write code to verify your understanding.

class Base{
    public:
    static const int value=10;

};
class Derived : public Base{
    public:
    void display(){
        cout << value<<endl;
    }
};

int main(){
    Derived d1;
    d1.display();
    return 0;
}