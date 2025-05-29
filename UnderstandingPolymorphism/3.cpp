#include <iostream>
using namespace std;

// Abstract Factory using Polymorphism (Simplified):

// Intent: To create objects of different derived types through a common interface, decided at runtime.
// Question: Create a base class UIElement with virtual void render() const = 0;. Derived classes: Button, TextBox. Implement render() for each. Create a function UIElement* createUIElement(const std::string& type) that returns new Button() if type is "button", new TextBox() if type is "textbox", else nullptr. In main(), use this factory function to create different UI elements based on user input (or predefined strings) and call render() on them using a UIElement*. Remember to delete the created objects.

class UIElement{
    public:
    virtual void render() const = 0;
    virtual ~UIElement(){};
};


class Button: public UIElement{

    public:
    void render() const override{
        cout << "Rendering a Button\n";
    };
};
class TestBox : public UIElement{
    public:
    void render() const override{
                cout << "Rendering a TextBox\n";
    };
};
UIElement* createUIElement(const string& type){
    if(type == "button"){
        return new Button();
    } else if(type == "textbox"){
        return new TestBox();
    } else{
        return nullptr;
    };
};
int main(){


    string inputs[] = {"button", "textbox", "slider", "textbox"};

    for(const string& type : inputs){
        UIElement* element = createUIElement(type);
        if(element){
            element->render();
            delete element;
        } else {
            cout << "Invalud UI element Type : "<< type << endl;
        }
    }



return 0;
}