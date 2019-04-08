/**
 * File              : main.cpp
 * Author            : pdeguing <pdeguing@student.42.us.org>
 * Date              : 08.04.2019
 * Last Modified Date: 08.04.2019
 * Last Modified By  : pdeguing <pdeguing@student.42.us.org>
 */

#include "Zombie.hpp"

int	main(void) {
	Zombie	*bill = new Zombie("Bill", "Programmer");

	bill->announce();
	delete bill;
	return 0;
}
