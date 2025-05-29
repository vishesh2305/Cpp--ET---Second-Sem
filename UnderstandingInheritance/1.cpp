#include <iostream>
#include <string>
using namespace std;
// Basic Single Inheritance:
// Intent: Understand the fundamental concept of deriving a class from a single base class and accessing base class members.
// Question: Create a base class Animal with a protected member std::string name and a public member function eat() that prints "[name] is eating." Create a derived class Dog that inherits publicly from Animal. Dog should have a constructor that initializes the name (e.g., by taking a name as an argument and passing it to the Animal constructor or setting it directly if accessible). Add a public member function bark() that prints "[name] says Woof!". In main(), create a Dog object, set its name (if not done in the constructor), and call both eat() and bark() methods.


class Animal{
    protected:
    string name;
    public:
    Animal(){};
    Animal(string name): name(name){};
    void eat(){
        cout << name << " is eating."<< endl;
    };
};

class Dog : public Animal{
    public:
    Dog(string name): Animal(name){};
    void bark(){
        cout << name << " says Woof!"<<endl;
    };
};


int main(){
    Dog obj("Tommy");
    obj.bark();
    obj.eat();
    return 0;
};