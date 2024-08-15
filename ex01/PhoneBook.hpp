#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <iostream>
# include <string.h>

class PhoneBook
{
	private:
		Contact contact[8];
	
	public:
		void	addContact();
		void	displayContacts();
};

#endif