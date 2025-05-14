#include <iostream>
using namespace std;

// Create a class Box with length, width, and height. Implement a constructor to initialize these and a destructor that prints the volume of the box being destroyed.

class Box{
    int length; 
    int width;
    int height;
    public:
    Box(int length, int width, int height) : length(length), width(width), height(height){};
    void volbox(){
        cout << "The volume of the box is "<<length*width*height<<endl;
    };
};


int main(){

    Box* b1 = new Box(10,20,30);
    b1 ->volbox();
    delete b1;
    b1-> volbox();
    return 0;

};