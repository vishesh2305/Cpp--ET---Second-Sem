#include <iostream>
using namespace std;

// Use a function pointer array to call different arithmetic operations

int add(int a, int b){
    cout << a+b << endl;
    return a+b;
}
int sub(int a, int b){
    cout << a-b << endl;
    return a-b;
}

int(*operations[2])(int , int ){
};

int main(){

    operations[0] = add;
    operations[1] = sub;


    operations[0](2,5);
    operations[1](2,5);




    return 0;
};