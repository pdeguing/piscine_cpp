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

		FragTrap &	operator=(FragTrap tmp);

		void	rangedAttack(std::string const & target);
		void	meleeAttack(std::string const & target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

		void	vaulthunter_dot_exe(std::string const & target);

		std::string	getName(void) const;
		int		getHitPoints(void) const;
		int		getMaxHitPoints(void) const;
		int		getEnergyPoints(void) const;
		int		getMaxEnergyPoints(void) const;
		int		getLevel(void) const;
		int		getMeleeAttackDamage(void) const;
		int		getRangedAttackDamage(void) const;
		int		getArmorDamageReduction(void) const;


	private:
		std::string	_name;

		int	_hitPoints;
		int	_maxHitPoints;
		int	_energyPoints;
		int	_maxEnergyPoints;
		int	_level;

		int	_meleeAttackDamage;
		int	_rangedAttackDamage;
		int	_armorDamageReduction;
};

#endif
