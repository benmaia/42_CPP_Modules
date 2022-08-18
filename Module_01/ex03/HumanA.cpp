#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA() {}

HumanA::HumanA(string name, Weapon &type)
{
	this->_name = name;
	this->_type = &type;
}

HumanA::~HumanA() {}

void	HumanA::attack( void )
{
	std::cout << this->_name << " attacks with their " << this->_type->getType() << std::endl;
}
