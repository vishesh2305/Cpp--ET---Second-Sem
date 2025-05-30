#include <iostream>
#include <vector>
using namespace std;

// Simulating a Drawing Application:
// Intent: To use polymorphism to manage and draw different shapes.
// Question: Use the Shape, Circle, Rectangle classes from the "Virtual Functions" section (Question 4). Add a virtual void draw() const to Shape (can be pure or have a generic implementation). Implement draw() in Circle and Rectangle to print something like "Drawing a Circle with radius X" or "Drawing a Rectangle WxH". In main(), create a list of Shape* and add different shapes. Iterate and call draw() on each.


class Shape{
    public:
    Shape(){
        cout << "Shape constructor called\n";
    };
    virtual double calculateArea() const = 0;
    virtual void draw() const=0;

    virtual ~Shape(){};
}; 

class Circle: public Shape{
    public:
    int radius;
    Circle(int r): radius(r){};
    double calculateArea() const{
        return 3.14*(radius*radius);
    };
    void draw() const override{
        cout << "Drawing a Circle \n";
    };
};

class Rectangle: public Shape{
    public:
    int width;
    int height;
    Rectangle(int w, int h): height(h), width(w){};
    double calculateArea() const{
        return width*height;
    };
    void draw() const override{
        cout << "Drawing a Rectangle\n";
    };
};


int main(){


    vector<Shape*> shapes;

    shapes.push_back(new Circle(5));
    shapes.push_back(new Rectangle(5,5));

    for(const Shape* shape: shapes){
        shape->draw();
    };

    for(Shape* shape:shapes){
        delete shape;
    }
        
return 0;
}