#include <iostream>
using namespace std;

// Create a base class Shape with a private string member shapeColor. Write a global friend function printColor(Shape& s) that prints the shapeColor. Now, create a derived class Circle that inherits from Shape. In main(), create an object of Circle, set its color (you'll need a way to do this, perhaps a public constructor or setter in Shape), and then call printColor with the Circle object. Observe and explain if the friend function of the base class can access the private member through a derived class object.
class Shape{
    private:
    string shapeColor;
    public:
    Shape(string shapeColor): shapeColor(shapeColor){};
    friend void printColor(Shape& s);
};

void printColor(Shape& s){
    cout << s.shapeColor<< endl;
};

class Circle:public Shape{
    public:
    Circle(string color):Shape(color){};
};


int main(){
    Circle c1("Yellow");
    printColor(c1);
    return 0;
}