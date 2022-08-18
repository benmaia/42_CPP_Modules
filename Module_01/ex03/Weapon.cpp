#include "Weapon.hpp"

Weapon::Weapon() {}

Weapon::Weapon(string type)
{
	this->_type = type;
}

Weapon::~Weapon() {}

string	Weapon::getType( void )
{
	return (this->_type);
}

void	Weapon::setType(string type)
{
	this->_type = type;
}
