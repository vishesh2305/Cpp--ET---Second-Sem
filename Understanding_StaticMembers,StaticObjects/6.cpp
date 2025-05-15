#include <iostream>
#include <string>
using namespace std;

// Why might you declare a static member variable as private? How would you then provide controlled access to it (e.g., for reading its value)? Illustrate with a class Logger that has a private static string logFile and a public static method to get the log file name.

class Logger{
    static string logFile;
    public:
    static void display(){
        cout << "The name of logfile is : "<<logFile<<endl;
    };
    static void setNewName(const string& newName){
        logFile = newName;
    };
};
string Logger::logFile = "Alpha Static";

int main(){
    Logger l1;
    l1.display();
    l1.setNewName("Alpha Vishesh");
    l1.display();
    return 0;
};