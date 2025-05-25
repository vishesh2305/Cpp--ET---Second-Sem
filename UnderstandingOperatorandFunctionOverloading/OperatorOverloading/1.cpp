#include <iostream> 
using namespace std;

// Question 1: Overloading the Binary + Operator for a Vector2D Class

// Concept: Overloading an arithmetic operator to perform a custom operation (vector addition).
// Task: Create a class Vector2D with x and y integer coordinates. Overload the + operator so that when you add two Vector2D objects, it returns a new Vector2D object whose x is the sum of the x coordinates of the operands, and y is the sum of their y coordinates.
// Intention: To learn the basic syntax for overloading a binary operator as a member function or a non-member (friend) function.


class Vector2D{
    private:
        int x,y;
    public:
        Vector2D(int x = 0, int y = 0): x(x), y(y){};

        Vector2D operator+(Vector2D const& obj){
        Vector2D vec1;
        vec1.x = x + obj.x;
        vec1.y = y+obj.y;
        return vec1;
    };

    void display() const{
        cout << " The new x is : "<< x << " and the new y is : "<<y<<"."<<endl;
    };

};

int main(){
    Vector2D v1(10,20), v2(20,30);
    Vector2D v3 = v1+v2;
    v3.display();
    return 0;
};