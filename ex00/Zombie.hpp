#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

#ifndef STRING_ALIAS
#define STRING_ALIAS
typedef std::string string;
#endif
#define WriteLine(x) std::cout << x << std::endl

class Zombie {
private:
    string name;

public:
    Zombie(string name);
    ~Zombie();

    void announce(void);
};

Zombie* newZombie(string name);
void randomChump(string name);

#endif