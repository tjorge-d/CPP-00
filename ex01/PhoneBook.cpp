#include "PhoneBook.hpp"

void PhoneBook::addContact()
{
	for (int i = 6; i >= 0; i--)
		contact[i + 1] = contact[i];
	contact[0].fillFields();
}

void PhoneBook::displayContacts()
{
	int i;

	if (contact[0].empty())
	{
		std::cout << "There is no information on the PhoneBook" << std::endl;
		return;
	}
	std::cout << "|Index     |First Name|Last Name |Nickname  |" << std::endl;
	for (i = 0; i <= 7 && !contact[i].empty(); i++)
	{
		std::cout << "|" << i + 1 << "         ";
		contact[i].displayRow();
	}
	std::cout << "Index of the entry to display: ";
	while (1)
	{
		std::cin >> i;
		if (!std::cin)
			;
		else if (i >= 1 && i <= 8 && !contact[i - 1].empty())
		{
			contact[i - 1].displayInfo();
			std::cin.ignore();
			break;
		}
		else 
			std::cout << "Invalid index, select again: ";
	}
}