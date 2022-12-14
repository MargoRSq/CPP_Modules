#include "Phonebook.hpp"

int main(void)
{
	PhoneBook		book;
	std::string		command;

	while (1)
	{
		std::cout << "Please, enter command: ";
		std::getline(std::cin, command);
		if (command.compare("ADD") == 0)
			book.addСontact();
		else if (command.compare("SEARCH") == 0)
			book.searchСontact();
		else if (std::cin.eof() || command.compare("EXIT") == 0)
			break;
		else
			std::cout << "Availible commands are: ADD, SEARCH and EXIT" << std::endl;
	}
	return 0;
}