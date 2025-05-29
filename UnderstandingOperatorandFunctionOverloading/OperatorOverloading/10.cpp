#include <iostream>
using namespace std;

// Question 10: Overloading Conversion Operator to bool for a Status Class
// Concept: Overloading conversion operators to allow objects of a class to be implicitly converted to another type.
// Task: Create a class Status that has a boolean member isOk.
// Overload the conversion operator to bool (i.e., operator bool() const;). This operator should return the value of isOk.
// This will allow you to use Status objects in boolean contexts, for example:
// C++
// Status currentStatus;
// // ... set status somehow ...
// if (currentStatus) { // This uses the overloaded conversion to bool
//     // do something if status is OK
// }
// Intention: To allow objects to be used in contexts expecting a different type, providing a more natural syntax. Be cautious with implicit conversions as they can sometimes lead to unexpected behavior if not designed carefully. The explicit keyword can be used with conversion operators to prevent implicit conversions if desired.

class Status{
    bool isOk;

    public:
    Status(bool isOk): isOk(isOk){};

    operator bool() const{
        return isOk;
    };
};

int main(){
    Status s1(false);
    if(s1){
        cout << "Status is OK "<<endl;
    } else {
        cout << " Status is not OK "<<endl;
    };


    bool flag = static_cast<bool>(s1);
    cout << "Explicit bool value : "<< flag << endl;

    return 0;
};
