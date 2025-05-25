#include <iostream>
using namespace std;

// Design a class Student with private members rollNumber (int) and grade (char). Create a friend class Teacher. The Teacher class should have a member function updateGrade that takes a Student object (by reference) and a new grade (char) as arguments. This function should be able to modify the grade of the Student object. In main(), create a Student object, display its initial grade, then create a Teacher object and use its updateGrade function to change the student's grade. Display the updated grade.

class Student{
    private:
    int rollNumber;
    char grade;
    friend class Teacher;
    public:
    Student(int rno, char grade): rollNumber(rno), grade(grade){};
    void display(){
        cout << rollNumber<<endl;
        cout << grade << endl;
    }
};
class Teacher{
    public:
    void updateGrade(Student& obj, char newgrade){
        obj.grade = newgrade;
    };
};

int main(){
    Student s1(12345678, 'A');
    s1.display();
    Teacher t1;
    t1.updateGrade(s1,'B');
    s1.display();

    return 0;
};