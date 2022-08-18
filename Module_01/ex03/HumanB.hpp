#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

typedef std::string	string;

class HumanB
{
	private:
		string	_name;
		Weapon	*_type;

	public:
		void	attack( void );
		void	setWeapon(Weapon &type);
		HumanB(string name);
		HumanB();
		~HumanB();
};

#endif
