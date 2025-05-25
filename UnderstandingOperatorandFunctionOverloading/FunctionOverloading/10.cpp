#include <iostream>
using namespace std;



// Question 10: Ambiguous Call Resolution

// Concept: Situations where the compiler cannot decide which overloaded function to call.
// Task: Create functions:
// void process(int a, double b);
// void process(double a, int b);
// Try calling process(10, 20); (where both arguments are int). Explain the compiler's reaction (likely an ambiguity error) and why it occurs.
// Intention: To understand what an ambiguous call is and how to avoid it by ensuring a clear best match for overloaded functions based on the arguments provided



void process(int a, double b){
    cout << "int a, double b";
};

void process(double a, int b){
    cout << "double a, int b";
};

// void process(int a , int b){
//     cout << "int a , int b"<<endl;
// }

int main(){
    // process(10,20);          // Error because compiler will confuse to convert double to int ; 
    process(12.43, 12);
}