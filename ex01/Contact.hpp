#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
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
		int			empty();
		std::string	getPrompt(std::string message);
};

#endif