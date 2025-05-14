#include <iostream>
using namespace std;

// Write a class Point representing a 2D point with x and y coordinates. Include a method to display the coordinates.

class Point{
    int x;
    int y;
    public:
    Point(int x, int y) : x(x), y(y){};
    void display(){
        cout << "The points are : ("<<x<<","<<y<<")"<<endl;
    }
};

int main(){
    Point* p1 = new Point(5,6);
    p1->display(); 
};