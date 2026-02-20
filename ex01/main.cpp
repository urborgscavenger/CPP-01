#include "Zombie.hpp"

int main(void) {
    const int N = 5;
    Zombie* horde = zombieHorde(N, string("Zed"));

    for (Zombie* z = horde; z < horde + N; ++z) {
        z->announce();
    }

    delete[] horde;
    return 0;
}
