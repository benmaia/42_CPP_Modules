#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB() {}

HumanB::HumanB(string name)
{
	this->_name = name;
}

HumanB::~HumanB() {}

void	HumanB::attack( void )
{
	std::cout << this->_name << " attacks with their " << this->_type->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &type)
{
	this->_type = &type;
}
