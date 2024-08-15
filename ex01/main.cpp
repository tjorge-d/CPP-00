#include "PhoneBook.hpp"

int	main()
{
	PhoneBook	phonebook;
	std::string	prompt;
	
	while (std::getline(std::cin, prompt) && (prompt != "EXIT" || !std::cin))
	{
		if (prompt == "ADD")
			phonebook.addContact();
		else if (prompt == "SEARCH")
			phonebook.displayContacts();
		else
			std::cout << "Invalid Command." << std::endl;
	}
}