#include <iostream>
using namespace std;


// Use Pointers with inheritance to access base and derived class methods.



class Car{    // Base Class
    public:
    string model;
    int price;
    Car(string model, int price): model(model), price(price){};

        virtual void display(){
        cout << "The car model is "<<model << " and its price is "<<price << endl;
    };


};

class Type : public Car{     // Derived Class

public:
Type(string model, int price) : Car(model, price){};
    void display() override{
        cout << "The car type is "<<model << " and its price is "<<price << endl;
    };

};






int main(){


Car * c1 = new Car("Latest", 25000000);
Type t1("sports", 20000000);
c1 -> display();
c1 = &t1;
c1 -> display();

};