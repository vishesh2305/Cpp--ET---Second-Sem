#include <iostream>
using namespace std;

// Explain how static member variables are shared among all objects of a class. Write a program with a class Item that has a static integer itemCount. Increment itemCount in the constructor and decrement it in the destructor. Create a few Item objects and print itemCount after each creation and destruction to observe its behavior.

class Item{
    static int itemCount;
    public:
    Item(){
        itemCount ++;
        cout << "Constructor Called\n"<<itemCount<<endl;
    };
    ~Item(){
        itemCount--;
        cout << "Destructor Called\n"<<itemCount<<endl;
    };
    static void display(){
        cout << "The current count is : "<<itemCount<<endl;
    };


};
int Item::itemCount;

int main(){
    Item::display();
    Item i1;
    Item::display();
    Item i2;
    Item i3;
    Item i4;
    Item::display();
    return 0;
}