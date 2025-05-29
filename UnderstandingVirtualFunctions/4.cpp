#include <iostream>
using namespace std;

// Pure Virtual Functions and Abstract Classes:
// Intent: To learn how to create abstract classes using pure virtual functions, forcing derived classes to implement them.
// Question: Create an abstract base class Shape with a pure virtual function virtual double calculateArea() const = 0;. Derive two classes, Circle (with a radius member) and Rectangle (with width and height members), from Shape. Implement calculateArea() in both derived classes. In main(), demonstrate that you cannot create an object of Shape. Create objects of Circle and Rectangle, store their addresses in Shape* pointers, and call calculateArea() to print their respective areas.

class Shape{
    public:
    Shape(){
        cout << "Shape constructor called\n";
    };
    virtual double calculateArea() const = 0;
}; 

class Circle: public Shape{
    public:
    int radius;
    Circle(int r): radius(r){};
    double calculateArea() const{
        return 3.14*(radius*radius);
    }
};

class Rectangle: public Shape{
    public:

    int width;
    int height;
    Rectangle(int w, int h): height(h), width(w){};
    double calculateArea() const{
        return width*height;
    };
};


int main(){
    Circle c1(1);
    cout <<c1.calculateArea()<< endl;
    Rectangle r1(2,4);
    cout <<r1.calculateArea()<<endl;
    return 0;
};