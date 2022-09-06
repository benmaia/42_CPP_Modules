#include "Intern.hpp"
#include "PresidentPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern()
{
	std::cout << "Intern Default Constructor" << std::endl;
}

Intern::~Intern()
{
	std::cout << "Intern Destructor" << std::endl;
}

Intern::Intern(const Intern &original)
{
	(void) original;
	std::cout << "Intern Copy Constructor" << std::endl;
}

Intern	&Intern::operator=(const Intern &original)
{
	(void) original;
	std::cout << "Intern Copy Assignment" << std::endl;
	return (*this);
}

Form	*Intern::makeForm(std::string name, std::string target)
{
	std::string	formName[4];
	int			i;

	formName[0] = "shrubbery creation";
	formName[1] = "robotomy request";
	formName[2] = "presidential pardon";
	formName[3] = "NULL";

	for (i = 0; i < 4 ; i++)
		if (!name.compare(formName[i]))
			break;
	switch (i)
	{
		case 0:
			std::cout << "Intern create shrubbery form" << std::endl;
			return (new ShrubberyCreationForm(target));
		case 1:
			std::cout << "Intern create robotomy form" << std::endl;
			return (new RobotomyRequestForm(target));
		case 2:
			std::cout << "Intern create presidential form" << std::endl;
			return (new PresidentPardonForm(target));
		default:
			std::cout << "Not a valid form" << std::endl;
	}
	return (NULL);
}
