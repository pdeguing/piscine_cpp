/**
 * File              : ScavTrap.hpp
 * Author            : pdeguing <pdeguing@student.42.us.org>
 * Date              : 11.04.2019
 * Last Modified Date: 11.04.2019
 * Last Modified By  : pdeguing <pdeguing@student.42.us.org>
 */

#ifndef SCAVTRAP_H
# define SCAVTRAP_H

#include <time.h>
#include <iostream>
#include "ClapTrap.hpp"

class	ScavTrap : public ClapTrap {
	public:
		ScavTrap(void);
		ScavTrap(std::string const name);
		ScavTrap(const ScavTrap& other);
		~ScavTrap(void);

		void	challengeNewcomer(std::string const target) const;
};

#endif
