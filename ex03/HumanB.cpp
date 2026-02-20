#include "HumanB.hpp"
#include <iostream>

#define WriteLine(x) std::cout << x << std::endl

HumanB::HumanB(string name) : name(name), weapon(NULL) {}

void HumanB::setWeapon(Weapon& weapon) {
    this->weapon = &weapon;
}

void HumanB::attack() const {
    if (weapon) {
        WriteLine(name + " attacks with their " + weapon->getType());
    } else {
        WriteLine(name + " has no weapon");
    }
}