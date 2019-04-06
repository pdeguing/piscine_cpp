/**
 * File              : main.cpp
 * Author            : pdeguing <pdeguing@student.42.us.org>
 * Date              : 05.04.2019
 * Last Modified Date: 06.04.2019
 * Last Modified By  : pdeguing <pdeguing@student.42.us.org>
 */

#include <iostream>
#include <iomanip>
#include <string>
#include "Contact.class.hpp"

void	add_contact(Contact *phonebook) {
	std::string	buf;

	for (int i = 0; i < 8; i++) {
		if (phonebook[i].get_firstName() == "") {
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

std::string	trunc(std::string str) {
	if (str.length() <= 10)
		return str;
	str = str.erase(9, str.length() - 9);
	str.append(".");
	return str;
}

void	display_phonebook(Contact *phonebook) {
	std::string	firstName, lastName, nickname;

	for (int i = 0; i < 8; i++) {

		firstName = trunc(phonebook[i].get_firstName());
		lastName = trunc(phonebook[i].get_lastName());
		nickname = trunc(phonebook[i].get_nickname());

		std::cout << std::setfill(' ') << std::setw(10);
		std::cout << i << "|";
		std::cout << std::setfill(' ') << std::setw(10);
		std::cout << firstName << "|"; 
		std::cout << std::setfill(' ') << std::setw(10);
		std::cout << lastName << "|"; 
		std::cout << std::setfill(' ') << std::setw(10);
		std::cout << nickname << std::endl; 
	}
	return ;
}

void	search_contact(Contact *phonebook) {
	int	index;

	display_phonebook(phonebook);
	std::cout << "Desired entry? ";
	std::cin >> index;
	std::cin.ignore(100, '\n');
	if (std::cin.good() && index < 8) {
		std::cout << "First name: ";
		std::cout << phonebook[index].get_firstName() << std::endl;
		std::cout << "Last name: ";
		std::cout << phonebook[index].get_lastName() << std::endl;
		std::cout << "Nickname: ";
		std::cout << phonebook[index].get_nickname() << std::endl;
		std::cout << "Login: ";
		std::cout << phonebook[index].get_login() << std::endl;
		std::cout << "Postal Address: ";
		std::cout << phonebook[index].get_postalAddress() << std::endl;
		std::cout << "Email Address: ";
		std::cout << phonebook[index].get_emailAddress() << std::endl;
		std::cout << "Phone number: ";
		std::cout << phonebook[index].get_phoneNumber() << std::endl;
		std::cout << "Birthday: ";
		std::cout << phonebook[index].get_birthday() << std::endl;
		std::cout << "Favorite meal: ";
		std::cout << phonebook[index].get_favoriteMeal() << std::endl;
		std::cout << "Underwear color: ";
		std::cout << phonebook[index].get_underwearColor() << std::endl;
		std::cout << "Darkest secret: ";
		std::cout << phonebook[index].get_darkestSecret() << std::endl;
	} else {
		std::cin.clear();
		std::cout << "Segmentation Fault: error: you think it's funny?" << std::endl;
	}
	return ;
}

int	main(void) {
	std::string	input;
	Contact		phonebook[8];

	while (1) {
		std::cout << "$> ";
		std::getline(std::cin, input);
		if (input == "SEARCH") {
			search_contact(phonebook);
		} else if (input == "ADD") {
			add_contact(phonebook);
		} else if (input == "EXIT") {
			return 0;
		}
	}
}
