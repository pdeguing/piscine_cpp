/**
 * File              : Pony.hpp
 * Author            : pdeguing <pdeguing@student.42.us.org>
 * Date              : 08.04.2019
 * Last Modified Date: 08.04.2019
 * Last Modified By  : pdeguing <pdeguing@student.42.us.org>
 */

#ifndef PONY_HPP
# define PONY_HPP

#include <iostream>
#include <string>

class	Pony {
	public:
		std::string	name;
		std::string	color;
		bool		rainbow;
		bool		unicorn;

		Pony(std::string name, std::string color, bool rainbow,
				bool unicorn);
		~Pony(void);
		void	draw(void) const;
};

#endif
