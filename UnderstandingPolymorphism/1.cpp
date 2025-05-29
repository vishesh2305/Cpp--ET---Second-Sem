#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Polymorphic Array Processing:
// Intent: To process a heterogeneous collection of objects using base class pointers, demonstrating polymorphism.
// Question: Create a base class MediaItem with a virtual void displayDetails() const. Create derived classes Book (with title, author) and DVD (with title, director). Override displayDetails() in each to print their specific details. In main(), create a std::vector<MediaItem*> items. Add Book and DVD objects to it. Iterate through the vector and call displayDetails() for each item.
class MediaItem{
    public:
    virtual void displayDetails() const{};
    virtual ~MediaItem(){};
};
class Book : public MediaItem{
    public:
    string title;
    string author;
    Book(string t , string a): title(t), author(a){};
    void displayDetails() const{
        cout << "Title : "<< title << " author : "<< author << endl;
    };
};
class DVD : public MediaItem{
    public:
    string title;
    string director;
    DVD(string t , string d): title(t), director(d){};
    void displayDetails() const{
        cout << "Title : "<< title << " director : " << director << endl;
    };
};
int main(){
    vector<MediaItem*> items;
    items.push_back(new Book("CPP", "Balagurusamy"));
    items.push_back(new DVD("C", "Balagurusamy"));
    for(const auto& item:items){
        item -> displayDetails();
    };
    for(auto& item:items){
        delete item;
    };
    return 0; 
};