/**
 * File              : ScavTrap.cpp
 * Author            : pdeguing <pdeguing@student.42.us.org>
 * Date              : 11.04.2019
 * Last Modified Date: 11.04.2019
 * Last Modified By  : pdeguing <pdeguing@student.42.us.org>
 */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) {
	this->_name = "ScavTrap";
	this->_hitPoints = 100;
	this->_maxHitPoints = 100;
	this->_energyPoints = 50;
	this->_maxEnergyPoints = 50;
	this->_level = 1;
	this->_meleeAttackDamage = 20;
	this->_rangedAttackDamage = 15;
	this->_armorDamageReduction = 3;
	srand(time(NULL));
	std::cout << "Dude, default is boring!" << std::endl;
	return ;
}

ScavTrap::ScavTrap(std::string const name) {
	this->_name = name;
	this->_hitPoints = 100;
	this->_maxHitPoints = 100;
	this->_energyPoints = 50;
	this->_maxEnergyPoints = 50;
	this->_level = 1;
	this->_meleeAttackDamage = 20;
	this->_rangedAttackDamage = 15;
	this->_armorDamageReduction = 3;
	std::cout << "Can I shoot something now? Or climd some stairs? SOMETHING exciting?"
		<< std::endl;
	srand(time(NULL));
	return ;
}

ScavTrap::ScavTrap(ScavTrap const & other) {
	std::cout << "Does this mean I can start dancing? Pleeeeeeaaaaase?"
		<< std::endl;
	srand(time(NULL));
	*this = other;
	return ;
}

ScavTrap::~ScavTrap( void) {
	std::cout << "Oh. My. God. What if I'm like... a fish? And, if I'm not"
		<< " moving... I stop breathing? AND THEN I'LL DIE! HELP ME! HELP"
		<< " MEEEEE HEE HEE HEEE! HHHHHHHELP"
		<< std::endl;
	return ;
}

void	ScavTrap::challengeNewcomer(std::string const target) const {
	int	r;

	r = rand() % 3;
	switch (r) {

		case 0:
			std::cout << "Hey <" << target
				<< ">! Dance battle! Or, you know... regular"
				<< " battle." << std::endl;
			break ;

		case 1:
			std::cout << "You know what <"
				<< target
				<< ">? Why don't you play with your eyes closed?"
				<< std::endl;
			break ;

		case 2:
			std::cout << "They say I should challenge you. But <"
				<< target
				<< ">, being you must already be such a challenge..."
				<< std::endl;
			break ;
	}
	return ;
}
