/**
 * File              : ZombieHorde.hpp
 * Author            : pdeguing <pdeguing@student.42.us.org>
 * Date              : 08.04.2019
 * Last Modified Date: 08.04.2019
 * Last Modified By  : pdeguing <pdeguing@student.42.us.org>
 */

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

#include "Zombie.hpp"
#include <stdlib.h>
#include <time.h>

class	ZombieHorde {
	private:
		Zombie	*_horde;
		int	_n;

	public:
		ZombieHorde(int n);
		~ZombieHorde(void);

		void	announce(void);
};

#endif
