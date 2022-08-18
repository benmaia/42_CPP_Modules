#include "Zombie.hpp"

Zombie::Zombie() {}

void	Zombie::announce (void)
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ... 🧟" << std::endl;
}

Zombie::Zombie(string name)
{
	this->_name = name;
	Zombie::announce();
}

Zombie::~Zombie()
{
	std::cout << this->_name << ": I'm DEAD 💀" << std::endl;
}
