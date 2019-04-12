/**
 * File              : SuperTrap.cpp
 * Author            : pdeguing <pdeguing@student.42.us.org>
 * Date              : 11.04.2019
 * Last Modified Date: 11.04.2019
 * Last Modified By  : pdeguing <pdeguing@student.42.us.org>
 */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap(void) {
	this->_name = "SuperTrap";
	this->_hitPoints = 100;
	this->_maxHitPoints = 100;
	this->_energyPoints = 120;
	this->_maxEnergyPoints = 120;
	this->_level = 1;
	this->_meleeAttackDamage = 60;
	this->_rangedAttackDamage = 20;
	this->_armorDamageReduction = 5;
	srand(time(NULL));
	std::cout << "SuperTrap -- start bootup sequence." << std::endl;
	return ;
}

SuperTrap::SuperTrap(std::string const name) {
	this->_name = name;
	this->_hitPoints = 100;
	this->_maxHitPoints = 100;
	this->_energyPoints = 120;
	this->_maxEnergyPoints = 120;
	this->_level = 1;
	this->_meleeAttackDamage = 60;
	this->_rangedAttackDamage = 20;
	this->_armorDamageReduction = 5;
	std::cout << "SuperTrap -- start naming sequence." << std::endl;
	srand(time(NULL));
	return ;
}

SuperTrap::SuperTrap(SuperTrap const & other) {
	std::cout << "SuperTrap -- start cloning sequence." << std::endl;
	srand(time(NULL));
	*this = other;
	return ;
}

SuperTrap::~SuperTrap(void) {
	std::cout << "Even the best of us die!"
		<< std::endl;
	return ;
}

void	SuperTrap::meleeAttack(std::string const & target) {
	NinjaTrap::meleeAttack(target);
}

void	SuperTrap::rangedAttack(std::string const & target) {
	FragTrap::rangedAttack(target);
}
