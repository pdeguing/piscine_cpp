/**
 * File              : main.cpp
 * Author            : pdeguing <pdeguing@student.42.us.org>
 * Date              : 08.04.2019
 * Last Modified Date: 08.04.2019
 * Last Modified By  : pdeguing <pdeguing@student.42.us.org>
 */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int	main(void) {
	Zombie		bill = Zombie("bill", "programmer");
	Zombie		*jo;
	ZombieEvent	ze = ZombieEvent();

	bill.announce();
	ze.setZombieType("surfer");
	jo = ze.newZombie("jo");
	jo->announce();
	delete jo;
	ze.randomChump();
	ze.randomChump();
	ze.randomChump();
	return 0;
}
