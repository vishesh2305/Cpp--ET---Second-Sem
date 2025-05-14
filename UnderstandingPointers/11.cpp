#include <iostream>
using namespace std;



// Write a function pointer and assign it a function that adds two integers



typedef void(*funpointer)(int , int);

void addNum(int a, int b){
    cout << "The sum of "<<a<<" and "<<b<<" is "<< a+b << endl;
};



int main(){

    funpointer ptr;
    ptr = &addNum;
    ptr(2,3);

}