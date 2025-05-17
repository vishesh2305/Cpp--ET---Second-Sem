#include <iostream>
using namespace std;

// Implement a simple ShapeFactory class. It should have a static method createShape(string type) that returns a pointer to a Shape base class (you'll need to define Shape and a couple of derived classes like Circle and Square). The factory method should decide which concrete shape to create based on the type string. This showcases a common use of static methods.

class Shape{
    public:
    virtual void draw() = 0;
    ~Shape(){};
};

class Circle: public Shape{
    public:
    void draw() override {
        cout << "Circle Shape is Called;\n";
    };
};

class Square: public Shape{
    public:
    void draw() override {
        cout << "Square Shape is Called;\n";
    };
};


class ShapeFactory: public Shape{
    public:
    static Shape* createShape(const string& type){
        if(type == "circle"){
            return new Circle();
        } else{
            return new Square();
        };
    };
};

int main(){
    Shape* s1 = ShapeFactory::createShape("circle");
    s1->draw();
    Shape* s2 = ShapeFactory::createShape("square");
    s2->draw();
    return 0;
    delete s1;
    delete s2;
}