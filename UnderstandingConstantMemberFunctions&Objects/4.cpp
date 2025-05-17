#include <iostream>
#include <vector>
using namespace std;

class DataBuffer{
    vector<int> dynamicarr;
    public:
    DataBuffer(int size, int defaultvalue=0): dynamicarr(size, defaultvalue){};
    ~DataBuffer(){};

    int& getElement(int index){
        return dynamicarr[index];
    };
    const int& getElement(int index) const {
       return dynamicarr[index];
    };
};


int main(){
    DataBuffer Buffer(5, 10);
    Buffer.getElement(3) = 23;
    cout << Buffer.getElement(3)<<endl;


    const DataBuffer constbuffer = Buffer;
    // constbuffer.getElement(3) = 100;
    cout << constbuffer.getElement(3)<<endl;

    return 0;
}