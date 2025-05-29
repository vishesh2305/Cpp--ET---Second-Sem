#include <iostream>
using namespace std;

// Constructor and Destructor Order in Inheritance:

// Intent: Observe the order in which constructors and destructors are called in an inheritance hierarchy.
// Question: Create a base class Base with a constructor that prints "Base Constructor Called" and a destructor that prints "Base Destructor Called". Create a derived class Derived that inherits from Base. Derived should have its own constructor printing "Derived Constructor Called" and a destructor printing "Derived Destructor Called". In main(), create an object of the Derived class. Observe and explain the output. What happens if you create a Derived object dynamically and then delete it?

class Base{
    public:
    Base(){
        cout << "Base Constructor Called."<<endl;
    };
    ~Base(){
        cout << "Base Destructor Called."<<endl;
    };
};
class Derived: public Base{
    public:
    Derived(){
        cout << "Derived Constructor Called."<< endl;
    };
    ~Derived(){
        cout << "Derived Destructor called."<< endl;
    };
};

int main(){
    Base* b = new Derived();
    delete b;
    return 0;
};