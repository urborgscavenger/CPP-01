#include "Zombie.hpp"

Zombie* newZombie(string name) {
    // Heap Allocation (wie in C# standardmäßig bei Klassen)
    return new Zombie(name);
}