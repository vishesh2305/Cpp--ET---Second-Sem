#include <iostream>
#include <string>
using namespace std;
// Conversion Operator (Class type to Built-in type):

// Intent: Define a way to convert an object of your class to a built-in type.
// Question: Create a class Book with std::string title and int pages. Add a conversion operator to convert a Book object to an int, which should return the number of pages.
// Demonstrate: Book b1("C++ Primer", 900); int numPages = b1; std::cout << "Pages: " << numPages << std::endl;.



class Book{
    string title;
    int pages;
    public:
    Book(string title, int pages): title(title), pages(pages){};

    operator int(){
        return pages;
    };

};
int main(){
    Book B("C++", 1000);
    int numPages = B;
    cout << numPages<< endl;


    return 0;
}