#include <iostream>
using namespace std;

// Parameterized Constructor for Virtual Base Class:

// Intent: To learn how the most derived class initializes the virtual base class when parameterized constructors are involved.
// Question: Modify the Top class from Question 3 to have a constructor Top(int val) that initializes its data member and prints "Top Constructor with value: [val]". Modify Middle1, Middle2, and Bottom constructors to also print their names. Bottom's constructor should take an integer argument and pass it to Top's constructor. Middle1 and Middle2 can also have constructors that attempt to call Top(some_other_value) (e.g., Middle1() : Top(100) {}). In main(), create Bottom obj(50);. Observe which Top constructor call takes precedence and why.

class Top{
    public:
    Top(){
        cout << "Top constructor called\n";
    };
    Top(int val){
        cout << "Top constructor with value "<< val << " is called\n";
    };
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
    public:
    Bottom(int a): Top(a){
        cout << "Bottom\n";
    };
};
int main(){
    Bottom obj(50);
};