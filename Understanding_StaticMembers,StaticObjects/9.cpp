#include <iostream>
using namespace std;

// Explain why static member functions do not have a this pointer. What are the implications of this regarding accessing non-static members of the class from a static member function?



// Reason: Static member functions are not tied to any particular instance of the class. 
// They can be called without creating any object. 
// The `this` pointer is an implicit parameter that is passed to all non-static member functions. 
// It points to the object that invoked the function, allowing access to the object's non-static members.
// However, since static member functions belong to the class itself and not to any object, 
// there is no object to provide a `this` pointer. 
// Therefore, static member functions do not have a `this` pointer, 
// and they cannot directly access non-static members. 
// If access is needed, it must be done through an object explicitly passed as a parameter.

class Dog{
    string name;
    public:
    static void display(Dog& d1){
        cout << d1.name;
    }
    void setname(const string& n){
        name = n;
    }
};

int main(){
    Dog d1;
    d1.setname("Tommy");

    Dog::display(d1);
};