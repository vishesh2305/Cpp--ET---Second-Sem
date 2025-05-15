#include <iostream>
using namespace std;

// How can you call a public static member function Utility::doSomething() both from within another member function (static or non-static) of the Utility class and from outside the class?

class Utility{
    public:
    static void doSomething(){
        cout << "Function Called\n";
    };
    void callfunction(Utility& obj1){
        cout << "Calling from non static function\n";
        obj1.doSomething();
    };
    static void staticcalfunction(){
        cout << "Calling from static function\n";
        doSomething();
    };
};

void outsideclass(Utility& obj2){
    cout << "Calling the function outside the class : \n";
    obj2.doSomething();
};

int main(){
    Utility u1;
    u1.callfunction(u1);
    u1.staticcalfunction();
    outsideclass(u1);
    return 0;
}