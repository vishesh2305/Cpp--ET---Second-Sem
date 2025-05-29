#include <iostream>
using namespace std;

// Conversion Constructor (Another Class type to Class type):

// Intent: Define conversion from one user-defined type to another using a conversion constructor in the destination class.
// Question:
// Use the Rupee and Dollar classes from Q5.
// This time, instead of a conversion operator in Rupee, add a conversion constructor to the Dollar class: Dollar(const Rupee& r); that takes a Rupee object and initializes the Dollar object based on an exchange rate.
// Demonstrate: Rupee r(1600); Dollar d = r; (or Dollar d(r);) std::cout << "Dollars: " << d.getAmount() << std::endl;.

class Dollar;
class Rupee{
    int amount;
    public:
    Rupee(int amount): amount(amount){};

    int getAmount() const{
        return amount;
    };

};

class Dollar{
    double amount;
    public:
    Dollar(const Rupee& r){
        amount = r.getAmount() / 80.0;
    };

    double getAmount() const {
        return amount;
    };
};



int main(){
    Rupee r(1690);
    Dollar d = r;
    cout << d.getAmount()<<endl;

    return 0;
}