#include <iostream>
using namespace std;



// Implement a simple event handler using function pointers ;



void onstart(){
    cout << "Event Started : \n";
};

void onend(){
    cout << "Event Ended : \n";
};


typedef void (*Eventhandler)();

void randomfunction(int eventcode, Eventhandler handlers[])
{
    if(eventcode >= 0 && eventcode<2){
        handlers[eventcode]();
    } else {
        cout << "Invalid event code !"<<endl;
    }
}


int main(){
    Eventhandler handlers[2];
    handlers[0] = onstart;
    handlers[1] = onend;

    int choice;
    cout << "Enter the event to trigger : \n";
    cin >> choice;

    randomfunction(choice, handlers);
};