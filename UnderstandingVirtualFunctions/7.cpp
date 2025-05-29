#include <iostream>
using namespace std;



class A{
    public:
    virtual void func(){
        cout << "Func from A\n";
    };
};

class B: public A{
    public:
    void func() final override{
        cout << "Func from B\n";
    };
};


class C : public B{
    public:
    // void func() override{
    //     cout << "Func from C\n";
    // }


// Cannot override func in class C becuase it has been final override in class B !.

};