#include <iostream>
using namespace std;



// Question 3: Overloading with Different Order of Parameters

// Concept: Overloading based on the sequence of data types of parameters.
// Task: Create a function named printOrder.
// One version should accept an integer then a character, and print "Int then Char: " followed by the integer and character.
// Another version should accept a character then an integer, and print "Char then Int: " followed by the character and integer.
// Intention: To demonstrate that the order of parameter types matters for overload resolution.



void printOrder(int a, char B){
    cout << "INt then Char : "<<a<< " "<< B <<endl;
};

void printOrder(char B, int a){
    cout << "Char then INt : "<< B<< " "<< a<<endl;
};



int main(){
    printOrder(3, 'A');
    printOrder('B', 4);
    return 0;
}