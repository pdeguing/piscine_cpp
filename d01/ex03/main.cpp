/**
 * File              : main.cpp
 * Author            : pdeguing <pdeguing@student.42.us.org>
 * Date              : 08.04.2019
 * Last Modified Date: 08.04.2019
 * Last Modified By  : pdeguing <pdeguing@student.42.us.org>
 */

#include "Zombie.hpp"
#include "ZombieHorde.hpp"

int	main(void) {
	ZombieHorde	h = ZombieHorde(7);

	h.announce();
	return 0;
}
