#include <iostream>
using namespace std;

class Vector2D{
    int x,y;
    public:
    Vector2D(int x=0, int y=0): x(x), y(y){};
    friend istream& operator>>(istream& is,  Vector2D& obj1);


    void display() const{
        cout << "("<< x <<","<< y<< ")"<< endl;
    };



};


istream& operator >> (istream& is, Vector2D& obj1){
    cout << "Enter the value of x and y : "<< endl;
    is >> obj1.x >> obj1.y;
    return is;
}


int main(){
    Vector2D vec;
    cin >> vec;
    vec.display();

    return 0;
}