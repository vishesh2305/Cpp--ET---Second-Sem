#include <iostream>
using namespace std;

// Multiple Virtual Base Classes:
// Intent: To explore scenarios with more than one virtual base class.
// Question: Create a class Root1 and Root2, each with a distinct public integer member (r1_data, r2_data). Create a class CommonDerived that inherits virtually from both Root1 and Root2. In main(), create an object of CommonDerived. Initialize r1_data and r2_data through this object and print their values. Explain how CommonDerived manages these two distinct base subobjects.

class Root1{
    public:
    int r1_data;
};
class Root2{
    public:
    int r2_data;
};
class CommonDerived : virtual public Root1, virtual public Root2{
};
int main(){
    CommonDerived c1;
    c1.r1_data = 10;
    c1.r2_data = 20;
    cout << c1.r1_data << " and "<< c1.r2_data<<endl;
    return 0;
};