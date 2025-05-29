#include <iostream>
using namespace std;


class Dollar;
class Rupee{
    int amount;
    public:
    Rupee(int amount): amount(amount){};
    operator Dollar() const;
};

class Dollar{
    double amount;
    public:
    Dollar(double amount): amount(amount){};

    double getAmount() const {
        return amount;
    };
};

Rupee::operator Dollar() const{
    return Dollar(amount/80.0);
}


int main(){
    Rupee r(13903);
    Dollar d = r;
    cout << d.getAmount() << endl;

    return 0;
};