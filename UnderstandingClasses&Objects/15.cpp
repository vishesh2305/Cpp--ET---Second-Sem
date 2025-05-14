#include <iostream>
#include <cstring>
using namespace std;

// Write a C++ program with a class MyString. Implement a constructor that takes a C-style string (char*) to initialize an internal character array. Implement a destructor to free any dynamically allocated memory. (Focus on the constructor/destructor concept, not a full string class).

class MyString{
    private:
    char* str;
    public:
    MyString(const char* input){
        if(input){
            str = new char[strlen(input) + 1];
            strcpy(str, input);
        } else{
            str = nullptr;
        };
    };
    ~MyString(){delete[] str;};

    void display(){
        cout << str << endl;
    };
};

int main(){
    MyString s("Hello World");
    s.display();

    return 0;
}