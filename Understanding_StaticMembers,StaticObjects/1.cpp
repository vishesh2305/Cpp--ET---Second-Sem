#include <iostream>
using namespace std;

// Basic Declaration and Definition:
// How do you declare a static integer member variable named count within a class MyClass? Where and how must this static member variable be defined? Write a small code snippet to demonstrate.


class MyClass{
    static int count;
    public:
    void incdisplaycount(){
        count++;
        cout << count<<endl;
    }

};
int MyClass::count;
int main(){
    MyClass obj1;
    obj1.incdisplaycount();
    obj1.incdisplaycount();
    obj1.incdisplaycount();
    obj1.incdisplaycount();
};