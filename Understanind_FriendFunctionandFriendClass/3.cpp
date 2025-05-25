#include <iostream>
using namespace std;

// Create a class ComplexNumber with private data members real (double) and imaginary (double). Overload the + operator using a friend function to add two ComplexNumber objects. The function should take two ComplexNumber objects as input and return a new ComplexNumber object representing their sum. In main(), create two complex numbers, add them using the overloaded + operator, and display the result.

class ComplexNumber{
    double real;
    double imaginary;
    public:
    ComplexNumber(double r, double img): real(r), imaginary(img){};
    friend ComplexNumber operator+(const ComplexNumber& obj,const ComplexNumber& obj2);

    void display() const{
        cout << real << " +i("<< imaginary<<")"<< endl;
    };
};

ComplexNumber operator+(const ComplexNumber& c1, const ComplexNumber& c2){
    return ComplexNumber(c1.real + c2.real, c1.imaginary+c2.imaginary);
};

int main(){
    ComplexNumber c1(12, 14);
    ComplexNumber c2(2, 4);
    ComplexNumber c3= c1 + c2;
    c3.display();
    return 0;
}