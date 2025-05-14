#include <iostream>
using namespace std;



class School{
    private:
    int numberstudents;
    int numberteachers;
    string nameschool;
    public:
    School(int numberstudents, int numberteachers, string nameschool) : numberstudents(numberstudents), numberteachers(numberteachers), nameschool(nameschool){}; 
    friend void display(School* obj);

};


void display(School* obj){
    cout << "There are "<<obj -> numberstudents << " students in the "<< obj -> nameschool << " which has "<<obj -> numberteachers<< " teachers in the school"<<endl;
};


int main(){

    School* obj = new School(1000, 100, "Sangrur Public School");
    display(obj);
    delete obj;
    obj = nullptr;
    return 0;
};