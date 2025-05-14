#include <iostream>
using namespace std;
// Pass a function as an argument using function pointer....
int add(int a, int b){
    return a+b;
};
void calculate(int a, int b, int(*funcptr)(int , int)) {
    int result = funcptr(a,b);
    cout << "The result is : "<< result << endl;
}
int main(){
    calculate(3,5 , add);
    return 0;
}