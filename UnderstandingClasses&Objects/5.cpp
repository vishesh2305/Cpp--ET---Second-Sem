#include <iostream>
using namespace std;

// Create a class BankAccount with attributes accountNumber and balance. Implement methods deposit() and withdraw(). Ensure that the balance cannot go below zero.

class BankAccount{
    public:
    int accountnumber;
    int balance;
    void deposit(){
        int currbalance=0;
        cout << "Enter the amount to deposit : ";
        cin >> balance;
        currbalance += balance;
    };
    void withdraw(){
        cout << "Enter the amount you want to withdraw : ";
        int withdrawamount;
        cin >> withdrawamount;
        if(withdrawamount > balance){
            cout << "Insufficient Balance \n";

        } else{
            if(balance - withdrawamount <0){
                cout << "Amount cant be below Zero ";
            }else {
            cout << "Withdrawl Successfull\n";
            };
        };
        cout << "The current balance is : "<<balance;
    };

};





int main(){
    BankAccount b1;
    b1.accountnumber = 1234;
    b1.balance = 1000;
    b1.deposit();
    b1.withdraw();
}