/**
 * File              : Character.class.hpp
 * Author            : pdeguing <pdeguing@student.42.us.org>
 * Date              : 02.05.2019
 * Last Modified Date: 02.05.2019
 * Last Modified By  : pdeguing <pdeguing@student.42.us.org>
 */

#ifndef CHARACTER_CLASS_HPP
# define CHARACTER_CLASS_HPP

#include <iostream>
#include "Enemy.class.hpp"
#include "AWeapon.class.hpp"

class Character {

	public:
		int		ap;
		AWeapon		*weapon;

		Character(Character const & src);
		Character(std::string const & name);
		~Character(void);

		Character &	operator=(Character const &tmp);

		void		recoverAP(void);
		void		equip(AWeapon *);
		void		attack(Enemy *);

		std::string const	getName(void) const;

	private:

		Character(void);

		std::string	_name;
};

std::ostream &	operator<<(std::ostream & ofs, const Character & s);

#endif // CHARACTER_CLASS_HPP
