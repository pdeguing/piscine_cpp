/**
 * File              : FragTrap.cpp
 * Author            : pdeguing <pdeguing@student.42.us.org>
 * Date              : 11.04.2019
 * Last Modified Date: 11.04.2019
 * Last Modified By  : pdeguing <pdeguing@student.42.us.org>
 */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) {
	this->_name = "FragTrap";
	this->_hitPoints = 100;
	this->_maxHitPoints = 100;
	this->_energyPoints = 100;
	this->_maxEnergyPoints = 100;
	this->_level = 1;
	this->_meleeAttackDamage = 30;
	this->_rangedAttackDamage = 20;
	this->_armorDamageReduction = 5;
	srand(time(NULL));
	std::cout << "If I use my default constructor, does it mean I'm \
		defaulting?" << std::endl;
	return ;
}

FragTrap::FragTrap(std::string const name) {
	this->_name = name;
	this->_hitPoints = 100;
	this->_maxHitPoints = 100;
	this->_energyPoints = 100;
	this->_maxEnergyPoints = 100;
	this->_level = 1;
	this->_meleeAttackDamage = 30;
	this->_rangedAttackDamage = 20;
	this->_armorDamageReduction = 5;
	std::cout << "Recompiling my combat code!" << std::endl;
	srand(time(NULL));
	return ;
}

FragTrap::FragTrap(FragTrap const & other) {
	std::cout << "This time it'll be awesome, I promise!" << std::endl;
	srand(time(NULL));
	*this = other;
	return ;
}

FragTrap::~FragTrap( void) {
	std::cout << "I'll stop talking when I'm dea................. *SILENCE*"
		<< std::endl;
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
				<< "> with Laser Inferno."
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
