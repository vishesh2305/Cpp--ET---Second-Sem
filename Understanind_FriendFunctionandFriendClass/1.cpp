#include <iostream>
using namespace std;

// Create a class Distance with private data members meters (int) and centimeters (int). Write a global (non-member) function addDistances that is a friend of the Distance class. This function should take two Distance objects as arguments, add their meters and centimeters (handle the case where total centimeters exceed 100), and display the resultant distance. Instantiate two Distance objects in main(), initialize them, and then use addDistances to display their sum.

class Distance{
    int meters;
    int centimeters;
    public:
    Distance(int meters, int centimeters): meters(meters), centimeters(centimeters){};
    friend void addDistances(const Distance& obj, const Distance& obj2);
};

void addDistances(const Distance& obj, const Distance& obj2){
    int totalmeters = obj.meters + obj2.meters;
    int totalcentimeters = obj.centimeters+obj2.centimeters;
    if(totalcentimeters >= 100){
        totalmeters += totalcentimeters/100;
        totalcentimeters = totalcentimeters%100;
    };
    cout << "Sum of Distances: "<< totalmeters<< " meters and "<<totalcentimeters<< " centimeters."<<endl;
};

int main(){
    Distance d1(10,104);
    Distance d2(20, 208);

    addDistances(d1, d2);

    return 0;
}