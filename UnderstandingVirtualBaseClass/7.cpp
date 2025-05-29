#include <iostream>
using namespace std;




class Top{
    public:
    Top(){
        cout << "Top Constructor called\n";
    }
    int data = 1;
};

class ExtraBase{
    public:
    ExtraBase(){
        cout << "Extra Base Constructor Called\n";
    };
    void extra_data(){};
};

class Middle1 : virtual public Top{

    public:
    Middle1(){
        cout << "Middle1 constructor called\n";
    }
};

class Middle2 : virtual public Top{
    public:
    Middle2(){
        cout << "Middle2 constructor called\n";
    }
};

class Bottom: public Middle1,public ExtraBase, public Middle2{
    public:
    Bottom(){
        cout << "Bottom constructor is called\n";
    }
};


int main(){
    Bottom b;
    return 0;
};