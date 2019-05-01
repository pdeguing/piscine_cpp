/**
 * File              : main.cpp
 * Author            : pdeguing <pdeguing@student.42.us.org>
 * Date              : 01.05.2019
 * Last Modified Date: 01.05.2019
 * Last Modified By  : pdeguing <pdeguing@student.42.us.org>
 */

#include "Sorcerer.class.hpp"
#include "Victim.class.hpp"
#include "Peon.class.hpp"

int	main() {
	Sorcerer	robert("Robert", "the Magnificent");
	Victim		jim("Jimmy");
//	Victim		jim2(jim);
	Peon		joe("Joe");
//	Peon		joe2(joe);

	std::cout << robert << jim << joe;

	robert.polymorph(jim);
	robert.polymorph(joe);

//	robert.polymorph(jim2);
//	robert.polymorph(joe2);

	return 0;
}
