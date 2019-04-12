/**
 * File              : ScavTrap.cpp
 * Author            : pdeguing <pdeguing@student.42.us.org>
 * Date              : 11.04.2019
 * Last Modified Date: 11.04.2019
 * Last Modified By  : pdeguing <pdeguing@student.42.us.org>
 */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : _name("ScavTrap"),
				_hitPoints(100),
				_maxHitPoints(100),
				_energyPoints(50),
				_maxEnergyPoints(50),
				_level(1),
				_meleeAttackDamage(20),
				_rangedAttackDamage(15),
				_armorDamageReduction(3) {
	srand(time(NULL));
	std::cout << "Dude, default is boring!" << std::endl;
	return ;
}

ScavTrap::ScavTrap(std::string const name) : _name(name),
						_hitPoints(100),
						_maxHitPoints(100),
						_energyPoints(50),
						_maxEnergyPoints(50),
						_level(1),
						_meleeAttackDamage(20),
						_rangedAttackDamage(15),
						_armorDamageReduction(3) {
	std::cout << "Can I shoot something now? Or climd some stairs? \
		SOMETHING exciting?" << std::endl;
	srand(time(NULL));
	return ;
}

ScavTrap::ScavTrap(ScavTrap const & other) {
	std::cout << "This time it'll be awesome, I promise!" << std::endl;
	srand(time(NULL));
	*this = other;
	return ;
}

ScavTrap::~ScavTrap( void) {
	std::cout << "I'll stop talking when I'm dea................. *SILENCE*"
		<< std::endl;
	return ;
}

ScavTrap &	ScavTrap::operator=(ScavTrap const & tmp) {
	std::cout << "Equalizing with <" << tmp.getName() << "> ..." << std::endl;

	if (this == &tmp)
		return *this;
	this->_name = tmp.getName();
	this->_hitPoints = tmp.getHitPoints();
	this->_maxHitPoints = tmp.getMaxHitPoints();
	this->_energyPoints = tmp.getEnergyPoints();
	this->_maxEnergyPoints =  tmp.getMaxEnergyPoints();
	this->_level = tmp.getLevel();
	this->_meleeAttackDamage = tmp.getMeleeAttackDamage();
	this->_rangedAttackDamage = tmp.getRangedAttackDamage();
	this->_armorDamageReduction = tmp.getArmorDamageReduction();

	return *this;
}

void	ScavTrap::rangedAttack(std::string const & target) {
	std::cout << "Crazy young whippersnappers... <" << this->_name
		<< "> attacks <" << target
		<< "> at range, causing <"
		<< this->_rangedAttackDamage
		<<"> damage!" << std::endl;
	return ;
}

void	ScavTrap::meleeAttack(std::string const & target) {
	std::cout << "Guess who? <" << this->_name << "> punches <"
		<< target <<"> in the face, causing <"
		<< this->_meleeAttackDamage
		<< "> damage!" << std::endl;
	return ;
}

void	ScavTrap::takeDamage(unsigned int amount) {
	unsigned int	damage;

	if (amount <= this->_armorDamageReduction)
		damage = 0;
	else
		damage = amount - this->_armorDamageReduction;
	std::cout << "Woah! Oh! Jeez! <" << this->_name
		<< "> took <" << damage << "> damage!" << std::endl;
	if (damage >= this->_hitPoints) {
		this->_hitPoints = 0;
	} else {
		this->_hitPoints -= damage;
	}
	return ;
}

void	ScavTrap::beRepaired(unsigned int amount) {

	if (this->_maxHitPoints <= this->_hitPoints + amount) {
		amount = this->_maxHitPoints - this->_hitPoints;
	}
	std::cout << "Sweet life juice! <" << this->_name
		<< "> has been repaired! (+"
		<< amount << ")" << std::endl;
	this->_hitPoints += amount;
	return ;
}

void	ScavTrap::challengeNewcomer(void) const {
	return ;
}

std::string	ScavTrap::getName(void) const {
	return this->_name;
}

unsigned int	ScavTrap::getHitPoints(void) const {
	return this->_hitPoints;
}

unsigned int	ScavTrap::getMaxHitPoints(void) const {
	return this->_maxHitPoints;
}

unsigned int	ScavTrap::getEnergyPoints(void) const {
	return this->_energyPoints;
}

unsigned int	ScavTrap::getMaxEnergyPoints(void) const {
	return this->_maxEnergyPoints;
}

unsigned int	ScavTrap::getLevel(void) const {
	return this->_level;
}

unsigned int	ScavTrap::getMeleeAttackDamage(void) const {
	return this->_meleeAttackDamage;
}

unsigned int	ScavTrap::getRangedAttackDamage(void) const {
	return this->_rangedAttackDamage;
}

unsigned int	ScavTrap::getArmorDamageReduction(void) const {
	return this->_armorDamageReduction;
}
