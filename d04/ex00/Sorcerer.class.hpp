/**
 * File              : Sorcerer.class.hpp
 * Author            : pdeguing <pdeguing@student.42.us.org>
 * Date              : 01.05.2019
 * Last Modified Date: 01.05.2019
 * Last Modified By  : pdeguing <pdeguing@student.42.us.org>
 */

#ifndef SORCERER_CLASS_HPP
# define SORCERER_CLASS_HPP

#include <iostream>

class	Sorcerer {

	public:

		Sorcerer(Sorcerer const & other);
		Sorcerer(std::string const name, std::string const title);
		~Sorcerer(void);

		Sorcerer &	operator=(Sorcerer const & tmp);

		std::string	getName(void) const;
		std::string	getTitle(void) const;

	private:

		Sorcerer(void);

		std::string	_name;
		std::string	_title;
};

std::ostream &	operator<<(std::ostream & ofs, const Sorcerer & s);

#endif
