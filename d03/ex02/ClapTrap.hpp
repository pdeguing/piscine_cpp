/**
 * File              : ClapTrap.hpp
 * Author            : pdeguing <pdeguing@student.42.us.org>
 * Date              : 11.04.2019
 * Last Modified Date: 11.04.2019
 * Last Modified By  : pdeguing <pdeguing@student.42.us.org>
 */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

#include <time.h>
#include <iostream>

class	ClapTrap {

	public:

		ClapTrap(void);
		ClapTrap(std::string const name);
		ClapTrap(const ClapTrap& other);
		~ClapTrap(void);

		ClapTrap &	operator=(ClapTrap const & tmp);

		void	rangedAttack(std::string const & target);
		void	meleeAttack(std::string const & target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

		std::string	getName(void) const;
		unsigned int	getHitPoints(void) const;
		unsigned int	getMaxHitPoints(void) const;
		unsigned int	getEnergyPoints(void) const;
		unsigned int	getMaxEnergyPoints(void) const;
		unsigned int	getLevel(void) const;
		unsigned int	getMeleeAttackDamage(void) const;
		unsigned int	getRangedAttackDamage(void) const;
		unsigned int	getArmorDamageReduction(void) const;


	protected:

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
