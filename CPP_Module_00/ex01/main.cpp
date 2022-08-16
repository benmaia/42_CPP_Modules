#include "PhoneBook.hpp"

int main(void)
{
	PhoneBook	p_Book;
	str			tmp;

	while (1)
	{
		std::cin >> tmp;
		if (!tmp.compare("add"))
		{
			p_Book.contact_Add();
			p_Book.get_Contact(0).get_Info(4);
		}
		if (tmp == "exit")
			p_Book.exit_program();
	}
}
