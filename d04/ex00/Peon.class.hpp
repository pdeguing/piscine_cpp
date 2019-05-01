/**
 * File              : Peon.class.hpp
 * Author            : pdeguing <pdeguing@student.42.us.org>
 * Date              : 01.05.2019
 * Last Modified Date: 01.05.2019
 * Last Modified By  : pdeguing <pdeguing@student.42.us.org>
 */

#ifndef PEON_CLASS_HPP
# define PEON_CLASS_HPP

#include <iostream>

class Peon : public Victim {

	public:

		Peon(std::string const name);
		Peon(Peon & src);
		~Peon(void);
};

#endif
