#include <iostream> 
using namespace std;

// Question 2: Overloading the Unary - Operator (Negation) for Vector2D

// Concept: Overloading a unary operator.
// Task: For the Vector2D class from Question 1, overload the unary - operator. When applied to a Vector2D object, it should return a new Vector2D object where both x and y coordinates are negated.
// Intention: To understand how to overload operators that take only one operand.


class Vector2D{
    private:
        int x,y;
    public:
        Vector2D(int x = 0, int y = 0): x(x), y(y){};

    //     Vector2D operator+(Vector2D const& obj){
    //     Vector2D vec1;
    //     vec1.x = x + obj.x;
    //     vec1.y = y+obj.y;
    //     return vec1;
    // };

        Vector2D operator-() const {
            return Vector2D(-x,-y);
        };

    void display() const{
        cout << " The new x is : "<< x << " and the new y is : "<<y<<"."<<endl;
    };

};

int main(){
    Vector2D vec1(10,20);
    Vector2D vec2 = -vec1 ;
    vec2.display();

    return 0;   
}
