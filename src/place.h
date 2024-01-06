#ifndef PLACE_H
#define PLACE_H

#include <string>

class Place {
private:
    std::string name;
    int age;
    float health;
public:
    Place(std::string name, int age, float health);
};

#endif // PLACE_H