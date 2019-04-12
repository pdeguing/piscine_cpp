/**
 * File              : main.cpp
 * Author            : pdeguing <pdeguing@student.42.us.org>
 * Date              : 11.04.2019
 * Last Modified Date: 11.04.2019
 * Last Modified By  : pdeguing <pdeguing@student.42.us.org>
 */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int	main() {
	ScavTrap	a;
	FragTrap	b("BizTrap");
	ScavTrap	c("CurlyTrap");
	FragTrap	d("MarvTrap");

	a = c;
	d.vaulthunter_dot_exe("CurlyTrap");
	a.meleeAttack("BizTrap");
	b.takeDamage(30);
	d.vaulthunter_dot_exe("CurlyTrap");
	c.rangedAttack("BizTrap");
	c.challengeNewcomer("BizTrap");
	b.takeDamage(20);
	d.vaulthunter_dot_exe("CurlyTrap");
	d.vaulthunter_dot_exe("CurlyTrap");
	b.beRepaired(50);
	c.challengeNewcomer("MarvTrap");

	return 0;
}
