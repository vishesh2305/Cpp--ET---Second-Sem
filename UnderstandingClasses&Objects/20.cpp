#include <iostream>
using namespace std;

// What happens if you don't define a constructor for a class in C++? What about a destructor? Illustrate with a simple class.

class SimpleClass{
    public:
    int a;
    int b;
    void display(){
        cout << a+b << endl;
    }
    ~SimpleClass(){};
};
int main(){
    SimpleClass s1;
    s1.a = 10;
    s1.b = 29;
    s1.display();
}