#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentPardonForm.hpp"
#include <exception>

int main()
{
	{
    	std::cout << "Basic Tests" << std::endl;
    	std::cout << std::endl;
	
    	//Form test;
    	std::cout << std::endl;
    	std::cout << "Shrubbery Form Tests" << std::endl;
    	std::cout << std::endl;
    	ShrubberyCreationForm shrub1;
    	ShrubberyCreationForm shrub2("official");
    	ShrubberyCreationForm shrub3(shrub1);
    	shrub3 = shrub2;
    	std::cout << std::endl;
    	Bureaucrat farm("Farmer", 146);
    	Bureaucrat stud("Student", 145);
    	Bureaucrat intern("Intern", 138);
    	Bureaucrat pres("President", 137);
	
		try
		{
			shrub1.beSigned(farm);
		}
		catch (std::exception &error)
		{
			std::cout << error.what() << std::endl;
		}
		try
		{
    		shrub2.beSigned(stud);
		}
		catch (std::exception &error)
		{
			std::cout << error.what() << std::endl;
		}
    	intern.executeForm(shrub2);
    	pres.executeForm(shrub2);
    	pres.executeForm(shrub1);
    	std::cout << std::endl;
	}

	{
		std::cout << std::endl;
    	std::cout << "Robotomy Form Tests" << std::endl;
    	std::cout << std::endl;
    	RobotomyRequestForm robot1;
    	RobotomyRequestForm robot2("official");
    	RobotomyRequestForm robot3(robot1);
    	std::cout << std::endl;
    	Bureaucrat farm("Farmer", 73);
    	Bureaucrat stud("Student", 70);
    	Bureaucrat intern("Intern", 46);
    	Bureaucrat pres("President", 45);
		Bureaucrat god("God", 1);
	
		try
		{
			robot1.beSigned(farm);
		}
		catch (std::exception &error)
		{
			std::cout << error.what() << std::endl;
		}
		try
		{
    		robot2.beSigned(stud);
		}
		catch (std::exception &error)
		{
			std::cout << error.what() << std::endl;
		}
    	pres.executeForm(robot1);
    	intern.executeForm(robot2);
    	pres.executeForm(robot2);
    	std::cout << std::endl;
	}
}
