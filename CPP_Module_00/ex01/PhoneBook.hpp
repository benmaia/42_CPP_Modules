#include "Contact.hpp"

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

class PhoneBook
{
	private:
		Contact	_contacts[8];
		int		_index;

	public:
		PhoneBook();
		~PhoneBook();
		Contact	get_Contact(int index);
		void	contact_Add(void);
		void	contact_Search(void);
		void	exit_program(void);
};

#endif
