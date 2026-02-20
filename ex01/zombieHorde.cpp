#include "Zombie.hpp"

Zombie* zombieHorde(int N, string name) {
    if (N <= 0)
        return NULL;

    // Single allocation using new[]; default constructor is called for each element.
    Zombie* horde = new Zombie[N];

    for (int i = 0; i < N; ++i) {
        horde[i].setName(name);
    }

    return horde;
}
