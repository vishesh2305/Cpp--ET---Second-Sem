#include <iostream>
using namespace std;

// Question 5: Function Overloading and Default Arguments

// Concept: Interaction between function overloading and default arguments.
// Task: Create a function sum.
// Overload sum to take two integers and return their sum.
// Overload sum to take three integers and return their sum.
// Now, try to achieve a similar effect using a single function with default arguments. For example, int sum(int a, int b, int c = 0);. Discuss if this creates ambiguity with the two-argument overloaded function.
// Intention: To explore how default arguments can sometimes achieve similar results as overloading but also how they might lead to ambiguity if not used carefully with overloaded functions.



int sum(int a , int b){
    return a+b;
};
int sum(int a , int b , int c){
    return a+b+c;
};
// int sum(int a, int b, int c = 0){
//     return a+b+c;
// };


int main(){
    cout << sum(10,20)<<endl;
    cout << sum(10,20,30)<<endl;

    return 0;
}