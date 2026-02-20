#include "HumanA.hpp"
#include <iostream>

#define WriteLine(x) std::cout << x << std::endl

HumanA::HumanA(string name, Weapon& weapon) : name(name), weapon(weapon) {}

void HumanA::attack() const {
    WriteLine(name + " attacks with their " + weapon.getType());
}