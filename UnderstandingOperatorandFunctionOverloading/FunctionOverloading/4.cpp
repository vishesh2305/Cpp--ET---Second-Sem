#include <iostream>
using namespace std;



// Question 4: Overloading with Constant Parameters

// Concept: Overloading with const and non-const parameters.
// Task: Create a function named processValue.
// One version should accept an integer reference (int&) and print "Processing non-const int: " followed by the value. It should then increment the value.
// Another version should accept a constant integer reference (const int&) and print "Processing const int: " followed by the value. It should not attempt to modify the value.
// Intention: To understand how const-correctness can be a factor in function overloading, especially with reference parameters.



void processValue(int& a){
    cout << "Processing non const int : "<< a << endl;
};

void processValue(const int& b){
    cout << "Processing const int : "<< b << endl;
};


int main(){
    const int a = 20;
    int b = 30;
    processValue(b);
    processValue(a);
    return 0;
}