/**
 * File              : ClapTrap.cpp
 * Author            : pdeguing <pdeguing@student.42.us.org>
 * Date              : 11.04.2019
 * Last Modified Date: 11.04.2019
 * Last Modified By  : pdeguing <pdeguing@student.42.us.org>
 */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name("ClapTrap"),
				_hitPoints(100),
				_maxHitPoints(100),
				_energyPoints(50),
				_maxEnergyPoints(50),
				_level(1),
				_meleeAttackDamage(20),
				_rangedAttackDamage(15),
				_armorDamageReduction(3) {
	srand(time(NULL));
	std::cout << "No WAY those guys will know who's who!" << std::endl;
	return ;
}

ClapTrap::ClapTrap(std::string const name) : _name(name),
						_hitPoints(100),
						_maxHitPoints(100),
						_energyPoints(50),
						_maxEnergyPoints(50),
						_level(1),
						_meleeAttackDamage(20),
						_rangedAttackDamage(15),
						_armorDamageReduction(3) {
	std::cout << "So, this one time, I went to a party, and there was a beautiful subatomic particle accelerator there. Our circuits locked across the room and... I don't remember what happened next. I mean, I can't. We coulda gotten married and had gadgets together, but now, I'll never know."
		<< std::endl;
	srand(time(NULL));
	return ;
}

ClapTrap::ClapTrap(ClapTrap const & other) {
	std::cout << "Confused, then abused!"
		<< std::endl;
	srand(time(NULL));
	*this = other;
	return ;
}

ClapTrap::~ClapTrap( void) {
	std::cout << "Did you fire six shots, or five?"
		<< std::endl;
	return ;
}

ClapTrap &	ClapTrap::operator=(ClapTrap const & tmp) {
	std::cout << "I feel like an idiot now. <"
		<< this->_name << "> has been assigned to <"
		<< tmp.getName() << "> ..." << std::endl;

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

void	ClapTrap::rangedAttack(std::string const & target) {
	std::cout << "I'm a tornado of death and bullets! <" << this->_name
		<< "> attacks <" << target
		<< "> at range, causing <"
		<< this->_rangedAttackDamage
		<<"> damage!" << std::endl;
	return ;
}

void	ClapTrap::meleeAttack(std::string const & target) {
	std::cout << "Ready for the PUNCHline? <" << this->_name << "> punches <"
		<< target << "> in the face, causing <"
		<< this->_meleeAttackDamage
		<< "> damage!" << std::endl;
	return ;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	unsigned int	damage;

	if (amount <= this->_armorDamageReduction)
		damage = 0;
	else
		damage = amount - this->_armorDamageReduction;
	std::cout << "This could've gone better! <" << this->_name
		<< "> took <" << damage << "> damage!" << std::endl;
	if (damage >= this->_hitPoints) {
		this->_hitPoints = 0;
	} else {
		this->_hitPoints -= damage;
	}
	return ;
}

void	ClapTrap::beRepaired(unsigned int amount) {

	if (this->_maxHitPoints <= this->_hitPoints + amount) {
		amount = this->_maxHitPoints - this->_hitPoints;
	}
	std::cout << "Wow, that actually worked? <" << this->_name
		<< "> has been repaired! (+"
		<< amount << ")" << std::endl;
	this->_hitPoints += amount;
	return ;
}

std::string	ClapTrap::getName(void) const {
	return this->_name;
}

unsigned int	ClapTrap::getHitPoints(void) const {
	return this->_hitPoints;
}

unsigned int	ClapTrap::getMaxHitPoints(void) const {
	return this->_maxHitPoints;
}

unsigned int	ClapTrap::getEnergyPoints(void) const {
	return this->_energyPoints;
}

unsigned int	ClapTrap::getMaxEnergyPoints(void) const {
	return this->_maxEnergyPoints;
}

unsigned int	ClapTrap::getLevel(void) const {
	return this->_level;
}

unsigned int	ClapTrap::getMeleeAttackDamage(void) const {
	return this->_meleeAttackDamage;
}

unsigned int	ClapTrap::getRangedAttackDamage(void) const {
	return this->_rangedAttackDamage;
}

unsigned int	ClapTrap::getArmorDamageReduction(void) const {
	return this->_armorDamageReduction;
}
