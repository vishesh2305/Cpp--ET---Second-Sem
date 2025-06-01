#include <iostream>
#include <vector>
#include <memory>
using namespace std;
// Polymorphism with Smart Pointers:
// Intent: To demonstrate using smart pointers (std::unique_ptr or std::shared_ptr) with polymorphic objects to manage memory automatically.
// Question: Revisit Question 1 (MediaItem, Book, DVD). Instead of raw MediaItem*, use std::vector<std::unique_ptr<MediaItem>> items. Populate the vector using std::make_unique<Book>(...) etc. Iterate and call displayDetails(). Observe that manual deletion is no longer needed.
class MediaItem{
public:
    virtual void displayDetails() const = 0;
    virtual ~MediaItem(){};
};
class Book : public MediaItem{
    public:
    string title;
    string author;
    Book(string t , string a): title(t), author(a){};
    void displayDetails() const override{
        cout << "Title : "<< title << " author : "<< author << endl;
    };
};
class DVD : public MediaItem{
    public:
    string title;
    string director;
    DVD(string t , string d): title(t), director(d){};
    void displayDetails() const override{
        cout << "Title : "<< title << " director : " << director << endl;
    };
};
int main(){
    vector<unique_ptr<MediaItem>> items;
    items.push_back(make_unique<Book>("CPP", "Balagurusamy"));
    items.push_back(make_unique<Book>("C", "Balagurusamy1"));
    for(const auto& item: items){
        item->displayDetails();
    };
    return 0;
};