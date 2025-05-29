#include <iostream>
using namespace std;

// explicit Conversion Constructor:
// Intent: Prevent implicit conversions using a constructor, requiring an explicit cast.
// Question: Modify the MyNumber class from Q1. Make the conversion constructor explicit. Now, try displayMyNumber(10); again. What happens? How do you fix it while still using the conversion constructor (i.e., using an explicit cast)?


class MyNumber{
    int a;
    public:
    explicit MyNumber(int a): a(a){};

    int getValue() const{
        return a;  
};


};

void displayMyNumber(MyNumber mn){
    cout << mn.getValue()<<endl;
};


int main(){
    MyNumber mn = MyNumber(10);
    displayMyNumber(mn);
    return 0;
};