#include <iostream>
using namespace std;

// Define a Lamp class with a boolean attribute isOn and methods turnOn() and turnOff().

class Lamp{

    bool isOn;
    public:
    Lamp(bool isOn) : isOn(isOn) {};
    void turnOn(){
        if(isOn){
            cout << "Lamp is Already On .\n";
        } else {
            isOn = true;
            cout << "Lamp is now turned ON.\n";
        }
    };
    void turnOff(){
        if(isOn){
            isOn = false;
            cout << "Lamp is turned Off\n";
        } else{
            cout << "Lamp is Already off";
        }
    };

};


int main(){
    Lamp* l1 = new Lamp(true);
    l1->turnOn();
    l1->turnOff();

}