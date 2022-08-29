#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string.h>

class Bureaucrat
{
	protected:
		const std::string _name;
		int					_grade;

	public:
		Bureaucrat();
		~Bureaucrat();
};

#endif
