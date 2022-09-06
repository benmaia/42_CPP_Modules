#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyCreationForm", 145, 137), _target("NULL")
{
	std::cout << "ShrubberyCreationForm Default Constructor" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", 145, 137)
{
	this->_target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &original) : Form(original)
{
	this->_target = original._target;
	std::cout << "ShrubberyCreationForm Copy Constructor" << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &original)
{
	this->_target = original._target;
	std::cout << "ShrubberyCreationForm Copy Assignment" << std::endl;
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm Destructor" << std::endl;
}

void	ShrubberyCreationForm::function() const
{
	std::ofstream	file;
	std::string		file_to_write;
	file_to_write = this->_target;
	file_to_write.append("_shrubbery");
	file.open(file_to_write.c_str(), std::ios::in | std::ios::trunc);
	if (!file)
		std::cout << "Not able to create the file" << std::endl;
	file << "         *" << std::endl;
	file << "        /|\\" << std::endl;
	file << "       /*|O\\" << std::endl;
	file << "      /*/|\\*\\" << std::endl;
	file << "     /X/O|*\\X\\" << std::endl;
	file << "    /*/X/|\\X\\*\\" << std::endl;
	file << "   /O/*/X|*\\O\\X\\" << std::endl;
	file << "  /*/O/X/|\\X\\O\\*\\" << std::endl;
	file << " /X/O/*/X|O\\X\\*\\O\\" << std::endl;
	file << "/O/X/*/O/|\\X\\*\\O\\X\\" << std::endl;
	file << "        |X| " << std::endl;
	file << "        |X| " << std::endl;  
	file.close();
}
