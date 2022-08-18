#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <string>

typedef std::string	string;

class Weapon
{
	public:
		string	getType( void );
		void		setType(string type);
		Weapon(string type);
		Weapon();
		~Weapon();

	private:
		string	_type;
};

#endif
