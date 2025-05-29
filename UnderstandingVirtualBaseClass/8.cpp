#include <iostream>
using namespace std;

// Casting and Virtual Base Classes:

// Intent: To understand how static_cast and dynamic_cast (if RTTI is involved with virtual functions later) might behave with pointers in a virtual inheritance hierarchy. (Focus on static_cast for now if virtual functions are not yet introduced for polymorphism).
// Question: Using the setup from Question 2: In main(), create a Bottom object. Create a Top* ptr_top = &object_bottom;. Access data through ptr_top. Try to static_cast ptr_top to Middle1* or Middle2*. Explain any observations. (Note: dynamic_cast is more relevant when virtual functions are present in Top for polymorphic behavior).


class Top{
    public:
    Top(){
        cout << "Top Constructor called\n";
    }
    int data = 1;
};

class ExtraBase{
    public:
    ExtraBase(){
        cout << "Extra Base Constructor Called\n";
    };
    void extra_data(){};
};

class Middle1 : virtual public Top{

    public:
    Middle1(){
        cout << "Middle1 constructor called\n";
    }
};

class Middle2 : virtual public Top{
    public:
    Middle2(){
        cout << "Middle2 constructor called\n";
    }
};

class Bottom: public Middle1,public ExtraBase, public Middle2{
    public:
    Bottom(){
        cout << "Bottom constructor is called\n";
    }
};


int main(){
    Bottom b1;
    Top* ptr_top = &b1;
    ptr_top->data;
};