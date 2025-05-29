#include <iostream>
using namespace std;

// The Diamond Problem - Basic Setup (Ambiguity):

// Intent: To demonstrate the ambiguity that arises in the "diamond problem" without virtual inheritance.
// Question: Create a base class Top with a public integer member data. Create two classes, Middle1 and Middle2, both publicly inheriting from Top. Create a class Bottom that publicly inherits from both Middle1 and Middle2. In main(), create an object of Bottom. Try to access object_bottom.data. Observe and explain the compiler error (ambiguity).

class Top{
    public:
    int data = 0;
};

class Middle1;
class Middle2;

class Middle1 : public Top{

};

class Middle2 : public Top{

};

class Bottom: public Middle1, public Middle2{

};

int main(){
    Bottom b1;
    // b1.data;   // It is giving ambiguity error because , cpp does not know from which class it is inheriting the top , so it is giving the error . to solve we can use the virtual keyword , which will only pass one top to the object. 
    b1.Middle1::data;

    return 0;
}