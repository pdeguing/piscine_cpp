/**
 * File              : main.cpp
 * Author            : pdeguing <pdeguing@student.42.us.org>
 * Date              : 01.05.2019
 * Last Modified Date: 01.05.2019
 * Last Modified By  : pdeguing <pdeguing@student.42.us.org>
 */

#include "Sorcerer.class.hpp"

int	main() {
	Sorcerer	gandalf("Gandalf", "The White");
	Victim		sarouman("Sarouman");

	std::cout << gandalf << sarouman;

	gandalf.polymorph(sarouman);

	return 0;
}
