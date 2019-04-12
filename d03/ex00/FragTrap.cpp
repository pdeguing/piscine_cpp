/**
 * File              : FragTrap.cpp
 * Author            : pdeguing <pdeguing@student.42.us.org>
 * Date              : 11.04.2019
 * Last Modified Date: 11.04.2019
 * Last Modified By  : pdeguing <pdeguing@student.42.us.org>
 */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : _name("FragTrap") {
	return ;
}

FragTrap::FragTrap(std::string const name) : _name(name),
	_hitPoints(100),
	_maxHitPoints(100),
	_energyPoints(100),
	_maxEnergyPoints(100),
	_level(1),
	_meleeAttackDamage(30),
	_rangedAttackDamage(20),
	_armorDamageReduction(5) {
	std::cout << "Recompiling my combat code!" << std::endl;
	return ;
}

FragTrap::FragTrap(const FragTrap & other) {
	std::cout << "This time it'll be awesome, I promise!" << std::endl;
	*this = other;
	return ;
}

FragTrap::~FragTrap( void) {
	std::cout << "I'll stop talking when I'm dea................. *SILENCE*"
		<< std::endl;
	return ;
}

FragTrap &	FragTrap::operator=(FragTrap tmp) {
	std::cout << "Equalizing with <" << tmp.getName() << "> ..." << std::endl;

	this->_name = tmp.getName();
	this->_hitPoints = tmp.getHitPoints();
	this->_maxHitPoints, tmp.getMaxHitPoints();
	this->_energyPoints, tmp.getEnergyPoints();
	this->_maxEnergyPoints, tmp.getMaxEnergyPoints();
	this->_level, tmp.getLevel();
	this->_meleeAttackDamage, tmp.getMeleeAttackDamage();
	this->_rangedAttackDamage, tmp.getRangedAttackDamage();
	this->_armorDamageReduction, tmp.getArmorDamageReduction();

	return *this;
}

void	FragTrap::rangedAttack(std::string const & target) {
	std::cout << "Crazy young whippersnappers... <" << this->_name
		<< "> attacks <" << target
		<< "> at range, causing <"
		<< this->_rangedAttackDamage
		<<"> damage!" << std::endl;
	return ;
}

void	FragTrap::meleeAttack(std::string const & target) {
	std::cout << "Guess who? <" << this->_name << "> punches <"
		<< target <<"> in the face, causing <"
		<< this->_meleeAttackDamage
		<< "> damage!" << std::endl;
	return ;
}

void	FragTrap::takeDamage(unsigned int amount) {
	int	damage;

	damage = amount - this->_armorDamageReduction;
	if (damage < 0)
		damage = 0;
	std::cout << "Woah! Oh! Jeez! <" << this->_name
		<< "> took <" << damage << "> damage!" << std::endl;
	if (damage >= this->_hitPoints) {
		this->_hitPoints = 0;
	} else {
		this->_hitPoints -= damage;
	}
	return ;
}

void	FragTrap::beRepaired(unsigned int amount) {

	if (this->_maxHitPoints - this->_hitPoints + amount < 0) {
		amount = this->_maxHitPoints - this->_hitPoints;
	}
	std::cout << "Sweet life juice! <" << this->_name
		<< "> has been repaired! (+"
		<< amount << ")" << std::endl;
	this->_hitPoints += amount;
	return ;
}

void	FragTrap::vaulthunter_dot_exe(std::string const & target) {
	int	r;

	if (this->_energyPoints < 25) {
		std::cout << "<" << this->_name << "> is exhausted and useless."
			<< std::endl;
		return ;
	}
	this->_energyPoints -= 25;
	srand(time(NULL));
	r = rand() % 5;
	switch (r) {
		case 0:
			std::cout << this->_name
				<< ": \"Knock-knock.\" "
				<< target
				<< ": \"Who's there?\" "
				<< this->_name
				<< ": \"Tat.\" "
				<< target
				<< ": \"Tat who?\" "
				<< this->_name
				<< ": \"Not until you're older.\""
				<< std::endl;
			break ;
		
		case 1:
			std::cout << target
				<< ": \"Knock-knock.\" "
				<< this->_name
				<< ": \"Who's there?\" "
				<< target
				<< ": \"Wub.\" "
				<< this->_name
				<< ": \"Wub who?\" "
				<< target
				<< ": \"Wubwubwubwubwub.\""
				<< this->_name
				<< ": \"...You're dead to me.\""
				<< std::endl;
			break ;

		case 2:
			std::cout << target
				<< ": \"Knock-knock.\" "
				<< this->_name
				<< ": \"Who's there?\" "
				<< target
				<< ": \"Itch.\" "
				<< this->_name
				<< ": \"Itch who?\" "
				<< target
				<< ": \"Bless you!\""
				<< std::endl;
			break ;

		case 3:
			std::cout << "Boogie time! <"
				<< this->_name
				<< "> attacks <"
				<< target
				<< " with Laser Inferno."
				<< std::endl;
			break;

		case 4:
			std::cout << "I feel a joke about poop decks coming on! <"
				<< this->_name
				<< "> is about to make a very bad joke to <"
				<< target
				<< "> in Pirate Ship Mode."
				<< std::endl;
			break;
	}
	return ;
}

std::string	FragTrap::getName(void) const {
	return this->_name;
}

int		FragTrap::getHitPoints(void) const {
	return this->_hitPoints;
}

int		FragTrap::getMaxHitPoints(void) const {
	return this->_maxHitPoints;
}

int		FragTrap::getEnergyPoints(void) const {
	return this->_energyPoints;
}

int		FragTrap::getMaxEnergyPoints(void) const {
	return this->_maxEnergyPoints;
}

int		FragTrap::getLevel(void) const {
	return this->_level;
}

int		FragTrap::getMeleeAttackDamage(void) const {
	return this->_meleeAttackDamage;
}

int		FragTrap::getRangedAttackDamage(void) const {
	return this->_rangedAttackDamage;
}

int		FragTrap::getArmorDamageReduction(void) const {
}
