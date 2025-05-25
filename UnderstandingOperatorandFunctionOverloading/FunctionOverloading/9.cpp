#include <iostream>
using namespace std;




// Question 9: Overloading with const Member Functions (Context: Classes)

// Concept: Overloading member functions based on the const-ness of the object. (This slightly touches on classes, but is crucial for understanding const in overloading).
// Task: Create a class MyNumber with an integer member value.
// Create a member function getValue() that returns the value and can be called on non-const objects.
// Create another member function getValue() const that returns the value and can be called on const objects.
// Inside each function, print a message indicating which version was called (e.g., "Non-const getValue()" or "Const getValue()").
// Intention: To show how member functions can be overloaded based on whether the object they are called on is const or not.



class MyNumber{
    int value;
    public:
    MyNumber(int value): value(value){};
    void getValue(){
        cout << value << endl;
        cout << "Non Constant value\n";
    };
    void getValue() const{
        cout << value <<endl;
        cout << "Constant value\n";
    };

};

int main(){

    MyNumber mynum(5);
    mynum.getValue();
    const MyNumber mynum2(6);

    mynum2.getValue();

    return 0;
}