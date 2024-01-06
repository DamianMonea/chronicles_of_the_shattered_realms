#include <string>
#include "char_base.h"


Character::Character(std::string name, int age, float health) {
    this->name = name;
    this->age = age;
    this->health = health;
}

std::string Character::getName() {
    return this->name;
}

void Character::heal(float healVal) {
    this->health += healVal;
}

void Character::dealDamage(float dmgVal) {
    this->health -= dmgVal;
}