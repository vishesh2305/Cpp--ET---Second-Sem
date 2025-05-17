#include <iostream>
#include <string>
using namespace std;

class ProtectedString{
    string s1;
    public:
    ProtectedString(const string& s1): s1(s1){};
    string getString() const{
        return s1;
    };
    void setString(const string& newstring){
        s1 = newstring;
    };
    int getlength() const{
        return s1.length();
    };
};

int main(){ 
    const ProtectedString constantobj("abcdjow");
    const string& readonlyref = constantobj.getString();
    cout << readonlyref<<endl;



    ProtectedString modifiableobj("Hello world");
    const string& refobj = modifiableobj.getString();
    cout << refobj<<endl;

    modifiableobj.setString("Namaste Duniya");
    cout<< modifiableobj.getString();
    return 0;
};