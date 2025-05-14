#include <iostream>
using namespace std;


// Create an array of pointers to objects and use them to call functions



class Student{
    public:
    string name;
    int rno;
    void display(string n, int rno){
        cout << n << " "<<rno<<endl;
    };
};


int main(){

    Student* ptr[3];
    
    for(int i=0; i<3; i++){
        ptr[i] = new Student();
    };
    ptr[0] -> display("vishesh", 2916);
    ptr[1] -> display("Sumedha", 3464);
    ptr[2] -> display("Tisha", 3469);
    ptr[3] -> display("Arshia Mahajan", 3408);


    return 0;


};