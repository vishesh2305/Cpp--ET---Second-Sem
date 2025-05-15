#include <iostream>
using namespace std;

// Can a static member variable be initialized inside the class definition? If not, why? If yes, under what conditions? Demonstrate with an example.

class example{
    public:
    static const int a = 0;
    example(){
        cout << a<<endl;
    }
    void display(){
        cout << a << endl;
    }
};

int main(){
    
    example e1;
    example e2;
    example e3;
    example e4;
}