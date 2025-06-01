#include <iostream>
#include <vector>
using namespace std;

// Polymorphism in Game Development (Entity System):

// Intent: To design a simple game entity system where different entity types update polymorphically.
// Question: Create a base class GameEntity with virtual void update() = 0;. Create derived classes Player, Enemy, Projectile. Implement update() for each to print their update logic (e.g., "Player moving...", "Enemy attacking...", "Projectile flying..."). In a simulated game loop in main(), maintain a collection of GameEntity* and call update() on all of them in each iteration.

class GameEntity{
    public:
    virtual void update() = 0;

    virtual ~GameEntity(){};
};

class Player : public GameEntity{
    public:
    void update() override{
        cout << "Player Moving\n";
    };
};
class Enemy : public GameEntity{
    public:
    void update(){
        cout << "Enemy Down\n";
    }
};
class Projectile : public GameEntity{
    public:
    void update() override{
        cout << "Projectile Flying\n";
    }
};


int main(){
    vector<GameEntity*> entities;
    entities.push_back(new Player());
    entities.push_back(new Enemy());
    entities.push_back(new Projectile());



    for(int i=0; i < 3; i++){
        for(GameEntity* entity:entities){
            entity->update();
        }
        cout << endl;
    };


    for(GameEntity* entity: entities){
        delete entity;
    };

    return 0;
};