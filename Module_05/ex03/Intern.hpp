#ifndef INTERN_HPP
# define INTERN_HPP

#include <iostream>
#include <string>
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentPardonForm.hpp"

class Intern
{
	public:
		Form *makeForm(std::string name, std::string target);
		Intern();
		Intern(const Intern &original);
		~Intern();
		Intern &operator=(const Intern &original);
};

#endif
