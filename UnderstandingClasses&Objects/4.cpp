#include <iostream>
using namespace std;



// Write a C++ program with a class Circle. It should have a private data member radius and public methods setRadius() and calculateArea().

class Circle{
private:
int radius;
public:
void setradius(){
    cout << "\nEnter the radius of circle : "<<endl;
    cin >> radius;
};
void calculateArea(){
    cout << "The area of circle with radius : "<<radius <<" is "<<radius*radius<<" square "<<endl;
};

};

int main(){
    Circle c1;
    c1.setradius();
    c1.calculateArea();
}