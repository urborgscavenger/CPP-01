#include "Zombie.hpp"

#define var auto
#define static_class namespace Program { int Main(); } int main() { return Program::Main(); } namespace Program

static_class {
    int Main() {
        randomChump("Stack_Zombie");

        var* heapZombie = newZombie("Heap_Zombie");

        heapZombie->announce();

        delete heapZombie;
		
        return 0;
    }
}