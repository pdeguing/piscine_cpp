/**
 * File              : main.cpp
 * Author            : pdeguing <pdeguing@student.42.us.org>
 * Date              : 11.04.2019
 * Last Modified Date: 11.04.2019
 * Last Modified By  : pdeguing <pdeguing@student.42.us.org>
 */

#include "FragTrap.hpp"

int	main() {
	FragTrap	a;
	FragTrap	b("BizTrap");
	FragTrap	c("CurlyTrap");
	FragTrap	d("MarvTrap");

	a = d;
	d.vaulthunter_dot_exe("CurlyTrap");
	a.meleeAttack("BizTrap");
	b.takeDamage(30);
	d.vaulthunter_dot_exe("CurlyTrap");
	c.rangedAttack("BizTrap");
	b.takeDamage(20);
	d.vaulthunter_dot_exe("CurlyTrap");
	d.vaulthunter_dot_exe("CurlyTrap");
	d.vaulthunter_dot_exe("CurlyTrap");
	b.beRepaired(50);

	return 0;
}
