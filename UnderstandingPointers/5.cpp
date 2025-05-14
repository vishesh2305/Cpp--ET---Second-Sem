#include <iostream>
using namespace std;

// Write a program to dynamically allocate memory for an object using a pointer;

class Student{
    public:
    string name;
    int rno;
    Student(string str, int value) : name(str),rno(value){};

    void display(){
        cout << "The name of student is : "<<name<< " having roll number : "<<rno<< endl;
    };
};



int main() {

    Student* s1 = new Student("Vishesh",2916);
    s1 -> display();


}