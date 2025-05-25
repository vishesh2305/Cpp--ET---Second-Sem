#include <iostream>
using namespace std;

// Question 5: Overloading the == (Equality) Operator for Vector2D

// Concept: Overloading comparison operators.
// Task: For the Vector2D class, overload the == operator. It should return true if two Vector2D objects have the same x and y coordinates, and false otherwise.
// Intention: To allow logical comparisons between objects of your class. Once == is defined, it's often good practice to define != as well.



class Vector2D{

    int x,y;
    public:
    Vector2D(int x, int y): x(x), y(y){};


    bool operator==(const Vector2D& obj) const {
        return (x == obj.x && y == obj.y);
    };
};

int main(){
    Vector2D obj(2,3);
    Vector2D obj1(12,3);
    Vector2D obj2(2,3);

    if(obj == obj1){
        cout << "True"<<endl;
    } else{
        cout << "False"<<endl;
    };

    if(obj1 == obj2){
        cout << "True"<<endl;
    } else {
        cout << "False"<<endl;
    };

    if(obj == obj2){
        cout << "True"<<endl;
    } else {
        cout << "False"<<endl;
    };


    return 0;
}