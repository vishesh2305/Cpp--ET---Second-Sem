#include <iostream>
using namespace std;

// Question 2: Overloading with Different Number of Parameters
// Concept: Overloading based on the number of parameters.
// Task: Create a function named calculateArea.
// One version should accept one integer argument (side) and calculate the area of a square, printing "Area of square: " followed by the area.
// Another version should accept two integer arguments (length, breadth) and calculate the area of a rectangle, printing "Area of rectangle: " followed by the area.
// Intention: To see how functions with the same name can perform different (though related) tasks based on the count of arguments.



void calculateArea(int side){
    cout << "Area of square is : "<<side*side<<endl;
};

void calculateArea(int length, int breadth){
    cout << "Area of Rectangle is : "<<length*breadth<<endl;
};

int main(){
    calculateArea(10);
    calculateArea(20,30);


    return 0;
}