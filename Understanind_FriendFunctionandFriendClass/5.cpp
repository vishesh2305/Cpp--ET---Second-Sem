#include <iostream>
#include <string>
using namespace std;

// Create a class BankAccount with private data members accountNumber (string) and balance (double). Create another class BankManager which is declared as a friend class to BankAccount. The BankManager class should have a public member function displayAccountDetails that takes a BankAccount object as an argument and prints its accountNumber and balance. In main(), create a BankAccount object, initialize it, then create a BankManager object and use it to display the bank account details.

class BankAccount{
    private:
    string accountNumber;
    double balance;
    public:
    BankAccount(const string acnum,const double balance): accountNumber(acnum), balance(balance){};
    friend class BankManager;
};

class BankManager{
    friend class BankAccount;
    public:
    void displayAccountDetails(BankAccount& obj){
        cout << obj.accountNumber << endl;
        cout << obj.balance<<endl;
    };
};

int main(){
    BankAccount b1("1234456", 1234.12);
    BankManager b2;
    b2.displayAccountDetails(b1);
    return 0;
}
