#include <iostream>
using namespace std;

// Question 7: Overloading the () (Function Call) Operator for a Multiplier Class
// Concept: Overloading the function call operator to make objects callable like functions (functors).
// Task: Create a class Multiplier that stores a factor (an integer) in its constructor. Overload the () operator such that if m is an object of Multiplier and you call m(value), it returns value multiplied by the stored factor.
// Example: Multiplier times5(5); int result = times5(10); // result should be 50
// Intention: To create objects that can act as functions, which is useful in many C++ patterns, especially with algorithms.

class Multiplier{
    int a;
    public:
    Multiplier(int a): a(a){};

    int operator()(Multiplier& obj){
        return obj(a);
    };

    int operator()(int value){
        return a*value;
    };

};

int main(){
    Multiplier m1(10);
    int result = m1(4);
    cout << result;
    return 0;
}