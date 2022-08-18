#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

typedef std::string	string;

class	Zombie
{
	public:
		void	announce ( void );
		Zombie(string name);
		Zombie();
		~Zombie();

	private:
		string	_name;
};

Zombie*	newZombie( std::string name );

void		randomChump( std::string name );

#endif
