#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie *a = new Zombie[N];
	for(int i = 0; i < N; i++)
	{
		a[i].setName(name);
		a[i].announce();
	}
	return (a);
}
