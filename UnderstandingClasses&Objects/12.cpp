#include <iostream>
using namespace std;

// Add a default constructor to the Rectangle class (from Q2) that initializes length and width to 1. Also, add a destructor that prints "Rectangle object destroyed".

class Rectangle{
    int length;
    int width;
    public:
    Rectangle(int length, int width): length(length), width(width){};
    int calcarea(){
        int area = length*width;
        cout << "The area of Rectangle is "<< area<< endl;
        return area;
    };
    int calcparameter(){
        int parameter =  2*(length+width);
        cout << "The Parameter of Rectangle is "<< parameter<<endl;
        return parameter;
    };

};
int main(){
    Rectangle* rec = new Rectangle(10,20);
    rec->calcarea();
    rec->calcparameter();
    return 0;
}