#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>

#ifndef STRING_ALIAS
#define STRING_ALIAS
typedef std::string string;
#endif

class Weapon {
private:
    string type;

public:
    Weapon(string type);
    const string& getType() const;
    void setType(string type);
};

#endif