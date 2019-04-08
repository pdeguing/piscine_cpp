/**
 * File              : ZombieHorde.cpp
 * Author            : pdeguing <pdeguing@student.42.us.org>
 * Date              : 08.04.2019
 * Last Modified Date: 08.04.2019
 * Last Modified By  : pdeguing <pdeguing@student.42.us.org>
 */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n) : _n(n) {
	std::string	nrand = "aaaaaaa";
	std::string	rand_up = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	std::string	rand_vo = "aeiouy";
	std::string	rand_co = "bcdfghjklmpqrstvwxz";

	srand (time(NULL));
	this->_horde = new Zombie[n];
	for (int i = 0; i < n; i++) {
		nrand[0] = rand_up[rand() % 26];
		nrand[1] = rand_vo[rand() % 6];
		nrand[2] = rand_co[rand() % 19];
		nrand[3] = rand_vo[rand() % 6];
		nrand[4] = rand_vo[rand() % 6];
		nrand[5] = rand_co[rand() % 19];
		nrand[6] = rand_vo[rand() % 6];
		this->_horde[i].setName(nrand);
		this->_horde[i].setType("Orc");
	}
	return ;
}

ZombieHorde::~ZombieHorde(void) {
	std::cout << "For the Alliance!!! *Hurlevent cavalery charges*" << std::endl;
	delete [] this->_horde;

	return ;
}

void	ZombieHorde::announce(void) {
	for (int i = 0; i < this->_n; i++) {
		this->_horde[i].announce();
	}
}
