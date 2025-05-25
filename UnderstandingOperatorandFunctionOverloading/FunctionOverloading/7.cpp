#include <iostream>
using namespace std;



// Question 7: Function Overloading and Type Promotion/Conversion

// Concept: How C++ implicit type conversions affect overload resolution.
// Task: Create a function operate.
// One version accepts a long and prints "Operate on long: " followed by the value.
// Another version accepts a double and prints "Operate on double: " followed by the value.
// Call operate with an int argument. Observe which function is called and explain why.
// Intention: To understand the rules of type promotion (e.g., int to long or int to double) and how they influence the choice of an overloaded function.



void operate(long a){
    cout << "Operates a long : "<< a<<endl;
};
void operate(double b){
    cout << "Operate on double : "<< b << endl;
};

int main(){
    int a = 4;
    // operate(a); 
    return 0;
}