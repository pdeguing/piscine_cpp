/**
 * File              : FragTrap.hpp
 * Author            : pdeguing <pdeguing@student.42.us.org>
 * Date              : 11.04.2019
 * Last Modified Date: 11.04.2019
 * Last Modified By  : pdeguing <pdeguing@student.42.us.org>
 */

#ifndef FRAGTRAP_H
# define FRAGTRAP_H

#include <time.h>
#include <iostream>

class	FragTrap {
	public:
		FragTrap(void);
		FragTrap(std::string const name);
		FragTrap(const FragTrap& other);
		~FragTrap(void);

		FragTrap &	operator=(FragTrap const & tmp);

		void	rangedAttack(std::string const & target);
		void	meleeAttack(std::string const & target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

		void	vaulthunter_dot_exe(std::string const & target);

		std::string	getName(void) const;
		unsigned int	getHitPoints(void) const;
		unsigned int	getMaxHitPoints(void) const;
		unsigned int	getEnergyPoints(void) const;
		unsigned int	getMaxEnergyPoints(void) const;
		unsigned int	getLevel(void) const;
		unsigned int	getMeleeAttackDamage(void) const;
		unsigned int	getRangedAttackDamage(void) const;
		unsigned int	getArmorDamageReduction(void) const;


	private:
		std::string	_name;

		unsigned int	_hitPoints;
		unsigned int	_maxHitPoints;
		unsigned int	_energyPoints;
		unsigned int	_maxEnergyPoints;
		unsigned int	_level;

		unsigned int	_meleeAttackDamage;
		unsigned int	_rangedAttackDamage;
		unsigned int	_armorDamageReduction;
};

#endif
