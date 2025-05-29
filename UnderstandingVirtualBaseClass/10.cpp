#include <iostream>
#include <string>
using namespace std;
// Real-World Analogy (Conceptual Coding):
// Intent: To solidify the "why" behind virtual base classes with a conceptual example.
// Question: Consider a Person class. A Student is a Person, and an Employee is a Person. A TeachingAssistant is both a Student and an Employee. Sketch out the class structure for Person, Student, Employee, and TeachingAssistant. Implement this structure. Person should have a name attribute. TeachingAssistant should only have one name. Use virtual inheritance for Student and Employee from Person. Add constructors to initialize names and methods to display information. Demonstrate creating a TeachingAssistant and accessing their single name.


class Person{
    public:
    string name;
    Person(){};
    Person(string name): name(name){};
};
class Student : virtual public Person{
    public:
    Student(){};
};
class Employee : virtual public Person{
    public:
    Employee(){};
};
class TeachingAssistant : virtual public Employee, virtual public Student{
    public:
    TeachingAssistant(string name): Person(name), Student(), Employee(){};
    void display(){
        cout << Person::name<<endl;
    }
};

int main(){
    TeachingAssistant t1("alpha");
    t1.display();
    return 0;
};