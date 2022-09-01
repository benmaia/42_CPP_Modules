#include "RobotomyRequestForm.hpp"
#include <fstream>

RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequestForm", 72, 45), _target("NULL")
{
	std::cout << "RobotomyRequestForm Constructor" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 72, 45)
{
	this->_target = target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &original)
{
	this->_target = original._target;
	std::cout << "RobotomyRequestForm Copy Constructor" << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &original)
{
	this->_target = original._target;
	std::cout << "RobotomyRequestForm Copy Assignment" << std::endl;
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm Destructor" << std::endl;
}

void	RobotomyRequestForm::function() const
{
	if (rand()%2 < 1)
		std::cout << " Brrrrrrr bRRRRRRRRRRRR Brr " << this->_target << " has been robotomized successfully" << std::endl;
	else
		std::cout << " Brrrrrrr bRRRRRRRRRRRR Brr " << this->_target << " robotomy failed" << std::endl;
}
