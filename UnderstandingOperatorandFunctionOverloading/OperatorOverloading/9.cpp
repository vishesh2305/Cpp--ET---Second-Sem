#include <iostream>
#include <cstring>
using namespace std;

// Question 9: Overloading the Assignment Operator (=) for a Class with Dynamic Memory
// Concept: Proper handling of deep copy and self-assignment in assignment operator overloading, especially for classes managing dynamic resources.
// Task: Create a class MyString that has a char* member to store a C-style string and an integer for its length. This string should be dynamically allocated.
// Implement a constructor that takes a const char* to initialize MyString.
// Implement a destructor to free the dynamically allocated memory.
// Overload the assignment operator (=). It must:
// Handle self-assignment (e.g., str1 = str1;).
// Free any memory currently held by the MyString object on the left-hand side.
// Allocate new memory and copy the string content from the right-hand side MyString object (deep copy).
// Return a reference to the current object (*this).
// Intention: This is a critical operator to overload correctly (as part of the "Rule of Three/Five/Zero") when your class manages resources to prevent shallow copies and memory leaks.

class MyString{
    char* str;
    int length;
    public:
    MyString(const char* input){
        length = strlen(input);
        str = new char[length + 1];
        strcpy(str, input);
    };
    ~MyString(){
        delete[] str;
    };
    MyString& operator=(const MyString& obj){
        if(this == &obj){
            return *this;
        };
        delete[] str;
        length = obj.length;
        str = new char[length + 1];
        strcpy(str, obj.str);
        return *this;
    };
    void display() const {
        cout << "String : "<< str <<" & "<< " length : "<< length << endl;
    };  
};
int main(){
    MyString s1("Hello");
    MyString s2("World");
    MyString s3("");
    s1.display();
    s2.display();
    s3 = s2;
    s2 = s1;
    s1 = s3;
    s1.display();
    s2.display();
    return 0;
}