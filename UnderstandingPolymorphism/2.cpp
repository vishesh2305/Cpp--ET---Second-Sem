#include <iostream>
using namespace std;

// Polymorphism with Function Arguments:
// Intent: To write a function that accepts a base class pointer (or reference) and operates polymorphically on different derived class objects passed to it.
// Question: Create a base class Worker with a virtual double calculatePay() const = 0;. Create derived classes SalariedWorker (fixed salary) and HourlyWorker (pay based on hours worked and rate). Implement calculatePay() in each. Write a global function void printPayroll(const Worker& w) that calls w.calculatePay() and prints the result. In main(), create SalariedWorker and HourlyWorker objects and pass them to printPayroll.
class Worker{
    public:
    virtual double calculatePay() const = 0;
};
class SalariedWorker: public Worker{
    public:
    int salary;
    SalariedWorker(const int salary) : salary(salary){};
    double calculatePay() const{
        return salary;
    };
};
class HourlyWorker: public Worker{
    int hours, price;
    public:
    HourlyWorker(int hours,const int price): hours(hours), price(price){};
    double calculatePay() const{
        return (hours*price);
    };
};
void printPayroll(const Worker& w){
    cout << w.calculatePay()<< endl;
};
int main(){
    SalariedWorker sw(1000);
    HourlyWorker hw(4, 500);
    printPayroll(sw);
    printPayroll(hw);
    return 0;
};