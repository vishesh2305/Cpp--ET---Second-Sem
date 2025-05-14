#include <iostream>
using namespace std;

// Write a function that takes a pointer to a function as a parameter and calls it.



typedef int (*Operation)(int, int);

int add(int a , int b){

    return a+b;
    
}


int sub(int a , int b){

    return a-b;
    
}


int calculate(int x, int y, Operation op){
    return op(x,y);
}


int main(){
    int num1= 10;
    int num2=12;

    int sum = calculate(num1, num2, add);
    cout << sum << endl;



        int difference = calculate(num1, num2, sub);
        cout << difference << endl;

}