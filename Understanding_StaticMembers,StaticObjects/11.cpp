#include <iostream>
using namespace std;

// Write a class Counter with a private static integer currentCount and a public static member function incrementCount() that increments currentCount, and another public static member function getCount() that returns its value. Show how to use these functions

class Counter{
    private:
    static int currentCount;
    public:
    static void incrementCount(){
        currentCount++;
    };
    static void getCount(){
        cout << currentCount<<endl;
    };
};

int Counter::currentCount;

int main(){
    Counter::getCount();
    Counter c1;
    Counter::incrementCount();
    Counter::incrementCount();
    Counter::incrementCount();
    Counter::incrementCount();
    Counter::getCount();
}