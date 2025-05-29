#include <iostream>
using namespace std;



class InputDevice{
    public:
    void getInput(){
        cout << "Receiving Input "<< endl;
    }
};


class OutputDevice{
    public:
    void showOutput(){
        cout << "Displaying Output"<< endl;
    }
};


class ComputerTerminal : public InputDevice, public OutputDevice{
};


int main(){
    ComputerTerminal c1;
    c1.getInput();
    c1.showOutput();

    return 0;
}