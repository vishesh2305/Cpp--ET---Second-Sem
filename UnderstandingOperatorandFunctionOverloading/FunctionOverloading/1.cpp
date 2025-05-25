#include <iostream>
using namespace std;

// Question 1: Basic Overloading with Different Data Types

// Concept: Overloading based on the data type of parameters.
// Task: Create a function named display that is overloaded.
// One version should accept an integer and print "Integer: " followed by the integer value.
// Another version should accept a double and print "Double: " followed by the double value.
// A third version should accept a string and print "String: " followed by the string value.
// Intention: To understand how the compiler differentiates calls based on the type of a single argument.



void display(int a){
    cout << "INTEGER : "<< a <<endl;
};


void display(double db){
    cout << "DOUBLE : "<< db <<endl;
};

void display(string s){
    cout << "STRING : "<< s <<endl;
};

int main(){
    display(1);
    display(12.13);
    display("this is a string");


    return 0;
};