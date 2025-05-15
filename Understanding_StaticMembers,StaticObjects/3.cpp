#include <iostream>
using namespace std;

// How can you access a public static member variable of a class Config named version both from within a member function of Config and from outside the class (e.g., in main())? Provide code examples.

class Config{
    public:
    static int version;
    Config(){
        version += 10;
        cout << "Current version is : "<<version<<endl;
    };
    ~Config(){
        version -= 5;
        cout << "Current version is : "<<version<<endl;

    };
    void display();
};

void Config::display(){
    cout << version<<endl;
}

int Config::version;

int main(){
    Config c1;
    c1.display();
    Config c2;
    Config c3;
    Config c4;
    c4.display();
};