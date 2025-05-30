#include <iostream>
using namespace std;

// Polymorphism in Game Development (Entity System):

// Intent: To design a simple game entity system where different entity types update polymorphically.
// Question: Create a base class GameEntity with virtual void update() = 0;. Create derived classes Player, Enemy, Projectile. Implement update() for each to print their update logic (e.g., "Player moving...", "Enemy attacking...", "Projectile flying..."). In a simulated game loop in main(), maintain a collection of GameEntity* and call update() on all of them in each iteration.

class GameEntity{
    public:
    virtual void update() = 0;
};

class Player : public GameEntity{
    public:
    void update(){
        cout << "Player Moving\n";
    }
};
class Enemy : public GameEntity{
    public:
    void update(){
        cout << "Enemy Down\n";
    }
};
class Projectile : public GameEntity{
    public:
    void update(){
        cout << "Projectile Flying\n";
    }
};


int main(){
    GameEntity* g1;
    g1->update();

}