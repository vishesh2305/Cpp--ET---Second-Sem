#include <iostream>
using namespace std;

// Create a class ComplexNumber with real and imaginary parts. Write a constructor to initialize them.

class ComplexNumber{
    int real;
    int imaginary;

    public:
    ComplexNumber(){};
    void getdata(){
        cout << "Enter the Real Part of the equation :\n";
        cin >> real;
        cout << "Enter the Imaginary part of the equation , i.e. the part following 'i'\n";
        cin >> imaginary;
    }
    void display(){
        cout << "The real part is "<< real << " and the imaginary part is "<< imaginary <<" So the equation becomes "<<real<<"+i"<<imaginary<<"."<< endl;
    };
};

int main(){

ComplexNumber cpx;
cpx.getdata();
cpx.display();


return 0;
    
};