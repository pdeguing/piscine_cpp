/**
 * File              : main.cpp
 * Author            : pdeguing <pdeguing@student.42.us.org>
 * Date              : 11.04.2019
 * Last Modified Date: 11.04.2019
 * Last Modified By  : pdeguing <pdeguing@student.42.us.org>
 */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int	main() {
	ClapTrap	a;
	FragTrap	b("BizTrap");
	ScavTrap	c("CurlyTrap");
	FragTrap	d("MarvTrap");
	ClapTrap	e("HellTrap");
	NinjaTrap	f("PlatoTrap");
	SuperTrap	g("TrapTrap");

	a = b;
	g.meleeAttack("BizTrap");
	b.takeDamage(30);
	g.vaulthunter_dot_exe("CurlyTrap");
	c.rangedAttack("HellTrap");
	e.takeDamage(20);
	e.beRepaired(50);
	c.challengeNewcomer("MarvTrap");
	f.ninjaShoebox(b);
	g.ninjaShoebox(c);

	return 0;
}
