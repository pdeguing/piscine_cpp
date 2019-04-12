/**
 * File              : FragTrap.hpp
 * Author            : pdeguing <pdeguing@student.42.us.org>
 * Date              : 11.04.2019
 * Last Modified Date: 11.04.2019
 * Last Modified By  : pdeguing <pdeguing@student.42.us.org>
 */

#ifndef FRAGTRAP_H
# define FRAGTRAP_H

#include <time.h>
#include <iostream>
#include "ClapTrap.hpp"

class	FragTrap : virtual public ClapTrap {

	public:
		FragTrap(void);
		FragTrap(std::string const name);
		FragTrap(const FragTrap & other);
		~FragTrap(void);

		void	vaulthunter_dot_exe(std::string const & target);
};

#endif
