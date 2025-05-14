#include <iostream>
using namespace std;

// Define a class Counter with a private integer member. Implement a constructor to initialize it to 0 and methods increment(), decrement(), and getValue().


class Counter{
    int integer;
    public:
    Counter(int integer) : integer(integer){};
    void increment(){
        integer++;
    }
    void decrement(){
        integer--;
    }
    void getValue(){
        cout << integer<<endl;
    }
};

int main(){
    Counter* c1 = new Counter(0);
    c1 ->increment();
    c1 ->increment();
    c1 ->increment();

    c1 -> decrement();
    c1 -> decrement();
    c1 -> decrement();
    c1 -> decrement();

    c1->getValue();

    return 0;
}