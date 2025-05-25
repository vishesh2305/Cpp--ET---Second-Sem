#include <iostream>
using namespace std;

void modify(int* a){
    *a += 10;
    cout << "Modifying via pointer : "<< *a <<endl;
};

void modify(int& b){
    b+=5;
    cout << "Modifying via reference : "<< b << endl;
};

int main(){

    int value = 5;
    modify(&value);  // Passing by pointer;
    modify(value);  // Passing by reference;
    return 0;
};