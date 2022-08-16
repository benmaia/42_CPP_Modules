#include <iostream>
#include <string>

#ifndef CONTACT_HPP
# define CONTACT_HPP

typedef std::string	str;

class Contact
{
	private:
		str	_f_name;
		str	_l_name;
		str	_nick;
		str	_phone_nb;
		str	_d_secret;

	public:
		void	add_FirstName(str f_name);
		void	add_LastName (str l_name);
		void	add_NickName(str nick);
		void	add_Phone_Nb(str phone_nb);
		void	add_DarkSecret(str d_secret);
		void	get_Info(int index);
		Contact();
		~Contact();
};

#endif
