#include "PhoneBook.hpp"

int	main()
{
	PhoneBook	phonebook;
	std::string	prompt;
	
	while (1)
	{
		std::getline(std::cin, prompt);
		if (!std::cin)
		{
			std::cin.clear();
		}
		else if (prompt == "ADD")
			phonebook.addContact();
		else if (prompt == "SEARCH")
			phonebook.displayContacts();
		else if (prompt == "EXIT")
			break;
		else
			std::cout << "Invalid Command." << std::endl;
	}
}