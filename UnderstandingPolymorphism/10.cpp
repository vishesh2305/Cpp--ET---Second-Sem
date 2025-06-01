#include <iostream>
using namespace std;

// Virtual Copy Constructor Idiom (Clone Method):

// Intent: To create a polymorphic way to copy objects when you only have a base class pointer.
// Question: Create a base class Prototype with virtual Prototype* clone() const = 0; and a virtual destructor. Create derived classes ConcretePrototypeA and ConcretePrototypeB. Implement clone() in each to return new ConcretePrototypeX(*this); (where X is A or B). Also, add a way to identify them (e.g., a virtual void identify() const). In main(), create a Prototype* p1 = new ConcretePrototypeA();. Create Prototype* p2 = p1->clone();. Call identify() on both p1 and p2 to verify p2 is a copy of the correct type. Clean up memory.

class Prototype{
    public:
    virtual Prototype* clone() const =0;
    virtual void identify() const = 0;
    virtual ~Prototype(){};
};

class ConcretePrototypeA: public Prototype{
    public:
    Prototype* clone() const override{
        return new ConcretePrototypeA(*this);
    };

    void identify() const override{
        cout << "ConcretePrototype A"<<endl;
    }
};

class ConcretePrototypeB: public Prototype{
    public:
    Prototype* clone() const override{
        return new ConcretePrototypeB(*this);
    };
        void identify() const override{
        cout << "ConcretePrototype B"<<endl;
    }
};


int main(){
    Prototype* p1 = new ConcretePrototypeA();
    cout << "Original Project\n";
    p1->identify();

    Prototype* p2 = p1->clone();
    cout << "Cloned OBject" << endl;

    p2->identify();



    delete p1;
    delete p2;

    
    return 0;
}