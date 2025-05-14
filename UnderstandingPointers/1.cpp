// Declaring a Pointer

#include <iostream>
using namespace std;


int main(){

    int b = 1;
    int *ptr = &b;  // Assigning the address of the variable a to the pointer....

    // & operator is used to get the address of the variable.... and is called as address of operator


    // Lets write a simple program to demonstrate pointer assignment

    int a =5;
    int *pointer;
    pointer = &a;
    cout << pointer<< endl;  // Prints address of pointer as pointer = &a
    cout << &a << endl;    // Prints address of pointer as & is address operator
    cout << *pointer << endl;  // prints the value at address a;

    (*pointer)++;  // it will increment the pointing value of the pointer 
    *pointer++;  // it will increment the address value of the pointer and then points towards the new address and prints the value of the new adress so it will print 1;
    
    

    cout << *pointer << endl;





    // Null Pointer

    // A null pointer a pointer which is usually not pointing towards any memory location....

    // Declaration : nullptr or NULL





    int *c = nullptr;

    // Derefrencing means accessing the value of the pointer's address i.e *pointer or *c;





    int *p , q; // here only p is pointer , but q is an integer data type







    // Declaring and initializing a Pointer

    float floatptr = 10.12;
    float* f = &floatptr;


    int x = 10;
    int *y = &x;
    *y = 100;

    cout << x;


    int *j = new int(10);

    cout << j << endl;
    cout << *j << endl;


    int m = 10;
    const int* n = &m;
    // *n = 100;  
    cout << m << endl;

    int** k = &j;
    cout << **k << endl;






    return 0;
}