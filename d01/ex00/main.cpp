/**
 * File              : main.cpp
 * Author            : pdeguing <pdeguing@student.42.us.org>
 * Date              : 08.04.2019
 * Last Modified Date: 08.04.2019
 * Last Modified By  : pdeguing <pdeguing@student.42.us.org>
 */

#include "Pony.hpp"

void	ponyOnTheHeap(void) {
	Pony	*Jimmy = new Pony("Jimmy", "Blue,Red,Yellow", true, true);
	std::cout << "This is little Jimmy:" << std::endl;
	Jimmy->draw();
	std::cout << "Now Jimmy must go away to a magical country... He has to fulfill his destiny..." << std::endl;
	delete Jimmy;
	std::cout << "He is gone. O_o" << std::endl << std::endl;
	return ;
}

void	ponyOnTheStack(void) {
	Pony	Booby = Pony("Booby", "White", false, false);
	std::cout << "This is little Booby:" << std::endl;
	Booby.draw();
	std::cout << "Time to return home Booby!" << std::endl;
	return ;
}

int	main(void) {

	std::cout << "Booby is on the stack, but Jimmy is on the heap, how cool is that??" << std::endl;
	ponyOnTheHeap();
	ponyOnTheStack();
	return 0;
}
