#include <iostream>
using namespace std;

// Multilevel Inheritance:

// Intent: Understand how a class can be derived from another derived class.
// Question: Create a class Grandparent with a method land() that prints "Has acres of land." Create a class Parent that inherits from Grandparent and adds a method house() that prints "Has a big house." Create a class Child that inherits from Parent and adds a method car() that prints "Has a new car." In main(), create a Child object and call land(), house(), and car() methods on it.

class Grandparent{
    public:
    void land(){
        cout << "Has Acres of land"<< endl;
    };
};

class Parent: public Grandparent{
    public:
    void house(){
        cout << "Has a big House"<< endl;
    };
};


class Child: public Parent{
    public:
    void car(){
        cout << "Has New Car"<< endl;
    }
};


int main(){
    Child c;
    c.land();
    c.house();
    c.car();

    return 0;
}