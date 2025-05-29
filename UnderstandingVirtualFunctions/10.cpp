#include <iostream>
using namespace std;

// Virtual Functions in a Deeper Hierarchy:
// Intent: To observe polymorphic behavior across multiple levels of inheritance.
// Question: Create class Animal with virtual void makeSound(). Create class Mammal inheriting Animal, overriding makeSound(). Create class Dog inheriting Mammal, overriding makeSound() again. In main(), create an Animal* pointing to a Dog object and call makeSound(). Verify the Dog's version is called. Also, test with Mammal* pointing to a Dog.

class Animal{
    public:
    virtual void makeSound(){
        cout << "Animal Saying Love u Gunnu\n";
    };
};
class Mammal : public Animal{
    public:
    void makeSound() override{
        cout << "Mammal Saying Hi Gunnu \n";
    };
};
class Dog: public Mammal{
    public:
    void makeSound() override{
        cout << "Dog saying Hello to Gunnu\n";
    }
};
int main(){
    Dog d;
    Mammal m;
    Animal a;



    Animal* ptr =&d;
    Mammal* ptr1 = &m;
    Dog* ptr2 = &d;
    ptr->makeSound();
    ptr1->makeSound();
    ptr2->makeSound();

    a.makeSound();
    return 0;
};