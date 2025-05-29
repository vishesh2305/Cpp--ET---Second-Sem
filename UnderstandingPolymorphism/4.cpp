#include <iostream>
using namespace std;




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
