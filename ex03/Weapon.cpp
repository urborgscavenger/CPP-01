#include "Weapon.hpp"
#include <iostream>

#define WriteLine(x) std::cout << x << std::endl

Weapon::Weapon(string type) : type(type) {}

const string& Weapon::getType() const {
    return type;
}

void Weapon::setType(string type) {
    this->type = type;
}