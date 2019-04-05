/**
 * File              : Contact.class.hpp
 * Author            : pdeguing <pdeguing@student.42.us.org>
 * Date              : 05.04.2019
 * Last Modified Date: 05.04.2019
 * Last Modified By  : pdeguing <pdeguing@student.42.us.org>
 */

#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

class Contact {

	private:
		std::string	firstName;
		std::string	lastName;
		std::string	nickname;
		std::string	login;
		std::string	postalAddress;
		std::string	emailAddress;
		std::string	phoneNumber;
		std::string	birthday;
		std::string	favoriteMeal;
		std::string	underwearColor;
		std::string	darkestSecret;

	public:
		Contact(void);
		~Contact(void);

		std::string get_firstName(void) const;
		std::string get_lastName(void) const;
		std::string get_nickname(void) const;
		std::string get_login(void) const;
		std::string get_postalAddress(void) const;
		std::string get_emailAddress(void) const;
		std::string get_phoneNumber(void) const;
		std::string get_favoriteMeal(void) const;
		std::string get_underwearColor(void) const;
		std::string get_darkestSecret(void) const;

		void set_firstName(std::string str);
		void set_lastName(std::string str);
		void set_nickname(std::string str);
		void set_login(std::string str);
		void set_postalAddress(std::string str);
		void set_emailAddress(std::string str);
		void set_phoneNumber(std::string str);
		void set_favoriteMeal(std::string str);
		void set_underwearColor(std::string str);
		void set_darkestSecret(std::string str);

};

#endif
