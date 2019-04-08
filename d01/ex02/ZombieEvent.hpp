/**
 * File              : ZombieEvent.hpp
 * Author            : pdeguing <pdeguing@student.42.us.org>
 * Date              : 08.04.2019
 * Last Modified Date: 08.04.2019
 * Last Modified By  : pdeguing <pdeguing@student.42.us.org>
 */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

#include <iostream>
#include <string>
#include "Zombie.hpp"

class	ZombieEvent {
	private:
		std::string	_type;

	public:
		ZombieEvent(void);
		~ZombieEvent(void);

		void	setZombieType(std::string type);
		Zombie	*newZombie(std::string name);
		void	randomChump(void);
};

#endif
