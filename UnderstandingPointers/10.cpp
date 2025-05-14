#include <iostream>
using namespace std;




class Car{
    public:
    string model;
    int price;
    Car(string s, int p) : model(s), price(p){};
    virtual void display(){
        cout << "The model of car is "<<model <<" and its price is starting from "<<price <<endl;
    }

};

class Category : public Car{
public:
Category(string m, int cost) : Car(m, cost){};

    void display() override {
        cout << "The Category of car is "<< model <<" and its on road price is "<<price << endl;
    }

};


int main(){

    Car* c1 = new Car("SUV", 300000);
    c1 -> display();

    Category first("Family", 4000000);
    c1 = &first;
    c1 -> display();


    c1=nullptr;
    delete c1;
    return 0;

    


}