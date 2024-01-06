#ifndef CHARACTER_H
#define CHARACTER_H

#include <string>

class Character {
private:
    std::string name;
    int age;
    float health;
public:
    Character(std::string name, int age, float health);

    std::string getName();

    void heal(float healVal);

    void dealDamage(float dmgVal);
};

#endif // CHARACTER_H