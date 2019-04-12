/**
 * File              : NinjaTrap.hpp
 * Author            : pdeguing <pdeguing@student.42.us.org>
 * Date              : 11.04.2019
 * Last Modified Date: 11.04.2019
 * Last Modified By  : pdeguing <pdeguing@student.42.us.org>
 */

#ifndef NINJATRAP_H
# define NINJATRAP_H

#include <time.h>
#include <iostream>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class	NinjaTrap : public ClapTrap {
	public:
		NinjaTrap(void);
		NinjaTrap(std::string const name);
		NinjaTrap(const NinjaTrap & other);
		~NinjaTrap(void);

		void	ninjaShoebox(FragTrap const & target) const;
		void	ninjaShoebox(ClapTrap const & target) const;
		void	ninjaShoebox(ScavTrap const & target) const;
		void	ninjaShoebox(NinjaTrap const & target) const;
};

#endif
