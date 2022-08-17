#include "Contact.hpp"

Contact::Contact(){}

Contact::~Contact(){}

void	Contact::add_FirstName(str f_name)
{
	this->_f_name = f_name;
}

void	Contact::add_LastName(str l_name)
{
	this->_l_name = l_name;
}

void	Contact::add_NickName(str nick)
{
	this->_nick = nick;
}

void	Contact::add_Phone_Nb(str phone_nb)
{
	this->_phone_nb = phone_nb;
}

void	Contact::add_DarkSecret(str d_secret)
{
	this->_d_secret = d_secret;
}

void	Contact::get_Info(void)
{
	std::cout << "\nFirst Name   : \e[1;35m" << this->_f_name << std::endl;
	std::cout << "\e[0;0mLast Name    : \e[1;35m" << this->_l_name << std::endl;
	std::cout << "\e[0;0mNickname     : \e[1;35m" << this->_nick << std::endl;
	std::cout << "\e[0;0mPhone Number : \e[1;35m" << this->_phone_nb << std::endl;
	std::cout << "\e[0;0mDark Secret  : \e[1;35m" << this->_d_secret << "\n" << std::endl;
	std::cout << "\e[0;0m";
}

str	Contact::_search_info(str name)
{
	str	tmp;

	if (name.length() >= 10)
	{
		tmp = name.substr(0, 9);
		tmp.append(".");
	}
	else
	{
		tmp = name;
		while (tmp.length() < 10)
			tmp.insert(0, " ");
	}
	return tmp;
}

void	Contact::get_Search()
{
	str	tmp;

	tmp = Contact::_search_info(this->_f_name);
	std::cout << tmp;
	std::cout << "|";
	tmp = Contact::_search_info(this->_l_name);
	std::cout << tmp;
	std::cout << "|";
	tmp = Contact::_search_info(this->_nick);
	std::cout << "\e[1;35m";
	std::cout << tmp;
	std::cout << "\e[0;0m";
	std::cout << "|";
}
