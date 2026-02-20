#include "Zombie.hpp"

void randomChump(string name) {
    // Stack Allocation (fühlt sich in C++ wie ein C# Struct an)
    Zombie localZombie(name);
    localZombie.announce();
}
