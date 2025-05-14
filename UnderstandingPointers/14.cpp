#include <iostream>
using namespace std;

// Write a callback function system using function pointers

int recalc(int a){
    int result = a+a;
    cout << result+1 << endl;
    return result;
};

int task(int a, int (*funcptr)(int)){
    int result1 = funcptr(a);
    cout << result1 << endl;
    return result1;
}

int main(){

    task(3, recalc);
    return 0;
}