#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

typedef std::string	string;

class	Zombie
{
	public:
		void	announce ( void );
		void	setName(string name);
		Zombie(string name);
		Zombie();
		~Zombie();

	private:
		string	_name;
};

Zombie* zombieHorde( int N, std::string name );

#endif
