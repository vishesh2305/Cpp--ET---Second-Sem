#include <iostream>
using namespace std;

// Create a class Employee with attributes employeeId and salary. Write a method to give a 10% raise to the employee.

class Employee{
    int employeeId;
    int salary;
    public:
    Employee (int employeeId, int salary) : employeeId(employeeId), salary(salary) {};
    void increaseinSalary(){
        int raisedsalary = salary + (0.1*salary);
        cout << "Congratulations to employee "<<employeeId<< " Your Salary has been incremented by 10% and has now become "<<raisedsalary <<endl;
    }
};

int main(){
    Employee* e1= new Employee(129203, 13000);
    e1->increaseinSalary();
}