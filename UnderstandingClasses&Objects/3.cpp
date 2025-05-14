#include <iostream>
using namespace std;


// Define a class Student with attributes name, rollNumber, and grade. Implement a method to set these attributes and another method to display them.



class Student{

    public:
    string name;
    int rollNumber;
    char grade[10];
    void setdetails(){
        cout << "Enter your name : ";cin>>name;
        cout << "\nEnter your Roll Number : ";cin >>rollNumber;
        cout << "\nEnter the Grade of Student : ";cin>>grade[10];
    };
    void display(){
        cout << "\nThe name of student is : "<<name<<"\n";
        cout << "The roll number of student is : "<<rollNumber<<"\n";
        cout << "The grade of student is : "<<grade[10]<<"\n";
    };

};


int main(){
    Student s1;
    s1.setdetails();
    s1.display();
}