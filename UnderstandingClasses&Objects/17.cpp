#include <iostream>
using namespace std;

// Define a class Timer with an integer seconds. Write a constructor to set the initial seconds. Add a destructor that prints "Timer expired".

class Timer {
    int seconds;
    public:
    Timer(int seconds): seconds(seconds) {};
    ~Timer(){
        cout << "Timer expired !."<<endl;
    };
};


int main(){
    Timer t1(10);

}