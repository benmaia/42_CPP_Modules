#include "Zombie.hpp"

int main (void)
{
	Zombie *a;

	a = zombieHorde(10, "Ricardo");
	delete[] a;
}
