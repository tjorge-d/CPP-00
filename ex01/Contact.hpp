#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <iomanip>
# include <string.h>

class Contact
{
	private:
		std::string firstName;
		std::string lastName;
		std::string nickName;
		std::string phoneNumber;
		std::string darkestSecret;

	public:
		void		fillFields();
		void		displayRow();
		void		displayInfo();
		void		numberValidity();
		int			empty();
		std::string	getPrompt(std::string message);
		std::string	fieldFormater(std::string prompt);
};

#endif