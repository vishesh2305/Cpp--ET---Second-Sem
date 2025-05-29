#include <iostream>
#include <string>
using namespace std;
// Calling Base Class Constructors with Arguments:

// Intent: Learn how to explicitly call a specific base class constructor from a derived class constructor, especially when the base constructor requires arguments.
// Question: Create a base class Person with a constructor Person(std::string name, int age) that initializes private members _name and _age, and a display() method to print them. Create a derived class Employee that inherits from Person. Employee should have an additional member std::string employee_id. The Employee constructor should take name, age, and employee_id as arguments. It must initialize the Person part of the object using the Person constructor. Add a display() method to Employee that first calls Person::display() and then prints the employee_id. Demonstrate creating an Employee object in main() and calling its display() method.


class Person{
    private:
    string _name;
    int _age;
    public:
    Person(string name , int age): _name(name), _age(age){};
    void display(){
        cout << _name<<" "<< _age<< " ";
    }
};

class Employee : public Person{
    string employee_id;
    public:
    Employee(string name, int age , string employeeid): Person(name, age), employee_id(employeeid) {};

    void display(){
        Person::display();
        cout << employee_id << endl;
    }
};

int main(){
    Employee e1("Sumedha", 28, "abcd");

    e1.display();

    return 0;
}