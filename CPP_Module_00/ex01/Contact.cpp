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

void	Contact::get_Info(int index)
{
	switch(index) {
		case 0:
			std::cout << this->_f_name;
			break;
		case 1:
			std::cout << this->_l_name;
			break;
		case 2:
			std::cout << this->_nick;
			break;
		case 3:
			std::cout << this->_phone_nb;
			break;
		case 4:
			std::cout << this->_d_secret;
			break;
	}
}
