#include <iostream>
using namespace std;



class AccessCounter{
    int resourceId;
    mutable int accessCount;
    public:
    AccessCounter(const int& resourceId): resourceId(resourceId), accessCount(0){};
    void getResourceID() const{
        cout << resourceId<<endl;
    };
    void getAccessCount() const{
        cout << accessCount<<endl;
    }
    void accessResource() const {
        accessCount++;
        cout << "Resource accessed."<<endl;
    };

};

int main(){
    const AccessCounter resource(1);
    resource.accessResource();
    resource.accessResource();
    resource.accessResource();
    resource.getResourceID();
    resource.getAccessCount();
}