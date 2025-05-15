#include <iostream>
using namespace std;

// What is a static local object (an object declared with the static keyword inside a function)? How does its lifetime differ from a regular local object? Provide an example where a function getInstance() returns a reference to a static local object of class Singleton.

class Singleton{
    int data;
    Singleton(){
        data = 100;
        cout << "Constructor Initialized\n";
    };
    public:
    Singleton(const Singleton&) = delete;
    Singleton& operator=(const Singleton&) = delete;

    int getData(){
        return data;
    };
    int setData(int value){
        data = value;
        return value;
    };

    static Singleton& getInstance(){
        static Singleton instance;
        return instance;
    };



};



int main(){
    Singleton& s1 = Singleton::getInstance();
    cout << s1.getData()<<endl;
    s1.setData(200);
    Singleton& s2 = Singleton::getInstance();
    cout << s1.getData()<<endl;
    cout << s2.getData()<<endl;
    return 0;
}