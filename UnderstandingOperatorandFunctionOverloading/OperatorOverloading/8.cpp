#include <iostream>
using namespace std;

// Concept: Differentiating between pre-increment and post-increment operator overloading.
// Task: Create a class Counter with an integer member count.
// Overload the pre-increment operator (++count_obj). It should increment the count and return a reference to the modified Counter object (*this).
// Overload the post-increment operator (count_obj++). It should store the current state of the Counter object, increment the count of the actual object, and then return the stored (original) state by value. The post-increment operator takes an int dummy parameter to distinguish it from the pre-increment version.
// Intention: To understand the distinct signatures and return value conventions for pre-fix and post-fix versions of increment/decrement operators.

class Counter{
    int count;
    public:
    Counter(int count): count(count){};

    Counter& operator++(){
        ++count;
        return *this;
    };
    Counter operator++(int){
        Counter temp = *this;
        ++count;
        return temp;
    };

    void display() const{
        cout << "Count : "<< count << endl;
    };
};

int main(){
    Counter c1(1);
    c1.display();

    ++c1;
    c1.display();
    Counter c2 = c1++;
    c2.display();
    c1.display();
    return 0;



}