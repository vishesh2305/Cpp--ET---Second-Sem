#include <iostream>
using namespace std;

// protected Members and their Accessibility:

// Intent: Reinforce the understanding of protected access specifier – accessible within the class itself and by derived classes, but not from outside.
// Question: Create a base class Vehicle with a protected member int speed and a public constructor to initialize speed. Also, add a public method accelerate(int amount) that increases speed and a public method getSpeed() that returns current speed. Create a derived class Car inheriting publicly from Vehicle. In Car, add a method applyBrakes(int amount) that decreases speed (ensure speed doesn't go below 0). In main(), create a Car object, accelerate it, apply brakes, and print its speed using getSpeed(). Try to directly access car_object.speed from main(). Does it work? Why or why not?

class Vehicle{
    protected:
    int speed = 0;
    public:
    void accelerate(int amount){
        speed +=amount;
    };

    void getSpeed(){
        cout<< speed;
    };
};

class Car: public Vehicle{
    public:
    void applyBrakes(int amount){
        speed -= amount;
        if(speed<0){
            speed = 0;
        };
    };
};


int main(){

    Car c1;
    c1.accelerate(50);
    c1.applyBrakes(20);
    c1.getSpeed();
    return 0;
};