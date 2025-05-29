#include <iostream>
#include <string>
#include <vector>
using namespace std;



class MediaItem{
    public:
    virtual void displayDetails() const{};
};
class Book : public MediaItem{
    public:
    string title;
    string author;
    void displayDetails(){
        cout << "Title : "<< title << " author : "<< author << endl;
    };
};
class DVD : public MediaItem{
    public:
    string title;
    string director;
    void displayDetails(){
        cout << "Title : "<< title << " director : " << director << endl;
    };
};


int main(){
    vector<MediaItem*> items;
    

    return 0;
}