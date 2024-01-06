#ifndef ITEM_H
#define ITEM_H

#include <string>

class Item {
private:
    std::string name;
    int age;
    float weight;
public:
    Item(std::string name, int age, float health);
};

#endif // ITEM_H