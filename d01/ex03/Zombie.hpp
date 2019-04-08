/**
 * File              : Zombie.hpp
 * Author            : pdeguing <pdeguing@student.42.us.org>
 * Date              : 08.04.2019
 * Last Modified Date: 08.04.2019
 * Last Modified By  : pdeguing <pdeguing@student.42.us.org>
 */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class	Zombie {

	private:
		std::string	_name;
		std::string	_type;

	public:
		Zombie(std::string, std::string);
		Zombie(void);
		~Zombie(void);

		void	setName(std::string n);
		void	setType(std::string t);

		void	announce(void);
};

#endif
