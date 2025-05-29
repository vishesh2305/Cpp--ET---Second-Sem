#include <iostream>
using namespace std;

// Virtual Destructors:

// Intent: To understand the importance of virtual destructors when deleting derived class objects through a base class pointer.
// Question: Create a base class Resource with a constructor that prints "Resource acquired" and a non-virtual destructor that prints "Resource base released." Create a derived class FileResource that inherits from Resource. FileResource constructor prints "FileResource acquired", and its destructor prints "FileResource derived released." In main(), create a Resource* ptr = new FileResource(); and then delete ptr;. Observe the destructor calls. Now, change the destructor in Resource to be virtual ~Resource(). Rerun and observe the difference. Explain why a virtual destructor is needed.

class Resource{
    public:
    Resource(){
        cout << "Resource acquired\n";
    };
    virtual ~Resource(){
        cout << "Resource base released\n";
    };
};

class FileResource: public Resource{
    public:
    FileResource(){
        cout << "FileResource acquired\n";
    };
    ~FileResource(){
        cout << "FileResource derived released\n";
    };

};


int main(){
    Resource* ptr = new FileResource();


    delete ptr;


    return 0;
}