#include <iostream>
#include <string>
using namespace std;

// Can a class have multiple constructors? Demonstrate with a Person class that can be initialized with just a name, or with a name and age.



class Person{
    string name;
    int age;
    public:
    Person(): name("default"), age(0){
        cout << "This is default constructor\n";
    };  // Default constructor
    Person(string name, int age): name(name), age(age){
        cout << "This is Parameterized Constructor\n";
    };  // Constructor with a parameter.....

    ~Person(){};
};

int main(){
    Person p1;
    Person p2("Vishesh", 19);
    return 0;
}