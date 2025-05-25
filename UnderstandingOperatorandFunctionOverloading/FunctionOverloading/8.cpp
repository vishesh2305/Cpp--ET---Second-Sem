#include <iostream>
using namespace std;




// Question 8: Return Type is NOT a Basis for Overloading

// Concept: Illustrate that functions cannot be overloaded based on return type alone.
// Task: Attempt to create two functions with the same name and same parameter list but different return types (e.g., int getValue() and double getValue()).
// Intention: To demonstrate a key rule: function overloading requires differences in the parameter list (number, type, or order of types). The compiler will flag this as an error. Explain why this is an error.



int getValue(int a){
    return a;
};
double getValue(double a){
    return a + 0.5;
};

int main(){
    cout << getValue(5)<<endl;
    return 0;
}