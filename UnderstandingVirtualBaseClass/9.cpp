#include <iostream>
using namespace std;



class Top{
    public:
    Top(){
        cout << "Top Constructor called\n";
    }
    ~Top(){
        cout << "Top Destructor Called\n";
    }
    int data = 1;
};

class ExtraBase{
    public:
    ExtraBase(){
        cout << "Extra Base Constructor Called\n";
    };
    ~ExtraBase(){
        cout << "Extra Base Destructor called\n";
    }
    void extra_data(){};
};

class Middle1 : virtual public Top{

    public:
    Middle1(){
        cout << "Middle1 constructor called\n";
    }
    ~Middle1(){
        cout << "Middle1 Destructor called\n";
    }
};

class Middle2 : virtual public Top{
    public:
    Middle2(){
        cout << "Middle2 constructor called\n";
    }
    ~Middle2(){
        cout << "Middle 2 Destructor called\n";
    };
};

class Bottom: public Middle1,public ExtraBase, public Middle2{
    public:
    Bottom(){
        cout << "Bottom constructor is called\n";
    }
    ~Bottom(){
        cout << "Bottom Destructor called\n";
    }
};


int main(){
    Bottom b1;
    Top* ptr_top = &b1;
    ptr_top->data;
}