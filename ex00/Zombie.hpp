#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

#define string std::string
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