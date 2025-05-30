#include <iostream>
using namespace std;

// Dynamic Typing with dynamic_cast:
// Intent: To safely downcast a base class pointer to a derived class pointer at runtime, often used in polymorphic scenarios to access derived-specific members.
// Question: Create a base class Vehicle with a virtual void start(). Create derived class Car inheriting Vehicle, overriding start(). Car also has a specific method void openTrunk(). In main(), create Vehicle* v_ptr = new Car();. Call v_ptr->start(). Then, use dynamic_cast to convert v_ptr to Car*. If successful (check for nullptr), call openTrunk(). Explain when dynamic_cast is useful and what happens if the cast fails. Don't forget to delete v_ptr.

class Vehicle{
    public:
    virtual void start(){};

    virtual ~Vehicle(){
    };
};

class Car: public Vehicle
{
    public:
    void start() override{};

    void openTrunk(){
        cout << "Trunk Opened\n";
    };
};


int main(){
    Vehicle* vptr = new Car();

    vptr->start();

    Car* carptr= dynamic_cast<Car*>(vptr);

    if(carptr){
        carptr->openTrunk();
    } else {
        cout << "Dynamic cast failed : Not a car object\n";
    };



    delete vptr;


    return 0;
}