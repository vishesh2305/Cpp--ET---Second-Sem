#include <iostream>
#include <string>
using namespace std;

// This is a conceptual question to explore understanding, though direct implementation of "friendship to only one member function of another class" isn't a standard C++ feature in a single keyword. Instead, demonstrate a common workaround:
// Create a class SecretData with a private string member data. Create another class DataAccessor. Make a specific member function of DataAccessor, say revealSecret(SecretData& obj), a friend of SecretData so that only this function can access SecretData's private data member. The revealSecret function should print the data. Other member functions of DataAccessor should not have access. Show this in main().

class SecretData{
    private:
    string data;
    friend void revealSecret(SecretData& obj);
    public:
    SecretData(const string data): data(data){};
};

class DataAccessor{
    public:
    friend void revealSecret(SecretData& obj);
    // string display(SecretData& obj){
    //     return obj.data;
    // };
};

void revealSecret(SecretData& obj){
    cout << obj.data<<endl;
};


int main(){
    SecretData s1("This is secret Key");
    DataAccessor a;
    // a.display(s1);
    revealSecret(s1);
    return 0;
};