/**
 * File              : main.cpp
 * Author            : pdeguing <pdeguing@student.42.us.org>
 * Date              : 05.04.2019
 * Last Modified Date: 05.04.2019
 * Last Modified By  : pdeguing <pdeguing@student.42.us.org>
 */

#include <iostream>
#include <Contact.class.hpp>

void	add_contact(Contact phonebook) {
	std::string	buf;

	for (int i = 0; i < 8; i++) {
		if (phonebook[i].get_firstName == "") {
			std::cout << "First name: ";
			std::getline(std::cin, buf);
			phonebook[i].set_firstName(buf);
			std::cout << "Last name: ";
			std::getline(std::cin, buf);
			phonebook[i].set_lastName(buf);
			std::cout << "Nickname: ";
			std::getline(std::cin, buf);
			phonebook[i].set_nickname(buf);
			std::cout << "Login: ";
			std::getline(std::cin, buf);
			phonebook[i].set_login(buf);
			std::cout << "Postal address: ";
			std::getline(std::cin, buf);
			phonebook[i].set_postalAddress(buf);
			std::cout << "Email address: ";
			std::getline(std::cin, buf);
			phonebook[i].set_emailAddress(buf);
			std::cout << "Phone number: ";
			std::getline(std::cin, buf);
			phonebook[i].set_phoneNumber(buf);
			std::cout << "Birthday: ";
			std::getline(std::cin, buf);
			phonebook[i].set_birthday(buf);
			std::cout << "Favorite meal: ";
			std::getline(std::cin, buf);
			phonebook[i].set_favoriteMeal(buf);
			std::cout << "Underwear color: ";
			std::getline(std::cin, buf);
			phonebook[i].set_underwearColor(buf);
			std::cout << "Darkest secret: ";
			std::getline(std::cin, buf);
			phonebook[i].set_darkestSecret(buf);

			return ;
		}
	}
	std::cout << "Too much friends, kill yourself and start over." << std::endl;
	return ;
}

int	main(void) {
	std::string	input;
	Contact		phonebook[8];

	while (1) {
		getline(std::cin, input, std::endl);
		if (input == "SEARCH") {
			// search;
		} else if (input == "ADD") {
			add_contact(phonebook);
		} else if (input == "EXIT") {
			return 0;
		}
	}
}
