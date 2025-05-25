#include <iostream>
using namespace std;

// Create two classes, ClassA and ClassB. Make ClassB a friend of ClassA. This means ClassB can access private and protected members of ClassA. In ClassB, write a member function that attempts to access a private member of ClassA (and succeeds). Now, in ClassA, write a member function that attempts to access a private member of ClassB. Does it work? Demonstrate and explain why or why not.

class A;
class B;
class A
{
private:
    friend class B;
    int a = 10;
public:
void getPrivateB(B& obj1);
};
class B
{
    private:
    int b = 20;
    friend class A;
public:
    void getprivate(A &obj)
    {
        cout << obj.a<<endl;
    }
};



void A::getPrivateB(B& obj1){
    cout << obj1.b<<endl;
};


int main(){
    A obj1;
    B obj2;
    obj2.getprivate(obj1);
    obj1.getPrivateB(obj2);

    return 0;
}