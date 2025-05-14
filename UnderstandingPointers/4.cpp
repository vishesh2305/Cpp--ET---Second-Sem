#include <iostream>
using namespace std;



// Create a class with a function and call it using a pointer to the object



class Student{
    public:
    string name = "Vishesh";
    int rollnumber =2916;

    void display(){
        cout << "name : "<< name <<endl;
        cout << "roll number : "<< rollnumber <<endl;
    };

};


int main()
{

    Student s1;
    Student* s2;

    string* name;
    int* rno;

    s2 = &s1;

    s2->display();
}