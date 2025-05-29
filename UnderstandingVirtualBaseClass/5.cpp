#include <iostream>
using namespace std;

// Virtual Base Class with Member Functions:

// Intent: To demonstrate accessing member functions of a virtual base class.
// Question: In the setup from Question 2 (with virtual inheritance): Add a public member function void show_data() to Top that prints the value of data. In main(), create a Bottom object, set its data member, and call object_bottom.show_data(). Verify it works as expected.

class Top{
    public:
    int data;
    Top(){
        cout << "Top constructor called\n";
    };
    Top(int val){
        data = val;
        cout << "Top constructor with value "<< val << " is called\n";
    };
    void show_data(){
        cout << data<<endl;
    };
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
    Bottom b(10);
    b.show_data();
    return 0;
}