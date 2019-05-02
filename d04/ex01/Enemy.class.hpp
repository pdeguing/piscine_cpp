/**
 * File              : Enemy.class.hpp
 * Author            : pdeguing <pdeguing@student.42.us.org>
 * Date              : 02.05.2019
 * Last Modified Date: 02.05.2019
 * Last Modified By  : pdeguing <pdeguing@student.42.us.org>
 */

#ifndef ENEMY_CLASS_HPP
# define ENEMY_CLASS_HPP

#include <iostream>

class Enemy {

	public:

		Enemy(void);
		Enemy(Enemy const & src);
		Enemy(int hp, std::string const & type);
		virtual	~Enemy(void);

		Enemy &	operator=(Enemy const &tmp);

		std::string const	getType(void) const;

		int			getHP() const;

		virtual void		takeDamage(int d);

	private:

		std::string		_type;
		int			_hp;
};

#endif //ENEMY_CLASS_HPP
