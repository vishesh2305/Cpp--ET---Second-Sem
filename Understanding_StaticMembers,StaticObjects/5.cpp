#include <iostream>
using namespace std;

// How do you declare and initialize a const static integer member maxVal to 100 directly within the class definition of Constants? Is an external definition required in this case?

class Constants{
    public:
    static const int a = 100;
    Constants(){
        cout << "Object called and current value of a is : "<<a <<endl;
    };
    ~Constants(){
        cout << "Destructor called : "<<a<<endl;
    }

};
int main(){
    Constants c1;
    Constants c2;
    Constants c3;
    Constants c4;
    Constants c5;
}