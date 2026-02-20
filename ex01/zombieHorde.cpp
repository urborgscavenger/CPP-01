#include "Zombie.hpp"

Zombie** zombieHorde(int N, string name) {
    if (N <= 0)
        return NULL;

    Zombie** horde = new Zombie*[N + 1];
    for (int i = 0; i < N; ++i) {
        horde[i] = new Zombie(name);
    }
    horde[N] = NULL;
    return horde;
}
