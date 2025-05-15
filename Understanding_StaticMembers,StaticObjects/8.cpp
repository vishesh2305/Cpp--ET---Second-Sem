#include <iostream>
using namespace std;

// How do you declare a static member function named getInfo within a class Utility that returns an integer?

class Utility{
    public:
    static int getInfo(int a){
        cout << "This is a Static function \n";
        cout << a;
        return a;
    };
};

int main(){
    Utility u1;
    u1.getInfo(2);
}