#include <iostream>
using namespace std;

// Choosing an Action Based on Type (Polymorphic Approach):
// Intent: Instead of using type-checking (like if/else if on typeid or dynamic_cast for behavior), let polymorphism handle behavior through virtual functions.
// Question: Create a base class Character with a pure virtual function virtual std::string getAttackMove() const = 0;. Derived classes: Warrior (returns "Sword Slash"), Mage (returns "Fireball"). Write a function void performAttack(const Character& attacker) that gets the attack move using attacker.getAttackMove() and prints "[Attacker type] performs [Attack Move]!". (You can add a virtual std::string getType() const = 0; to Character for the attacker type string). Test with Warrior and Mage objects.

class Character{
    public:
    virtual string getAttackMove() const = 0;
    virtual string getType() const = 0;
};
class Warrior : public Character{
    public:
    string getAttackMove() const override{
        return "Sword Slash\n";
    };
    string getType() const override{
        return "Warrior";
    }
};
class Mage : public Character{
    public:
    string getAttackMove() const override{
        return "Fireball\n";
    };
        string getType() const override{
        return "Mage";
    }
};
void performAttack(const Character& attacker){
    cout << attacker.getAttackMove();
    cout << attacker.getType()<<endl;
};
int main(){
    Warrior w1;
    Mage m1;
    performAttack(w1);
    performAttack(m1);
    return 0;
}