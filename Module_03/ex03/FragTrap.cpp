#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	setType("FragTrap");
	setName("NULL");
	setHealth(100);
	setEnergy(100);
	setAttack(30);
	std::cout << "FragTrap: " << getName() << " default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	setType("FragTrap");
	setName(name);
	setHealth(100);
	setEnergy(100);
	setAttack(30);
	std::cout << "FragTrap: " << getName() << " created!" << std::endl;
}

FragTrap::FragTrap(const FragTrap &original) : ClapTrap(original)
{
	setType("FragTrap");
	std::cout << "FragTrap:" << getName() << " copy constructor called" << std::endl; 
}

FragTrap &FragTrap::operator=(const FragTrap &original)
{
	ClapTrap::operator=(original);
	std::cout << "FragTrap: Assignment operator called" << std::endl;
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap: " << getName() << " destroyed!" << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap: " << getName() << " wants to give you a high five!!" << std::endl;
}
