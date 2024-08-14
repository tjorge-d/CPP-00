#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <limits>
# include "Contact.hpp"
# include <stdlib.h>
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