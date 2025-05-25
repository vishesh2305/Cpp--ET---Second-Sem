#include <iostream>
using namespace std;

// Design two classes, Rectangle and Square. Rectangle should have private members length and width. Square should have a private member side. Write a friend function compareAreas that takes one Rectangle object and one Square object as arguments. This function should calculate the area of both shapes and print which shape has a larger area, or if their areas are equal. Instantiate one object of each class, initialize their dimensions, and call compareAreas

class Rectangle;
class Square;

class Rectangle{
    private:
    int length;
    int width;
    public:
    Rectangle(int l, int w): length(l), width(w){};
    friend void compareAreas(Rectangle&, Square&);
};


class Square{
    private:
    int side;
    public:
    Square(int side): side(side){};
    friend void compareAreas(Rectangle&, Square&);
};

void compareAreas(Rectangle& r1, Square& s1){
    int arearectangle = r1.length * r1.width;
    int squarearea = s1.side*s1.side;

    if(arearectangle> squarearea){
        cout <<"Area of rectangle is : "<< arearectangle<<endl;
    } else{
        cout <<"Area of Square is : " << squarearea<< endl;
    };
};

int main(){
    Rectangle r1(10,20);
    Square s1(40);
    compareAreas(r1,s1);
};