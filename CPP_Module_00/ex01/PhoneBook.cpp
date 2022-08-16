#include "PhoneBook.hpp"
#include <cstdlib>

PhoneBook::PhoneBook()
{
	this->_index = 0;
}

PhoneBook::~PhoneBook(){}

Contact	PhoneBook::get_Contact(int index)
{
	return (this->_contacts[index]);
}

void	PhoneBook::contact_Add(void)
{
	str		tmp;
	std::cout << "Enter the First Name -> ";
	std::cin >> tmp;
	this->_contacts[_index % 8].add_FirstName(tmp);
	std::cout << "Enter the Last Name -> ";
	std::cin >> tmp;
	this->_contacts[_index % 8].add_LastName(tmp);
	std::cout << "Enter the Nick Name -> ";
	std::cin >> tmp;
	this->_contacts[_index % 8].add_NickName(tmp);
	std::cout << "Enter the Phone Number -> ";
	std::cin >> tmp;
	this->_contacts[_index % 8].add_Phone_Nb(tmp);
	std::cout << "Enter the Dark Secret -> ";
	std::cin >> tmp;
	this->_contacts[_index % 8].add_DarkSecret(tmp);
	_index++;
}

void	PhoneBook::exit_program(void)
{
	std::exit(0);
}
