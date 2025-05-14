#include <iostream>
#include <string>
using namespace std;
// Modify the Book class (from Q1) to include a parameterized constructor to initialize title, author, and isbn when an object is created.
class Book{
    string title;
    string author;
    string isbn;
    public:
    Book(string title,string author,string isbn) : title(title), author(author), isbn(isbn){}; 
    void display(){
        cout << endl;
        cout << "Book Deatils are as following : \n";
        cout << "Book Title : "<<title<<endl;
        cout << "Book Author : "<<author<<endl;
        cout << "Book Available : "<<isbn<<endl;
    };
};
int main(){
    Book* b1 = new Book("Daily book", "Alpha male", "103282032923");
    b1->display();
    delete b1;
    b1 = nullptr;
    return 0;
}