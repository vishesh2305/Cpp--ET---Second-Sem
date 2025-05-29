#include <iostream>
using namespace std;

// explicit Conversion Operator:

// Intent: Prevent implicit conversions from your class type using a conversion operator.
// Question: Modify the Book class from Q3. Make the operator int() conversion operator explicit. Try int numPages = b1; again. What happens? How do you perform the conversion now?

class Book{
    string title;
    int pages;
    public:
    Book(string title, int pages): title(title), pages(pages){};

    explicit operator int(){
        return pages;
    };

};

int main(){
    Book b("CPP", 1999);
    int numpages = b.operator int();
    cout << numpages;
}