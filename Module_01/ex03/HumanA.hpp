#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

typedef std::string	string;

class HumanA
{
	private:
		string	_name;
		Weapon	*_type;

	public:
		void	attack( void );
		HumanA(string name, Weapon &type);
		HumanA();
		~HumanA();
};

#endif
