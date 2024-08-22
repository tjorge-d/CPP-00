#include "Contact.hpp"

std::string Contact::getPrompt(std::string message)
{
	std::string prompt;

	while (std::cin)
	{
		std::cout << message;
		std::getline(std::cin, prompt);
		if (!std::cin)
			break;
		prompt = fieldFormater(prompt);
		if (!prompt.empty())
			break;
		else
			std::cout << "Invalid prompt, try again." << std::endl;
	}
	return (prompt);
}

void Contact::numberValidity()
{
	if (!std::cin)
		return;
	if (!isdigit(phoneNumber[0]) && phoneNumber[0] != '+')
		phoneNumber = "";
	for (int i = 1; phoneNumber[i]; i++)
	{
		if (!isdigit(phoneNumber[i]))
			phoneNumber = "";
	}
	if (phoneNumber.empty())
		std::cout << "Invalid phone number, try again." << std::endl;
}

void Contact::fillFields()
{
	firstName = getPrompt("First Name: ");
	lastName = getPrompt("Last Name: ");
	nickName = getPrompt("Nickname: ");
	phoneNumber = "";
	while (std::cin && phoneNumber.empty())
	{
		phoneNumber = getPrompt("Phone Number: ");
		numberValidity();
	}
	darkestSecret = getPrompt("Darkest Secret: ");
}

std::string Contact::fieldFormater(std::string prompt)
{
	int	i = 0;

	while (prompt[i])
	{
		if (prompt[i] == '\n' || prompt[i] == 27)
			return ("");
		if (isspace(prompt[i]) && isspace(prompt[i + 1]))
		{
			prompt.erase(i, 1);
			prompt.replace(i, 1, " ");
		}
		else
			i++;
	}
	if (isspace(prompt[0]))
		prompt.erase(0, 1);
	if (isspace(prompt[prompt.length() - 1]))
		prompt.erase(prompt.length() - 1, 1);
	return (prompt);
}

int	Contact::empty()
{
	if (firstName.empty())
		return (1);
	return (0);
}

void Contact::displayRow()
{
	std::string str[] = {firstName, lastName, nickName, ""};
	for (int i = 0; !str[i].empty(); i++)
	{
		if (str[i].length() > 10)
			std::cout << str[i].substr(0, 9) << "." << "|";
		else
			std::cout << std::setw(10) << str[i].substr(0, 10) << "|";
	}
	std::cout << std::endl;
}

void Contact::displayInfo()
{
	std::cout << "First Name: " << firstName << std::endl;
	std::cout << "Last Name: " << lastName << std::endl;
	std::cout << "Nickname: " << nickName << std::endl;
	std::cout << "Phone Number: " << phoneNumber << std::endl;
	std::cout << "Darkest Secret: " << darkestSecret << std::endl;
}