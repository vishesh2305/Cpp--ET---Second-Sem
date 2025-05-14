#include <iostream>
using namespace std;

// Demonstrate using a pointer to a static class memeber function.

class Student{
    public:
    string name;
    int rno;
    static void attendence(string &name, int &rno){
    cout << "The student " << name << " bearing roll number " << rno << " is present." << endl;
    }
};

int main(){

    void(*funptr)(string& , int&);
    funptr = &Student::attendence;

    string name="abcd";
    int rno= 1234;
    funptr(name, rno);


}