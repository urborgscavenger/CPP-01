#include "Zombie.hpp"

#define foreach(TYPE, item, ptr) \
    for (TYPE** _p = (ptr); *_p != NULL; ++_p) \
        for (TYPE* item = *_p; item; item = NULL)

int main(void) {
    const int N = 5;
    Zombie* horde = zombieHorde(N, string("Zed"));

    foreach(Zombie, z, (Zombie**)horde) z->announce();

    // cleanup
    foreach(Zombie, z, (Zombie**)horde) delete z;
    
    delete[] (Zombie**)horde;
    return 0;
}
