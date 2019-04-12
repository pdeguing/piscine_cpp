/**
 * File              : NinjaTrap.cpp
 * Author            : pdeguing <pdeguing@student.42.us.org>
 * Date              : 11.04.2019
 * Last Modified Date: 11.04.2019
 * Last Modified By  : pdeguing <pdeguing@student.42.us.org>
 */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(void) {
	this->_name = "NinjaTrap";
	this->_hitPoints = 60;
	this->_maxHitPoints = 60;
	this->_energyPoints = 120;
	this->_maxEnergyPoints = 120;
	this->_level = 1;
	this->_meleeAttackDamage = 60;
	this->_rangedAttackDamage = 5;
	this->_armorDamageReduction = 0;
	srand(time(NULL));
	std::cout << "NinjaTrap -- start bootup sequence."
		<< std::endl;
	return ;
}

NinjaTrap::NinjaTrap(std::string const name) {
	this->_name = name;
	this->_hitPoints = 60;
	this->_maxHitPoints = 60;
	this->_energyPoints = 120;
	this->_maxEnergyPoints = 120;
	this->_level = 1;
	this->_meleeAttackDamage = 60;
	this->_rangedAttackDamage = 5;
	this->_armorDamageReduction = 0;
	std::cout << "Hey everybody! Check out my package!" << std::endl;
	srand(time(NULL));
	return ;
}

NinjaTrap::NinjaTrap(NinjaTrap const & other) {
	std::cout << "Look out everybody! Things are about to get awesome!" << std::endl;
	srand(time(NULL));
	*this = other;
	return ;
}

NinjaTrap::~NinjaTrap(void) {
	std::cout << "Not so tough after all!"
		<< std::endl;
	return ;
}

void	NinjaTrap::ninjaShoebox(FragTrap const & target) const {
	std::cout << "Some crazy guy <" << this->_name
		<< "> tried to throw a shoebox to <"
		<< target.getName()
		<< ">, but he realized he did not have shoes and kept it."
		<< std::endl;
}

void	NinjaTrap::ninjaShoebox(ClapTrap const & target) const {
	std::cout << "Some crazy guy <" << this->_name
		<< "> just threw a cheese full of shoeboxes to <"
		<< target.getName()
		<< ">, wtf?"
		<< std::endl;
}

void	NinjaTrap::ninjaShoebox(ScavTrap const & target) const {
	std::cout << "Some sane guy <" << this->_name
		<< "> just realized life has not meaning and that "
		<< "everything is pointless. <"
		<< target.getName()
		<< "> is a bit confused."
		<< std::endl;
}

void	NinjaTrap::ninjaShoebox(NinjaTrap const & target) const {
	std::cout << "Some crazy guy <" << this->_name
		<< "> just threw a shoebox full of cheese to <"
		<< target.getName()
		<< ">, wtf?"
		<< std::endl;
	return ;
}
