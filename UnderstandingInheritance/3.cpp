#include <iostream>
using namespace std;

// Access Specifiers (public, protected, private Inheritance):

// Intent: Understand how different types of inheritance affect the accessibility of base class members in the derived class and from outside.
// Question: Create a base class Item with public, protected, and private integer members (e.g., public_id, protected_value, private_secret). Create three derived classes:
// PublicDerived inheriting publicly from Item.
// ProtectedDerived inheriting protectedly from Item.
// PrivateDerived inheriting privately from Item. Inside each derived class, try to access all three members of Item within a member function. In main(), create objects of each derived class and try to access the inherited public_id from outside the class. Document which accesses are allowed and which result in compiler errors, and explain why based on the type of inheritance.

class Item{
    private:
    int a = 12;
    protected:
    int b = 13;
    public:
    int c = 19;  
};

class PublicDerived: public Item{
    public:
    void display(){
        cout << c<<endl;
        cout << b<<endl;
        // cout << a << endl;
    };

};

class ProtectedDervied : protected Item{
    public:
    void display(){
        cout << c<<endl;
        cout << b<<endl;
        // cout << a << endl;
    };
};

class PrivateDerived : private Item{
    public:
    void display(){
        cout << c<<endl;
        cout << b<<endl;
        // cout << a << endl;
    };
};


int main(){
    PublicDerived p;
    PrivateDerived pd;
    ProtectedDervied prd;
    p.display();
    pd.display();
    prd.display();
};