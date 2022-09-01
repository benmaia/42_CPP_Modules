#include "PresidentPardonForm.hpp"

PresidentPardonForm::PresidentPardonForm() : Form("PresidentPardonForm", 145, 137), _target("NULL")
{
	std::cout << "PresidentPardonForm Default Constructor" << std::endl;
}

PresidentPardonForm::PresidentPardonForm(std::string target) : Form("PresidentPardonForm", 145, 137)
{
	this->_target = target;
}

PresidentPardonForm::PresidentPardonForm(const PresidentPardonForm &original)
{
	this->_target = original._target;
	std::cout << "PresidentPardonForm Copy Constructor" << std::endl;
}

PresidentPardonForm &PresidentPardonForm::operator=(const PresidentPardonForm &original)
{
	this->_target = original._target;
	std::cout << "PresidentPardonForm Copy Assignment" << std::endl;
	return (*this);
}

PresidentPardonForm::~PresidentPardonForm()
{
	std::cout << "PresidentPardonForm Destructor" << std::endl;
}

void	PresidentPardonForm::function() const
{
	std::cout << this->_target << " has been pardoned by Zaphod Beevlebrox." << std::endl;
}
