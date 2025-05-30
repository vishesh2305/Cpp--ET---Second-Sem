#include <iostream>
#include <vector>
using namespace std;

// Polymorphism and Event Handling (Conceptual):
// Intent: To mchodel a basic event handling system where different objects react to events polymorphically.
// Question: Create an abstract class EventHandler with virtual void handleEvent(const std::string& eventName) = 0;. Create concrete handlers: MouseClickHandler, KeyPressHandler. Implement handleEvent to print what event they are handling. Create a list of EventHandler*. Simulate an incoming event (e.g., "mouse_click") and notify all handlers in the list by calling handleEvent.

class EventHandler{
    public:
    virtual void handleEvent(const string& eventName) = 0;
};
class MouseClickHandler: public EventHandler{
    public:
    MouseClickHandler(){};
    void handleEvent(const string& eventName) override{
        if(eventName == "mouse_click"){
            cout << "MouseClick Handler\n";
        };
    };
};


class KeyPressHandler: public EventHandler{
    public:
    KeyPressHandler(){};
    void handleEvent(const string& eventName) override{
        if(eventName == "key_press"){
            cout << "KeypressHandler\n";
        }
    }
};


int main(){
    MouseClickHandler mouseclick;
    KeyPressHandler keypress;

    vector<EventHandler*> handlers;
    handlers.push_back(&mouseclick);
    handlers.push_back(&keypress);


    vector<string> incomingevent= {"mouse_click", "key_press", "monitor_click"};
    for(const string& event: incomingevent){
        for(EventHandler* handler: handlers){
            handler->handleEvent(event);
        };
    };

return 0;
};