#include "Zombie.hpp"

int main (void)
{
	Zombie *new_zombie = newZombie("Bernardo");
	randomChump("Maia");
	delete(new_zombie);
}
