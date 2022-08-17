#include "PhoneBook.hpp"
#include <string>

void	print_menu(void)
{
	std::cout << "\n\n\e[1;35m======================= MENU ========================\e[0;0m\n" << std::endl;
	std::cout << "          To add a contact, please write -> \e[1;35mADD\e[0;0m           " << std::endl;
	std::cout << "        To search contacts, please write -> \e[1;35mSEARCH\e[0;0m        " << std::endl;
	std::cout << "             To exit, please write -> \e[1;35mEXIT\e[0;0m                " << std::endl;
	std::cout << "\n Any other input will be discarded!\n\n" << std::endl;
}

int main(void)
{
	PhoneBook	p_Book;
	str			prompt;

	while (1)
	{
		system("clear");
		print_menu();
		std::cout << "\e[1;35m";
		std::getline(std::cin, prompt);
		std::cout << "\e[0;0m";
		if (prompt == "EXIT")
			p_Book.exit_program();
		if (prompt == "ADD")
		{
			system("clear");
			p_Book.contact_Add();
		}
		if (prompt == "SEARCH")
		{
			system("clear");
			p_Book.contact_Search();
		}
	}
}
