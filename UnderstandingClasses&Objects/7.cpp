#include <iostream>
#include <string>
using namespace std;



// Create a class Dog with attributes name and breed. Include a method bark() that prints "Woof!". Create an object and make it bark.

class Dog{
    string name;
    string breed;
    public:
    Dog(string name, string breed) : name(name), breed(breed){};
    void bark(){
        cout << "The dog name is "<<name<<" . Which is of breed "<<breed<< " is barking on gunnu ."<<endl;
    };
};


int main(){
    Dog* d1 = new Dog("Sheru", "German Shephard");
    d1 -> bark();
}