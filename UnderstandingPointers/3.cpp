#include <iostream>
using namespace std;



// Define a Class Student and use a pointer to access its member variables

class Student{

    public:
    string name = "Vishesh";
    int rollnumber = 2916;

};




int main()
{
    
    Student* s1;
    Student s2;

    s1 = &s2;
    cout << s1 -> name << endl;
    cout << s1->rollnumber;

};