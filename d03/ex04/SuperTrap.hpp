/**
 * File              : SuperTrap.hpp
 * Author            : pdeguing <pdeguing@student.42.us.org>
 * Date              : 11.04.2019
 * Last Modified Date: 11.04.2019
 * Last Modified By  : pdeguing <pdeguing@student.42.us.org>
 */

#ifndef SUPERTRAP_H
# define SUPERTRAP_H

#include <time.h>
#include <iostream>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

class	SuperTrap : public FragTrap, public NinjaTrap {

	public:
		SuperTrap(void);
		SuperTrap(std::string const name);
		SuperTrap(const SuperTrap & other);
		~SuperTrap(void);

		void	meleeAttack(std::string const & target);
		void	rangedAttack(std::string const & target);
};

#endif
