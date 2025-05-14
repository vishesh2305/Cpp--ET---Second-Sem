#include <iostream>
using namespace std;

// Define a Car class with attributes make, model, and year. Write a constructor to initialize these attributes when an object is created. Add a method to display car information.

class Car{
    string make;
    string model;
    int year;
    public:
    Car(string make, string model, int year): make(make), model(model), year(year){};
    void display(){
        cout << "The car make is "<<make<<" having model "<<model<<" and made in the year "<<year<<endl;
    };


};



int main(){
    Car* c1 = new Car("OFFroad", "Ford", 1990);
    c1 -> display();
}