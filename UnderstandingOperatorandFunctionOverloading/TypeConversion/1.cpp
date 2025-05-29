#include <iostream>
using namespace std;

// Conversion Constructor (Built-in type to Class type):

// Intent: Allow implicit conversion from a built-in type to your class type.
// Question: Create a class MyNumber which stores an int. Provide a conversion constructor that takes an int and initializes the MyNumber object.
// Create a function void displayMyNumber(MyNumber mn) that prints the stored int. In main(), call this function by passing an int directly: displayMyNumber(10);.

class MyNumber{
    int a;
    public:
    MyNumber(int a): a(a){};
    int getValue() const{
        return a;
    }
};
void displayMyNumber(MyNumber mn){
    cout << mn.getValue()<<endl;
};

int main(){
    MyNumber mn(10);
    displayMyNumber(20);
    return 0;
};