#include "Zombie.hpp"

Zombie::Zombie() : name("") {
}

Zombie::Zombie(string name) : name(name) {
}

Zombie::~Zombie() {
    WriteLine(this->name + " has been laid to rest.");
}

void Zombie::announce(void) const {
    WriteLine(this->name + ": BraiiiiiiinnnzzzZ...");
}

void Zombie::setName(string name) {
    this->name = name;
}