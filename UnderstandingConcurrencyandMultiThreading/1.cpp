#include <iostream>
#include <thread>
#include <vector>
#include <string>
using namespace std;

void print_message(const string& message, int count){
    for(int i=0; i< count; i++){
        cout << "Thread Id: "<< this_thread::get_id()<<" says "<< message << endl;
    };
};


int main(){

    
    thread t1(print_message, "Hello from CPP Thread", 2);

    cout << "Main thread Created t1. Main thread ID: "<< this_thread::get_id()<< endl;

    for(int i=0; i<2; i++ ){
        cout << "Main thread Working : "<< endl;
    };




    if(t1.joinable()){
        t1.join();
    };

    // t1.join();
    // cout << "Thread t1 finished, main thread exiting."<< endl;
    return 0;
};