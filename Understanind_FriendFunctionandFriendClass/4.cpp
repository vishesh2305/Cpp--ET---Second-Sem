#include <iostream>
using namespace std;

// Create a class Counter with a private integer data member count. Overload the pre-increment operator (++obj) using a friend function. This function should take a reference to a Counter object, increment its count member, and return a reference to the modified object. In main(), create a Counter object, demonstrate the pre-increment operator, and display the value of count before and after the operation.

class Counter{
    private:
    int count;
    public:
    Counter(int c=0): count(c){};
    friend Counter operator++(Counter& c1);
    void display(){
    cout << count<<endl;
    };
};

Counter operator++(Counter& c1){
    ++c1.count;
    return c1;
};

int main(){
    Counter obj;
    cout << "Before increment\n";
    obj.display();
    cout << "After increment\n";
    ++obj;
    obj.display();
    return 0;
};