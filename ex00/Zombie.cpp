#include "Zombie.hpp"

Zombie::Zombie(string name) {
    this->name = name;
}

Zombie::~Zombie() {
    // Destruktor-Meldung für das Debugging
    WriteLine(this->name + " has been laid to rest.");
}

void Zombie::announce(void) {
    WriteLine(this->name + ": BraiiiiiiinnnzzzZ...");
}