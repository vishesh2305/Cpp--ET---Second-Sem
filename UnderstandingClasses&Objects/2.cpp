#include <iostream>
using namespace std;
// Create a class Rectangle with attributes length and width. Add methods to calculate its area and perimeter. Instantiate an object and print its area and perimeter.
class Rectangle{
    public:
    int length;
    int width;
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
    Rectangle r1;
    r1.length = 100;
    r1.width = 50;
    r1.calcarea();
    r1.calcparameter();
};