#include "Zombie.hpp"

#define var auto

int main(void)
{
	randomChump("Stack_Zombie");

	var *heapZombie = newZombie("Heap_Zombie"); // var could also be Zombie here

	heapZombie->announce();

	delete heapZombie;

	return 0;
}