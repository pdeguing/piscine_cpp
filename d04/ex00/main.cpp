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
	Victim		*p = new Peon("Kabou");

	std::cout << robert << jim << joe << *p;

	robert.polymorph(jim);
	robert.polymorph(joe);

//	robert.polymorph(jim2);
	robert.polymorph(*p);

	return 0;
}
