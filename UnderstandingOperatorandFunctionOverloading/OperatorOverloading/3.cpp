#include <iostream> 
using namespace std;

class Vector2D{
    int x, y;
    public:
    Vector2D(int x , int y): x(x), y(y){};

    friend ostream& operator<<(ostream& os, const Vector2D obj);
};


ostream& operator<<(ostream& os, const Vector2D obj){
    os<< obj.x << " "<< obj.y;
    return os;
    
};


int main(){
    Vector2D obj(2,5);

    cout <<obj;

    return 0;
}