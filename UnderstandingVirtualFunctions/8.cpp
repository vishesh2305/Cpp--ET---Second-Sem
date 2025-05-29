#include <iostream>
using namespace std;

// Virtual Functions and Default Arguments:
// Intent: To understand how default arguments behave with virtual functions (they are bound statically).
// Question: Create a base class Base with virtual void print(int x = 10) { std::cout << "Base: " << x << std::endl; }. Create a derived class Derived inheriting Base with void print(int x = 20) override { std::cout << "Derived: " << x << std::endl; }. In main(), create Base* b_ptr = new Derived();. Call b_ptr->print(); (without arguments). Observe which default argument value is used and explain why.
class Base{
    public:
    virtual void print(int x=10){
        cout << "Base: "<< x<< endl;
    };
};
class Derived : public Base{
    public:
    void print(int x = 20) override{
        cout << "Derived: "<< x<<endl;
    };
};
int main(){
    Base* b_ptr= new Derived();
    b_ptr->print();
    return 0;
};