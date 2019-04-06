/**
 * File              : Contact.class.cpp
 * Author            : pdeguing <pdeguing@student.42.us.org>
 * Date              : 05.04.2019
 * Last Modified Date: 06.04.2019
 * Last Modified By  : pdeguing <pdeguing@student.42.us.org>
 */

#include "Contact.class.hpp"

Contact::Contact(void) {
	return ;
}

Contact::~Contact(void) {
	return ;
}

std::string	Contact::get_firstName(void) const {
	return this->firstName;
}

std::string	Contact::get_lastName(void) const {
	return this->lastName;
}

std::string	Contact::get_nickname(void) const {
	return this->nickname;
}

std::string	Contact::get_login(void) const {
	return this->login;
}

std::string	Contact::get_postalAddress(void) const {
	return this->postalAddress;
}

std::string	Contact::get_emailAddress(void) const {
	return this->emailAddress;
}

std::string	Contact::get_phoneNumber(void) const {
	return this->phoneNumber;
}

std::string	Contact::get_birthday(void) const {
	return this->birthday;
}

std::string	Contact::get_favoriteMeal(void) const {
	return this->favoriteMeal;
}

std::string	Contact::get_underwearColor(void) const {
	return this->underwearColor;
}

std::string	Contact::get_darkestSecret(void) const {
	return this->darkestSecret;
}


void	Contact::set_firstName(std::string str) {
	this->firstName = str;
}

void	Contact::set_lastName(std::string str) {
	this->lastName = str;
}

void	Contact::set_nickname(std::string str) {
	this->nickname = str;
}

void	Contact::set_login(std::string str) {
	this->login = str;
}

void	Contact::set_postalAddress(std::string str) {
	this->postalAddress = str;
}

void	Contact::set_emailAddress(std::string str) {
	this->emailAddress = str;
}

void	Contact::set_phoneNumber(std::string str) {
	this->phoneNumber = str;
}

void	Contact::set_birthday(std::string str) {
	this->birthday = str;
}

void	Contact::set_favoriteMeal(std::string str) {
	this->favoriteMeal = str;
}

void	Contact::set_underwearColor(std::string str) {
	this->underwearColor = str;
}

void	Contact::set_darkestSecret(std::string str) {
	this->darkestSecret = str;
}
