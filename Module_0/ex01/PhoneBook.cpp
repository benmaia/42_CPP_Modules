#include "PhoneBook.hpp"

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
	str	tmp;
	std::cout << "Enter the First Name ->   \e[1;35m";
	std::cout << "\e[1;35m";
	std::getline(std::cin, tmp);
	this->_contacts[_index % 8].add_FirstName(tmp);
	std::cout << "\e[0;0mEnter the Last Name ->    \e[1;35m";
	std::getline(std::cin, tmp);
	this->_contacts[_index % 8].add_LastName(tmp);
	std::cout << "\e[0;0mEnter the Nick Name ->    \e[1;35m";
	std::getline(std::cin, tmp);
	this->_contacts[_index % 8].add_NickName(tmp);
	std::cout << "\e[0;0mEnter the Phone Number -> \e[1;35m";
	std::getline(std::cin, tmp);
	this->_contacts[_index % 8].add_Phone_Nb(tmp);
	std::cout << "\e[0;0mEnter the Dark Secret ->  \e[1;35m";
	std::getline(std::cin, tmp);
	std::cout << "\e[0;0m";
	this->_contacts[_index % 8].add_DarkSecret(tmp);
	_index++;
	std::cout << "\nEnter \e[1;35mOK\e[0;0m to confirm it!\n\e[1;35m" << std::endl;
	std::getline(std::cin, tmp);
	std::cout << "\e[0;0m";
	if (tmp == "OK")
		return ;
}

void	PhoneBook::contact_Search(void)
{
	int	i = 0;
	int	flag = 0;
	str	choice;
	if (_index == 0)
	{
		system("clear");
		std::cout << "\n\n        \033[38;5;214m  Go Make Some Friends  \e[0;0m          \n\n" << std::endl;
		std::cout << " Enter \e[1;35mOK\e[0;0m to leave\n\e[1;35m" << std::endl;
		std::cin >> choice;
		std::cout << "\e[0;0m";
		if (choice == "OK")
			return ;
	}
	std::cout << "\n\n->            \e[1;35m  My Contacts !   \e[0;0m           <-" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|   index  |first name| last name| nickname |" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	while ((_index < 8 && i < _index) || (_index >= 8 && i < 8))
	{
		std::cout << "|     \e[1;35m [" << i << "] \e[0;0m|";
		this->_contacts[i].get_Search();
		std::cout << std::endl;
		i++;
	}
	std::cout << "---------------------------------------------" << std::endl;

	std::cin >> choice;
	std::cout << "\e[0;0m";
	std::stringstream convert;
	convert << choice;
	convert >> i;
	if (i < 0 || i > (_index - 1) % 8)
	{
		system("clear");
		std::cout << "\n\n      \e[1;31mPlease select only a valid index!\e[0;0m      \n\n" << std::endl;
		flag++;
		contact_Search();
	}
	else
		this->_contacts[i].get_Info();
	std::cout << "\n Enter \e[1;35mOK\e[0;0m to go back to MENU\n" << std::endl;
	std::cout << "\e[1;35m";
	if (flag == 0)
	{
		std::cin >> choice;
		std::cout << "\e[0;0m";
		if (choice == "OK")
			return ;
	}
}

void	PhoneBook::exit_program(void)
{
	system("clear");
	std::exit(0);
}
