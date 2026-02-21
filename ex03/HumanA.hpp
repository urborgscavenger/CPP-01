#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <string>

#ifndef STRING_ALIAS
#define STRING_ALIAS
typedef std::string string;
#endif

#include "Weapon.hpp"

class HumanA {
private:
    string name;
    Weapon& weapon;

public:
    HumanA(string name, Weapon& weapon);
    void attack() const;
};

#endif