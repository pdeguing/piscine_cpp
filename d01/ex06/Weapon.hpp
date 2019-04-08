/**
 * File              : Weapon.hpp
 * Author            : pdeguing <pdeguing@student.42.us.org>
 * Date              : 08.04.2019
 * Last Modified Date: 08.04.2019
 * Last Modified By  : pdeguing <pdeguing@student.42.us.org>
 */

#ifndef WEAPON_HPP
# define WEAPON_HPP

class	Weapon {
	private:
		std::string	_type;

	public:
		Weapon(void);
		~Weapon(void);

		const std::string	&getType(void);
		void			setType(std::string t);
};

#endif
