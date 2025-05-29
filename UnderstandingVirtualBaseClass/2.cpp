#include <iostream>
using namespace std;

// Solving with Virtual Inheritance:

// Intent: To show how virtual inheritance resolves the ambiguity in the diamond problem.
// Question: Modify the code from Question 1. Make Middle1 and Middle2 inherit virtually from Top (e.g., class Middle1 : public virtual Top). Now, in main(), create an object of Bottom and access object_bottom.data. Set a value to it and print it. Explain why this now works and how many copies of data exist in Bottom.

class Top{
    public:
    int data = 1;
};

class Middle1;
class Middle2;

class Middle1 : virtual public Top{

};

class Middle2 : virtual public Top{

};

class Bottom: public Middle1, public Middle2{

};

int main(){
    Bottom b1;
    cout << b1.data<<endl;
}