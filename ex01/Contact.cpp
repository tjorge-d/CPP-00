#include "Contact.hpp"

Contact::Contact()
{
	firstName = "";
	lastName = "";
	nickName = "";
	phoneNumber = "";
	darkestSecret = "";
}

Contact::~Contact()
{
	std::cout << "destruido" << std::endl;
}

std::string Contact::getPrompt(std::string message)
{
	std::string prompt;

	while (1)
	{
		std::cout << message;
		std::getline(std::cin, prompt);
		if (!std::cin)
			;
		else if (!prompt.empty())
			break;
		else
			std::cout << "Invalid prompt, try again." << std::endl;
	}
	return (prompt);
}

void Contact::fillFields()
{
	firstName = getPrompt("First Name: ");
	lastName = getPrompt("Last Name: ");
	nickName = getPrompt("Nickname: ");
	phoneNumber = getPrompt("Phone Number: ");
	darkestSecret = getPrompt("Darkest Secret: ");
	std::cout << "Contact Added." << std::endl;
}

int	Contact::empty()
{
	if (firstName.empty())
		return (1);
	return (0);
}
void Contact::displayRow()
{
	std::string	row = "|          |          |          |";

	row.replace(1, firstName.substr(0, 10).length(), firstName.substr(0, 10));
	if (firstName.length() > 10)
		row.replace(10, 1, ".");
	row.replace(12, lastName.substr(0, 10).length(), lastName.substr(0, 10));
	if (lastName.length() > 10)
		row.replace(21, 1, ".");
	row.replace(23, nickName.substr(0, 10).length(), nickName.substr(0, 10));
	if (nickName.length() > 10)
		row.replace(32, 1, ".");
	std::cout << row << std::endl;
}

void Contact::displayInfo()
{
	std::cout << "First Name: " << firstName << std::endl;
	std::cout << "Last Name: " << lastName << std::endl;
	std::cout << "Nickname: " << nickName << std::endl;
	std::cout << "Phone Number: " << phoneNumber << std::endl;
	std::cout << "Darkest Secret: " << darkestSecret << std::endl;
}