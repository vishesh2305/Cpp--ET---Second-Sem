#include <iostream>
using namespace std;

// Constructor Call Order with Virtual Base Class:
// Intent: To understand how and when the constructor of the virtual base class is called in a diamond inheritance hierarchy.
// Question: Add default constructors to Top, Middle1, Middle2, and Bottom (from Question 2 setup, with virtual inheritance). Each constructor should print a message indicating which class's constructor is called (e.g., "Top Constructor", "Middle1 Constructor", etc.). In main(), create an object of Bottom. Observe and document the order of constructor calls. Explain why the Top constructor is called only once and typically by the most derived class (Bottom in this case).


class Top{
    public:
    Top(){
        cout << "Top constructor called \n";
    }
    int data = 1;
};

class Middle1 : virtual public Top{

    public:
    Middle1(){
        cout << "Middle1 constructor called \n";

    }

};

class Middle2 : virtual public Top{
    public:
    Middle2(){
        cout << "Middle2 constructor called \n";

    };
};

class Bottom: public Middle1, public Middle2{

};


int main(){
    Bottom b1;


    return 0;
}