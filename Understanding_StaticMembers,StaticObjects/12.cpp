#include <iostream>
using namespace std;

// Why are static member functions often used for utility or helper functions that don't depend on the state of a specific object? Provide a hypothetical example of a class MathHelper with a static function square(int num).

class MathHelper{
    public:
    static int square(int num){
        cout << num*num << endl;
        return num*num;
    };
};

int main(){
    MathHelper::square(20);
    MathHelper::square(22);
    MathHelper::square(26);
    return 0;
}