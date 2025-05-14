#include <iostream>
#include <string>
using namespace std;


// Pass an object to a pointer and modify its value



class Student{
    public:
    int rno;
    string name;

    Student(string name,int rno) : name(name), rno(rno) {};

    void display() const{
        cout << "The name of student is : "<<name <<" having roll number : "<<rno << endl;
    };

};

void updateStudent(Student* s1, string newname, int newrno){

    s1-> name = newname;
    s1 -> rno = newrno;

};

int main(){
    Student* s1 = new Student("abcd", 1234);
    cout << "Before updating the pointer: \n";
    s1 ->display();
    cout << "After updating the pointer: \n";
    updateStudent(s1, "bcda", 3421);
    s1 -> display();

    return 0;

}