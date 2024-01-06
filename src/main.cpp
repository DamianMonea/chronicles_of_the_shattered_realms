#include <iostream>
#include "char_base.h"
#include <string>

using namespace std;

int main() {
    Character *aeris = new Character(std::string("Aeris"), 25, 100.0);
    cout<<aeris->getName()<<endl;
    return 0;
}