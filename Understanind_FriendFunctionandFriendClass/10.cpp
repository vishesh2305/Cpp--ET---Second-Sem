#include <iostream>
using namespace std;

// Create three classes: Alpha, Beta, and Gamma. Make Beta a friend of Alpha. Make Gamma a friend of Beta. In Beta, write a function that accesses a private member of Alpha (this should work). Now, in Gamma, write a function that attempts to access a private member of Alpha. Does Gamma have access to Alpha's private members just because it's a friend of Beta, which is a friend of Alpha? Demonstrate this scenario and explain the concept of non-transitive friendship.

class Alpha;
class Beta;
class Gamma;


class Alpha{
    private:
    int a = 10;
    friend class Beta;
};


class Beta{
    friend class Gamma;
    public:
    void acessAlpha(Alpha& alpha){
        cout << alpha.a<<endl;
    };
};

class Gamma{
    public:
    void accessAlpha2(Alpha& obj){
        // cout << obj.a<<endl;
    };
};

int main(){
    Alpha a1;
    Gamma g1;
    Beta b1;
    b1.acessAlpha(a1);
    g1.accessAlpha2(a1);

}