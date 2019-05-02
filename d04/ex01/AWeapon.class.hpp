/**
 * File              : AWeapon.class.hpp
 * Author            : pdeguing <pdeguing@student.42.us.org>
 * Date              : 02.05.2019
 * Last Modified Date: 02.05.2019
 * Last Modified By  : pdeguing <pdeguing@student.42.us.org>
 */

#ifndef AWEAPON_CLASS_HPP
# define AWEAPON_CLASS_HPP

#include <iostream>

class AWeapon {

	public:

		AWeapon(void);
		AWeapon(AWeapon const & src);
		AWeapon(std::string const & name, int apcost, int damage);
		virtual	~AWeapon(void);

		AWeapon &		operator=(AWeapon const &tmp);

		std::string const	getName(void) const;

		int			getAPCost(void) const;
		int			getDamage(void) const;

		virtual void		attack(void) const = 0;

	private:
		
		std::string		_name;
		int			_apcost;
		int			_damage;
};

#endif //AWEAPON_CLASS_HPP
