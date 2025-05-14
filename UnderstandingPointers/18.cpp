#include <iostream>
#include <string>
using namespace std;
// Use a pointer to a memeber function in a class and invoke it
class Student
{
    string name;
    int rno;

public:
    Student(string name, int rno) : name(name), rno(rno) {};
    void attendence(string &name, int &rno)
    {
        cout << "The student " << name << " bearing roll number " << rno << " is present." << endl;
    };
    string getName() const
    {
        return name;
    };
    int getRno() const
    {
        return rno;
    };
};
int main()
{
    Student s1("alpha", 124);
    void (Student::*ptrtomemeberfunction)(string &, int &) = &Student::attendence;
    string StudentName = s1.getName();
    int StudentRno = s1.getRno();
    (s1.*ptrtomemeberfunction)(StudentName, StudentRno);
};