#include <iostream>
#include <string>
using namespace std;
// Write a C++ program to define a class Book with attributes title, author, and isbn. Include a method to display book details. Create two objects of the Book class and display their details.
class Book{
    public:
    string title;
    string author;
    string isbn;
    void display(){
        cout << endl;
        cout << "Book Deatils are as following : \n";
        cout << "Book Title : "<<title<<endl;
        cout << "Book Author : "<<author<<endl;
        cout << "Book Available : "<<isbn<<endl;
    };
};
int main(){

    Book b1, b2;
    b1.title = "Introduction to computers";
    b2.title = "bubu dudu";
    b1.author = "Pooja Jain";
    b2.author = "dudu pudu";
    b1.isbn = "1234567890";
    b2.isbn = "9478988017";
    b1.display();
    b2.display();
};