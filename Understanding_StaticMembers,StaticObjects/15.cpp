#include <iostream>
using namespace std;

// When is a static local object initialized? Is it initialized every time the function is called, or only the first time? Write a small program with a function containing a static object whose constructor prints a message, and call the function multiple times to observe.

class A
{
public:
    A()
    {
        cout << "Constructer Called\n";
    };
};
void abc()
{
    static A a;
    cout << "Function Called \n";
};

int main()
{
    abc();
    abc();
    abc();
    abc();
    abc();
}